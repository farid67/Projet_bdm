#include "addplayerwindow.h"
#include "ui_addplayerwindow.h"

AddPlayerWindow::AddPlayerWindow(DatabaseManager *db, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddPlayerWindow)
{
    ui->setupUi(this);
    this->db =  db;

    // commence par mettre tout les champs à enable(false) pour ne pas modifier quoi que ce soit avant que le mot de passe soit correct
    setEnableAllFields(false);
    // par défaut ces boutons ne sont pas accessible
    ui->AddButton->setEnabled(false);
    ui->AddPlayer_2->setEnabled(false);
    ui->PlayerListWidget->clear();
}

AddPlayerWindow::~AddPlayerWindow()
{
    delete ui;
}


void AddPlayerWindow::setEnableAllFields(bool b)
{
    ui->PlayerBirthDateEdit->setEnabled(b);
    ui->PlayerFirstNameEdit->setEnabled(b);
    ui->PlayerGoalsEdit->setEnabled(b);
    ui->PlayerMatchsPlayedEdit->setEnabled(b);
    ui->PlayerNameEdit->setEnabled(b);
    ui->PlayerNumberEdit->setEnabled(b);
    ui->PlayerPositionEdit->setEnabled(b);
    ui->PlayerYearArrivalEdit->setEnabled(b);


    // décocher toutes les cases
    ui->BirthDateCheckBox->setChecked(false);
    ui->FirstNameCheckBox->setChecked(false);
    ui->GoalsCheckBox->setChecked(false);
    ui->MatchsCheckBox->setChecked(false);
    ui->NumeroCheckBox->setChecked(false);
    ui->PositionCheckBox->setChecked(false);
    ui->YearArrivalCheckBox->setChecked(false);
}

void AddPlayerWindow::getUrl(const QString& url)
{
    // on effectue la requête pour connaitre le nom des joueur présent sur la photo on fait ensuite une différence avec tous les joueurs de la base donnée et on pourra ensuite
    // les ajouter directement
    this->current_url = new QString(url);


    currentImage_Year = db->getImageYear(url);

    // on édite ensuite la liste des joueurs qui ne sont pas sur la photo mais qui sont présent dans la base de donnée
    ui->PlayerListWidget->addItems(*(db->selectPlayerNotInImage(*current_url)));
    ui->PlayerListWidget->setSelectionMode(QAbstractItemView::NoSelection);

}

void AddPlayerWindow::on_PwLineEdit_textChanged(const QString &arg1)
{
    // si la taille de arg1 est supérieure à 0 alors on permet de cliquer sur le bouton de vérification
    if (arg1.size()>0)
    {
//        ui->PwLineEdit->setEchoMode(QLineEdit::Password);
        ui->PwVerif->setEnabled(true);
    }
    else
    {
        ui->PwVerif->setEnabled(false);
    }
}

void AddPlayerWindow::on_PwVerif_clicked()
{
    //vérification du contenu du mdp
    if (ui->PwLineEdit->text()=="fcb2015")
    {
        // mdp ok -> rendre tous les champs non éditables à part celui du nom
        setEnableAllFields(false);
        ui->PlayerNameEdit->setEnabled(true);
        ui->PwLineEdit->clear();
    }
    else
    {
        ui->PwLineEdit->setEchoMode(QLineEdit::Normal);
        ui->PwLineEdit->setText("Mot de passe erroné");
        setEnableAllFields(false);
    }
}

void AddPlayerWindow::on_FirstNameCheckBox_clicked(bool checked)
{
    ui->PlayerFirstNameEdit->setEnabled(checked);
}

void AddPlayerWindow::on_NumeroCheckBox_clicked(bool checked)
{
    ui->PlayerNumberEdit->setEnabled(checked);
}

void AddPlayerWindow::on_BirthDateCheckBox_clicked(bool checked)
{
    ui->PlayerBirthDateEdit->setEnabled(checked);
}

void AddPlayerWindow::on_YearArrivalCheckBox_clicked(bool checked)
{
    ui->PlayerYearArrivalEdit->setEnabled(checked);
}

void AddPlayerWindow::on_PositionCheckBox_clicked(bool checked)
{
    ui->PlayerPositionEdit->setEnabled(checked);
}


void AddPlayerWindow::on_MatchsCheckBox_clicked(bool checked)
{
    ui->PlayerMatchsPlayedEdit->setEnabled(checked);
}


void AddPlayerWindow::on_GoalsCheckBox_clicked(bool checked)
{
    ui->PlayerGoalsEdit->setEnabled(checked);
}

