#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "db.h"
#include "ClickableLabel.h"
#include <QFileDialog>
#include <QDate>
#include <QFileInfoList>
#include <iostream>
#include <QFile>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    // problème entrela création de la base et l'ouverture,on doit d'abord vérifier que la base existe vraiment, donc il faut pour cela
    // l'ouvrir mais cela ne fonctionne pas vraiment

    db_manage = new DatabaseManager();

//    if(!db_manage->openDB())
        if (db_manage->createDB())// try to create database
            std::cout << "Base de données correctement ouverte" << std::endl;
        else
            std::cout << "Error while creating db" << std::endl;
//    else
//       std::cout << "Base de données correctement ouverte" << std::endl;
    if(db_manage->createImageTable() && db_manage->createPlayerTable())
        std::cout << "table Image et Player correctement créées " << std::endl;
    // création chaine vide
    file_url = new QString();

    // modification de l'année en cours si nécessaire dans l'onglet d'ajout de photo
    ui->setupUi(this);

    ui->Acceuil_label->setPixmap(*(new QPixmap("../Images/acceuil.jpg")));

    ui->spinBox->setMaximum(QDate::currentDate().year());
    ui->AnneeSearchSpinBox->setMaximum(QDate::currentDate().year());
    ui->spinBox->setValue(QDate::currentDate().year());
    ui->AnneeSearchSpinBox->setValue(QDate::currentDate().year());
    picture_date_Insert = -1; // au cas ou l'utilisateur ne spécifie pas la date
    player_name_Select = new QString();
    player_name_Insert = new QString();

    // valeur par défaut
    player_number_Insert = -1;
    player_number_Select = -1;

    picture_date_Select = -1;

    //          Problème pour connecter le clic sur le qlabel avec une fonction -> corrigé!

    // le cast de ui->urlSelectLabel de qlabel en ClickableLabel ne fonctionne pas, pour contourner le problème, aller dans
    // l'interface sous "forms" et faire un clic droit sur le urlSelectLabel, puis promote To -> et enfin vers la classe
    // ClickableLabel qu'on a créé auparavant


    ui->DeleteAlltoolButton->setVisible(false); // sera visible uniquement lorsque le mot de passe sera correct
    ui->DeleteAllTables->setVisible(false);
    ui->DeleteAllPlayer->setVisible(false);
    ui->DeleteImageTable->setVisible(false);
    ui->DeletePlayerTable->setVisible(false);
    ui->CreateImageTable->setVisible(false);
    ui->CreatePlayerTable->setVisible(false);
    ui->DeleteAlltoolButton->setIcon(QIcon("../warningIcon")); // attention ne pas ajouter l'extension lors de la création de l'icone

    ImageInfo = new ImageInfoWindow(db_manage,this);

    connect(ui->ModifyImagepushButton,SIGNAL(clicked()),this,SLOT(openImageInfo()));

        // il faut toujours passer par une connection pour modifier le contenu de la boite de dialogue à partir de la classe courante

    // connection pour modifier le contenu de l'url de la photo courante
    connect(this,SIGNAL(urlChanged(const QString&)),ImageInfo,SLOT(urlModif(const QString&)));
    // modification de la liste des joueurs présent sur la photo, on créera des liens vers une fenêtre d'info/modif
    // sur les informations du joueur
    connect(this,SIGNAL(urlChanged(const QString&)),ImageInfo,SLOT(insertPlayerItem(const QString&)));
    connect(ui->urlSelectLabel,SIGNAL(urlChanged(const QString&)),ImageInfo,SLOT(insertPlayerItem(const QString&)));

    // modifier l'onglet courant
    ui->AcceuilOnglet->setCurrentIndex(0);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::openImageInfo()
{

//    ImageInfo->setModal(true);
    ImageInfo->show();

}

