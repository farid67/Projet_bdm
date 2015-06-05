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
    player_window = new Player_Info(db); // passer le databaseManager en argument pour pouvoir faire des requêtes directement sur la base
    addPlayer_window = new AddPlayerWindow(db); // comme pour la ligne du dessus


    connect(this,SIGNAL(playerClicked(const QString&)),this,SLOT(openPlayerInfo(const QString&)));

    // les différentes connections qui permettront de modifier le contenu de la fenêtre d'information en fonction du joueur selectionné
    connect(this,SIGNAL(playerName(const QString&)),player_window,SLOT(modifieNom(const QString&)));

    connect(this,SIGNAL(playerFirstName(const QVariant&)),player_window,SLOT(modifiePrenom(QVariant)));
    connect(this,SIGNAL(playerDateOfBirth(const QVariant&)),player_window,SLOT(modifieDateNaissance(const QVariant&)));
    connect(this,SIGNAL(playerNumero(QVariant)),player_window,SLOT(modifieNumero(QVariant)));
    connect(this,SIGNAL(playerYearOfArrival(const QVariant&)),player_window,SLOT(modifieAnneeArrivee(const QVariant&)));
    connect(this,SIGNAL(playerPosition(const QVariant&)),player_window,SLOT(modifiePoste(QVariant)));
    connect(this,SIGNAL(playerMatchs(const QVariant&)),player_window,SLOT(modifieNbMatchs(QVariant)));
    connect(this,SIGNAL(playerGoals(const QVariant&)),player_window,SLOT(modifieNbButs(QVariant)));

    // connection pour communiquer l'identifiant du joueur à la fenêtre player_info
    connect(this,SIGNAL(playerId(int)),player_window,SLOT(getPlayerId(int)));


    // connection permettant d'ouvrir la fênetre d'ajout de joueurs lors d'un clic sur "Add player to this Image"
    connect(ui->add_player_image,SIGNAL(clicked()),this,SLOT(openAddPlayer()));

    connect(this,SIGNAL(currentUrl(QString)),addPlayer_window,SLOT(getUrl(QString)));

    // ajouter un connect pour que la modification du contenu des joueurs de l'image dans AddPlayer soit affiché dans cette fenêtre

    // -> A FAIRE
    connect(addPlayer_window,SIGNAL(setPlayers(QStringList)),this,SLOT(updatePlayers(QStringList)));
}

ImageInfoWindow::~ImageInfoWindow()
{
    delete ui;
}


void ImageInfoWindow::urlModif(const QString& url)
{
    ui->ImageUrl_label->setText(url);
}


void ImageInfoWindow::updatePlayers(const QStringList &players)
{
    ui->PlayerList->clear();
    ui->PlayerList->addItems(players);
}

void ImageInfoWindow::openPlayerInfo(const QString &player_name)
{
    emit (playerName(player_name));
    // faire une recherche dans la base de données sur le joueur dont le nom a été séléctionné
//    QString* nom = new QString(player_name);
    std::map <QString,QVariant> *playerInfo = db->selectPlayerByName(player_name);
    //on garde en mémoire que l'identifiant du joueur est présent dans cette map -> cf emit (playerId(<value>)
    if (playerInfo !=NULL)
    {
        // id
        emit (playerId(playerInfo->at("id").toInt()));
        // other attributs
        emit(playerFirstName(playerInfo->at("prenom")));
        emit(playerDateOfBirth(playerInfo->at("date_naissance")));
        emit(playerNumero(playerInfo->at("joueur_numero")));
        emit(playerYearOfArrival(playerInfo->at("annee_arrivee")));
        emit(playerPosition(playerInfo->at("poste")));
        emit(playerMatchs(playerInfo->at("nb_matchs")));
        emit(playerGoals(playerInfo->at("nb_buts")));
    }

    // et terminer par un player_window.show
    player_window->show();
}


void ImageInfoWindow::openAddPlayer()
{
    emit (currentUrl(ui->ImageUrl_label->text())); // on envoie ensuite l'url de la photo courante à la classe AddPLayerWindow
    addPlayer_window->show();
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

void ImageInfoWindow::on_add_player_image_clicked()
{
    // ajout d'un joueur à l'image -> ouverture d'une fenetre permettant d'ajouter un joueur à l'image , avec édition d'informations
    // à faire

    // nouvelle fenêtre ui avec la même forme que celle des informations sur un joueur mais un bouton de confirmation qui permet d'ajouter un joueur sur la photo

}
