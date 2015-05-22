#include "imageinfowindow.h"
#include "ui_imageinfowindow.h"

ImageInfoWindow::ImageInfoWindow(DatabaseManager *db,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ImageInfoWindow)
{
    ui->setupUi(this);
    // création d'un database manager pour les requêtes sur la base de données
    this->db = db;
    ui->PlayerList->clear();
    player_window = new Player_Info();


    connect(this,SIGNAL(playerClicked(const QString&)),this,SLOT(openPlayerInfo(const QString&)));

    // les différentes connections qui permettront de modifier le contenu de la fenêtre d'information en fonction du joueur selectionné
    connect(this,SIGNAL(playerName(const QString&)),player_window,SLOT(modifieNom(const QString&)));


}

ImageInfoWindow::~ImageInfoWindow()
{
    delete ui;
}


void ImageInfoWindow::urlModif(const QString& url)
{
    ui->ImageUrl_label->setText(url);
}


void ImageInfoWindow::openPlayerInfo(const QString &player_name)
{
    // faire une recherche dans la base de données sur le joueur dont le nom a été séléctionné
    emit (playerName(player_name));


    // et terminer par un player_window.show
    player_window->show();
}

// on passe l'url en argument, et on cherche tous les joueurs appartenant à la photo
void ImageInfoWindow::insertPlayerItem(const QString& url)
{
    ui->PlayerList->clear();// commence par supprimer la liste
    QString* url_ = new QString(url);
    ui->PlayerList->addItems(*(db->selectPlayerByUrl(url_)));
}


void ImageInfoWindow::on_PlayerList_itemDoubleClicked(QListWidgetItem *item)
{
    emit (playerClicked(item->text()));
}