void AddPlayerWindow::on_PlayerNameEdit_textEdited(const QString &arg1)
{
    ui->AddButton->setEnabled(arg1.size()>0);
}

void AddPlayerWindow::on_AddButton_clicked()
{
    // création d'une map
    std::map<QString,QVariant> *player_info = new std::map <QString ,QVariant>() ;

    // récupération du nom
    player_info->insert(std::pair<QString,QVariant>("nom",QVariant(ui->PlayerNameEdit->text())));

    // vérifier que si le prénom du joueur n'est pas spécifié, le QVariant en question sera un pointeur null
    if (ui->FirstNameCheckBox->isChecked())
        player_info->insert(std::pair<QString,QVariant>("prenom",QVariant(ui->PlayerFirstNameEdit->text())));
    // else -> le champ n'existera pas dans la map

    // vérifier que la case numéro est bien cochée
    if (ui->NumeroCheckBox->isChecked())
        player_info->insert(std::pair<QString,QVariant>("joueur_numero",QVariant(ui->PlayerNumberEdit->value())));
//    else
//        player_info->insert(std::pair<QString,QVariant>("joueur_numero",static_cast<QVariant>(NULL)));

    // pareil pour la date de naissance
    if (ui->BirthDateCheckBox->isChecked())
        player_info->insert(std::pair<QString,QVariant>("date_naissance",QVariant(ui->PlayerBirthDateEdit->date())));
//    else
//        player_info->insert(std::pair<QString,QVariant>("date_naissance",NULL));

    if (ui->PositionCheckBox->isChecked()) // index 0 -> G -  1 -> D
        player_info->insert(std::pair<QString,QVariant>("poste",QVariant(ui->PlayerPositionEdit->currentIndex())));
    // vérifier que si le champ n'est pas renseigné on peut facilement le retrouver

    if (ui->MatchsCheckBox->isChecked())
        player_info->insert(std::pair<QString,QVariant>("nb_matchs",QVariant(ui->PlayerMatchsPlayedEdit->value())));
//    else
//        player_info->insert(std::pair<QString,QVariant>("nb_matchs",NULL));

    if (ui->GoalsCheckBox->isChecked())
        player_info->insert(std::pair<QString,QVariant>("nb_buts",QVariant(ui->PlayerGoalsEdit->value())));
    // laisser le champ inexistant sinon

    if (ui->YearArrivalCheckBox->isChecked())
        player_info->insert(std::pair<QString,QVariant>("annee_arrivee",QVariant(ui->PlayerYearArrivalEdit->value())));


    // envoyer la map au db manager
    int playerId = db->addPlayer(player_info);
    if (playerId != -1)
    {
        // on crée ensuite un lien dans la table Image pour signifier que le joueur qui a été ajouté apparait sur la photo courante

        if(db->insertImage_Id(current_url,playerId,currentImage_Year))
        {
            ui->Informations->setText("Joueur correctement ajouté à l'image");
            // mise à jour de la liste des joueurs présents sur la photo dans la fenêtre précedente
            emit(setPlayers(*db->selectPlayerByUrl(current_url)));
        }
        else
            ui->Informations->setText("Une erreur s'est produite lors de l'ajout du joueur sur la photo");

    }
    else
    {
        // l'ajout du joueur à la base de données ne s'est pas correctement effectué
        ui->Informations->setText("Une erreur a eu lieu lors de l'ajout du joueur à la base de données");
    }
}

void AddPlayerWindow::on_PlayerListWidget_itemSelectionChanged()
{
    // on rend l'ajout possible
    ui->AddPlayer_2->setEnabled(true);
}


// ajout du joueur selectionné
void AddPlayerWindow::on_AddPlayer_2_clicked()
{
    // on ajoute le joueur qui est séléctionné
    QString * player_name = new QString(ui->PlayerListWidget->currentItem()->text());
    db->insertImage(current_url,currentImage_Year,player_name,-1);
    // on dit que le joueur a bien été ajouté et on met à jour la liste
    ui->Information_existingPlayer->setText("Joueur correctement ajouté à la photo courante");
    // mise à jour de la liste
    ui->PlayerListWidget->addItems(*(db->selectPlayerNotInImage(*current_url)));
    ui->PlayerListWidget->setSelectionMode(QAbstractItemView::NoSelection);

    // mise à jour de la liste des joueurs de la liste de la fenêtre précédente
    emit(setPlayers(*db->selectPlayerByUrl(current_url)));
}
