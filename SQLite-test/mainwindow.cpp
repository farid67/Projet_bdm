#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "db.h"
#include "ClickableLabel.h"
#include <QFileDialog>
#include <QDate>
#include <iostream>


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
    if(db_manage->createImageTable())
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
    ui->DeleteAlltoolButton->setIcon(QIcon("../warningIcon.png"));

    ImageInfo = new ImageInfoWindow(this);

    connect(ui->ModifyImagepushButton,SIGNAL(clicked()),this,SLOT(openImageInfo()));

    // il faut toujours passer par une connection pour modifier le contenu de la boite de dialogue à partir de la classe courante
    // FIN ICI
    connect(this,SIGNAL(urlChanged(const QString&)),ImageInfo,SLOT(urlModif(const QString&)));

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
        file_url = new QString (fileNames.front());
        ui->urlInsertLabel->setPixmap(QPixmap(*file_url));

        std::cout << "url de l'image selectionnée"<< file_url->toStdString() << std::endl;
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    std::cout << "clic on \"insert in bdd\" button " << std::endl ;

    // envoyer l'url au databaseManager
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