void MainWindow::on_pushButton_3_clicked()
{
    QDir *dir = new QDir(QDir::current());
    dir->cd ("..");
    dir->cd("Images");
//    QString* dirImages = new QString(dir);

    QStringList fileNames = QFileDialog::getOpenFileNames(this, tr("Open File"),dir->absolutePath(),tr("Image Files (*.png *jpg *bmp)"));
//    std::cout << fileNames.front().toStdString()<< std::endl;
    if (!fileNames.empty())
    {
//        file_url = new QString (fileNames.front());
//        std::cout << " on tente de récupérer le nom du fichier en référence relative au lieu du lancement de l'application" << std::endl;
//        std::cout << "relative path " << QDir::current().relativeFilePath(*file_url).toStdString()<< std::endl;

        file_url = new QString (QDir::current().relativeFilePath(fileNames.front()));


        ui->urlInsertLabel->setPixmap(QPixmap(*file_url));

        std::cout << "url de l'image selectionnée"<< file_url->toStdString() << std::endl;
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    std::cout << "clic on \"insert in bdd\" button " << std::endl ;

    // on commence par récupérer le nom du joueur que l'on a entré au préalable
    player_name_Insert = new QString(ui->lineEdit_2->text());

    if (file_url->size() != 0)
    {
        std::cout << "url à insérer "<< file_url->toStdString() << std::endl;
//        QString* url = new QString(*file_url->c_str());
//        std::cout << "check url " << url->toStdString() << std::endl ;
        if (db_manage->insertImage(file_url,picture_date_Insert,player_name_Insert,player_number_Insert)!=-1)
        {
            ui->urlInsertLabel->setText("Image correctement ajoutée!");
        }
    }
    file_url->clear();
}


void MainWindow::on_spinBox_valueChanged(int arg1)
{
    picture_date_Insert = arg1;
}


void MainWindow::on_NumeroSpinBox_valueChanged(int arg1)
{
    player_number_Insert = arg1;
}


// effectuer une recherche dans la bdd en fonction de tous les éléments renseignés plus haut
void MainWindow::on_SearchpushButton_clicked()
{
    player_name_Select = new QString(ui->NameSearchLineEdit->text());

    QStringList* url_founded = db_manage->selectImage(picture_date_Select,player_name_Select,player_number_Select);

    if (url_founded->size() == 0)
    {
        ui->urlSelectLabel->setText("Aucune image ne correspond à votre recherche dans la base de donnée");
    }
    else
    {
        ui->urlSelectLabel->url_select = url_founded;
        emit (urlChanged(url_founded->at(0)));
        // gérer le fait que plusieurs images peuvent correspondre à la requête
        ui->urlSelectLabel->setPixmap(url_founded->at(0));
        ui->urlSelectLabel->current_image = 0;

        // on déverouille les boutons
        ui->ModifyImagepushButton->setEnabled(true);
        ui->pushButton_7->setEnabled(true);
    }
}



// autoriser la recherche si le nom du joueur est entré
void MainWindow::on_NameSearchLineEdit_textEdited(const QString &arg1)
{
    if (arg1.size() != 0)
        ui->SearchpushButton->setEnabled(true);
    else
    {
        player_name_Select->clear();
        ui->SearchpushButton->setEnabled(false);
    }
}


// renseigner le numéro lors de l'ajout lorsque l'utilisateur a coché la case correspondante
void MainWindow::on_NumeroInsertCheckBox_clicked(bool checked)
{
    ui->NumeroSpinBox->setEnabled(checked);
    if (!checked)
        player_number_Insert = -1;
    else
        player_number_Insert = ui->NumeroSpinBox->value();
}

void MainWindow::on_AnneeInsertCheckBox_clicked(bool checked)
{
    ui->spinBox->setEnabled(checked);
    if (!checked)
        picture_date_Insert = -1;
    else
        picture_date_Insert = ui->spinBox->value();
}

void MainWindow::on_lineEdit_2_textEdited(const QString &arg1)
{
    if (arg1.size() == 0)
    {
        player_name_Insert->clear();
        ui->pushButton_4->setEnabled(false);
    }
    else
        ui->pushButton_4->setEnabled(true);
}

void MainWindow::on_AnneeSearchSpinBox_valueChanged(int arg1)
{
    picture_date_Select = arg1;
}

void MainWindow::on_NumeroSelectCheckBox_clicked(bool checked)
{
    ui->NumeroSelectSpinBox_4->setEnabled(checked);
    if (checked)
    {
        player_number_Select = ui->NumeroSelectSpinBox_4->value();
    }
    else
        player_number_Select = -1;
}



void MainWindow::on_AnneeSelectCheckBox_clicked(bool checked)
{
    ui->AnneeSearchSpinBox ->setEnabled(checked);
    if (!checked)
        picture_date_Select = -1;
    else
        picture_date_Select = ui->AnneeSearchSpinBox->value();
}

void MainWindow::on_NumeroSelectSpinBox_4_valueChanged(int arg1)
{
    player_number_Select = arg1;
}


void MainWindow::on_Admin_pwlineEdit_textChanged(const QString &arg1)
{
    if(arg1.size()>0)
    {
        ui->AdminpushButton->setEnabled(true);
        ui->AdminpushButton->setStyleSheet("background-color:none");
    }
    else
        ui->AdminpushButton->setEnabled(false);
}



void MainWindow::on_AdminpushButton_clicked()
{
    if (ui->Admin_pwlineEdit->text() == "fcb2015")
    {
        ui->DeleteAlltoolButton->setVisible(true);
        ui->DeleteAllPlayer->setVisible(true);
        ui->DeleteAllTables->setVisible(true);
        ui->DeletePlayerTable->setVisible(true);
        ui->DeleteImageTable->setVisible(true);
        ui->CreateImageTable->setVisible(true);
        ui->CreatePlayerTable->setVisible(true);
        ui->AdminpushButton->setEnabled(false);
        ui->Admin_pwlineEdit->clear();
    }
    else
        ui->AdminpushButton->setStyleSheet("background-color:red");
}

void MainWindow::on_AcceuilOnglet_currentChanged(int index)
{
    if(index!= 3)// Admin
    {
        ui->DeleteAlltoolButton->setVisible(false);
        ui->AdminpushButton->setStyleSheet("background-color:none");
        ui->DeleteLabel->clear();
    }

    if (index != 1) // New image
    {
        ui->urlSelectLabel->setText("Aucune image séléctionnée pour le moment");
        ui->ModifyImagepushButton->setEnabled(false);
        ui->pushButton_7->setEnabled(false);
        ui->NameSearchLineEdit->clear();
        ui->NumeroSelectCheckBox->setChecked(false);
        ui->NumeroSelectSpinBox_4->clear();
        ui->AnneeSelectCheckBox->setChecked(false);
        ui->AnneeSearchSpinBox->clear();
        ui->SearchpushButton->setEnabled(false);
    }
}

void MainWindow::on_DeleteAlltoolButton_clicked()
{
    // requete sqlite pour supprimer toutes les entrées de la table image
    if (db_manage->suppressImages())
    {
        ui->DeleteLabel->setText("Toutes les images ont été correctement supprimées de la base");
    }
    else
        ui->DeleteLabel->setText("Problème lors de la suppression...");
}

void MainWindow::on_Admin_pwlineEdit_returnPressed()
{
    // simuler un clic sur le bouton "Vérification"
    on_AdminpushButton_clicked();
}

void MainWindow::on_DeleteAllPlayer_clicked()
{
    // supprimer tous les joueurs de la table Player
    if (db_manage->suppressPlayers())
    {
        ui->DeleteLabel->setText("Tous les joueurs ont été correctement supprimés de la base");
    }
    else
        ui->DeleteLabel->setText("Problème lors de la suppression...");
}

void MainWindow::on_DeleteAllTables_clicked()
{
    if (db_manage->dropAllTables())
        ui->DeleteLabel->setText("Les tables ont correctement étés supprimées de la base de donnée");
    else
        ui->DeleteLabel->setText("Problème lors de la suppression des tables... ");
}



void MainWindow::on_DeleteImageTable_clicked()
{
    if (db_manage->dropImageTable())
        ui->DeleteLabel->setText("La table Image a correctement été supprimée de la base de donnée");
    else
        ui->DeleteLabel->setText("Problème lors de la suppression... ");
}

void MainWindow::on_DeletePlayerTable_clicked()
{
    if (db_manage->dropPlayerTable())
        ui->DeleteLabel->setText("La table Joueur a correctement été supprimée de la base de donnée");
    else
        ui->DeleteLabel->setText("Problème lors de la suppression... ");
}

void MainWindow::on_CreateImageTable_clicked()
{
    if (db_manage->createImageTable())
        ui->DeleteLabel->setText("La table Image a correctement été recréée dans la base de donnée");
    else
        ui->DeleteLabel->setText("Problème lors de la création... ");
}

void MainWindow::on_CreatePlayerTable_clicked()
{
    if (db_manage->createPlayerTable())
        ui->DeleteLabel->setText("La table Joueur a correctement été recréée dans la base de donnée");
    else
        ui->DeleteLabel->setText("Problème lors de la création... ");
}

// Cette fonction n'est pas utile car l'ouverture de la fenêtre d'informations sur les joueurs se fait avec un CONNECT entre cette classe et la classe ImageInfoWindow
// la fonction permettant d'émettre le signal et le clic sur le bouton de modification de l'image "modifyImage"

//void MainWindow::on_ModifyImagepushButton_clicked()
//{

//}

void MainWindow::on_pushButton_7_clicked()
{
    // cliquer sur suppression de la photo
    if (db_manage->deleteImage(ui->urlSelectLabel->url_select->at(ui->urlSelectLabel->current_image)))
    {
        ui->urlSelectLabel->setText("Image correctement supprimée");
        // rendre les bouttons inaccessibles
        ui->ModifyImagepushButton->setEnabled(false);
        ui->pushButton_7->setEnabled(false);
        ui->NameSearchLineEdit->clear();
        ui->NumeroSelectCheckBox->setChecked(false);
        ui->NumeroSelectSpinBox_4->clear();
        ui->AnneeSelectCheckBox->setChecked(false);
        ui->AnneeSearchSpinBox->clear();
        ui->SearchpushButton->setEnabled(false);
    }
    else
    {
        ui->urlSelectLabel->setText("L'image n'a pas être supprimée ");
    }
}

void MainWindow::on_SearchNumber_clicked()
{
    // test de la recherche ...

    QDir *dir = new QDir(QDir::current());
    dir->cd ("..");
    dir->cd("Images");
    QStringList filters;
    filters << "*.png" << "*.jpg" << "*.bmp" << "*.ppm";
    QFileInfoList fileInfoList = dir->entryInfoList(filters, QDir::Files|QDir::NoDotAndDotDot);

    QFileInfoList::iterator it;

    QStringList* url_founded = new QStringList();


    for (it = fileInfoList.begin(); it != fileInfoList.end(); it++)
    {
        std::cout << (*it).absoluteFilePath().toStdString() << std::endl;
        QString command ("../Reconnaissance/./Morpho ");
        command.append((*it).absoluteFilePath() );

//        std::cout << command.toStdString() << std::endl;

        system(command.toStdString().c_str());

        // ensuite on applique le tesseract


        system("tesseract final.ppm out -psm 9");

        QFile f("out.txt");

        if (f.open(QIODevice::ReadWrite))
        {

            QTextStream in(&f);
            while (!in.atEnd())
            {
              QString line = in.readLine();
              line.replace("\\","1");
              line.replace("/","1");
              line.replace("|","1");
              line.replace("_","1");
              line.replace("z","2");
              line.replace("Z","2");
              line.replace("h","4");
              line.replace("H","4");
              line.replace("s","5");
              line.replace("S","5");
              line.replace("G","6");
              line.replace("B","8");
              line.replace("o","0");
              line.replace("O","0");
              std::cout << line.toStdString() << std::endl;
              if (line.toInt() == ui->CurrentNumber->value())
              {
                  // ajout à la liste des images à afficher
                  url_founded->append((*it).absoluteFilePath());
              }
            }
            f.close();
        }

        system ("rm ero.ppm dil.ppm dila.ppm copy.ppm final.ppm out.txt");






    }
//    system("Morph ")

    if (url_founded->size() == 0)
    {
        ui->ocr_found->setText("Aucune image ne correspond à votre recherche dans la base de donnée");
    }
    else
    {
        ui->ocr_found->url_select = url_founded;
        emit (urlChanged(url_founded->at(0)));
        // gérer le fait que plusieurs images peuvent correspondre à la requête
        ui->ocr_found->setPixmap(url_founded->at(0));
        ui->ocr_found->current_image = 0;
    }

}
