#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "db.h"
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
        std::cout << "table image correctement créée " << std::endl;
    // création chaine vide
    file_url = new QString();

    // modification de l'année en cours si nécessaire dans l'onglet d'ajout de photo
    ui->setupUi(this);
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


}

MainWindow::~MainWindow()
{
    delete ui;
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
        db_manage->insertImage(file_url,picture_date_Insert,player_name_Insert,player_number_Insert);
    }

//    file_url->clear();
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

    QStringList *url_select = db_manage->selectImage(picture_date_Select,player_name_Select,player_number_Select);

    if (url_select->size() == 0)
        ui->urlSelectLabel->setText("Aucune image ne correspond à votre recherche dans la base de donnée");
    else
        ui->urlSelectLabel->setPixmap(url_select->at(0));
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

