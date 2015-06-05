#include "player_info.h"
#include "ui_player_info.h"



Player_Info::Player_Info(DatabaseManager* db, QWidget *parent) :
    QTabWidget(parent),
    ui(new Ui::Player_Info)
{
    ui->setupUi(this);

    //rendre par défaut tout les champs contenus dans la partie admin non éditable
    setAttributsEditable(false);
    setCurrentIndex(0);// par défaut on ouvre l'application sur l'onglet d'informations
    ui->PlayerFirstNameEdit->clear();
    ui->PlayerDateOfBirth->clear();
    ui->PlayerGoalsEdit->clear();
    ui->PlayerMatchsPlayedEdit->clear();
    ui->PlayerNumberEdit->clear();
    ui->PlayerPositionEdit->setCurrentIndex(-1);
    ui->PlayerYearArrivalEdit->clear();
    this->db= db;

}

void Player_Info::setAttributsEditable(bool b)
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

Player_Info::~Player_Info()
{
    delete ui;
}


void Player_Info::modifieNom(const QString &nom)
{
    ui->PlayerName->setText(nom);
    ui->PlayerNameEdit->setText(nom);
}

void Player_Info::modifiePrenom(const QVariant &prenom)
{
    if(prenom.isNull())
        ui->PlayerFirstName->setText("Non défini");
    else
    {
        ui->PlayerFirstName->setText(prenom.toString());
        ui->PlayerFirstNameEdit->setText(prenom.toString());
    }

}

void Player_Info::modifieDateNaissance(const QVariant &dateOfBirth)
{
    if (dateOfBirth.isNull())
        ui->PlayerDateOfBirth->setText("Non définie");
    else
    {
        ui->PlayerDateOfBirth->setText(dateOfBirth.toString());
        ui->PlayerBirthDateEdit->setDate(dateOfBirth.toDate());
    }
}

void Player_Info::modifieAnneeArrivee(const QVariant &yearArrival)
{
    if (yearArrival.isNull())
        ui->PlayerYearArrival->setText("Non définie");
    else
    {
        ui->PlayerYearArrival->setText(yearArrival.toString());
        ui->PlayerYearArrivalEdit->setValue(yearArrival.toInt());
    }
}

void Player_Info::modifiePoste(const QVariant &poste)
{
    if (poste.isNull())
        ui->PlayerPosition->setText("Non défini");
    else
    {
        // problème comparaison
        if (poste.toString().toStdString().at(0) == 'G') // les "ou" sont là pour la mise à jour des informations depuis l'onglet de modif
        {
            ui->PlayerPosition->setText("Gardien");
            ui->PlayerPositionEdit->setCurrentIndex(0);
        }
        if (poste.toString().toStdString().at(0) == 'D')
        {
            ui->PlayerPosition->setText("Defenseur");
            ui->PlayerPositionEdit->setCurrentIndex(1);
        }
        if (poste.toString().toStdString().at(0) == 'M')
        {
            ui->PlayerPosition->setText("Milieu");
            ui->PlayerPositionEdit->setCurrentIndex(2);
        }
        if (poste.toString().toStdString().at(0) == 'A')
        {
            ui->PlayerPosition->setText("Attaquant");
            ui->PlayerPositionEdit->setCurrentIndex(3);
        }
    }
}

void Player_Info::modifieNbMatchs(const QVariant &nbMatchs)
{
    if(nbMatchs.isNull())
        ui->PlayerMatchsPlayed->setText("Non défini");
    else
    {
        ui->PlayerMatchsPlayed->setText(nbMatchs.toString());
        ui->PlayerMatchsPlayedEdit->setValue(nbMatchs.toInt());
    }
}

void Player_Info::modifieNbButs(const QVariant &NbButs)
{
    if(NbButs.isNull())
        ui->PlayerGoals->setText("Non défini");
    else
    {
        ui->PlayerGoals->setText(NbButs.toString());
        ui->PlayerGoalsEdit->setValue(NbButs.toInt());
    }
}

void Player_Info::modifieNumero(const QVariant &numero)
{
    if (numero.isNull())
        ui->PlayerNumber->setText("Non défini");
    else
    {
        ui->PlayerNumber->setText(numero.toString());
        ui->PlayerNumberEdit->setValue(numero.toInt());
    }
}


void Player_Info::getPlayerId(const int id)
{
    playerId = id;
}



void Player_Info::on_PwVerif_clicked()
{
    //vérification du contenu du mdp
    if (ui->PwLineEdit->text()=="fcb2015")
    {
        // mdp ok -> rendre les champs éditables et le boutton de modif clickable
        setAttributsEditable(false);
        ui->PlayerNameEdit->setEnabled(true);
        ui->SetModifButton->setEnabled(true);
    }
    else
    {
        ui->PwLineEdit->setEchoMode(QLineEdit::Normal);
        ui->PwLineEdit->setText("Mot de passe erroné");
        setAttributsEditable(false);
    }
}

void Player_Info::on_PwLineEdit_textChanged(const QString &arg1)
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


void Player_Info::on_YearArrivalCheckBox_clicked(bool checked)
{
    ui->PlayerYearArrivalEdit->setEnabled(checked);
}


void Player_Info::on_BirthDateCheckBox_clicked(bool checked)
{
    ui->PlayerBirthDateEdit->setEnabled(checked);
}



void Player_Info::on_PositionCheckBox_clicked(bool checked)
{
    ui->PlayerPositionEdit->setEnabled(checked);
}

void Player_Info::on_PwLineEdit_selectionChanged()
{
    ui->PwLineEdit->clear();
    ui->PwLineEdit->setEchoMode(QLineEdit::Password);
}

void Player_Info::on_PlayerNameEdit_textChanged(const QString &arg1)
{
    // rend le clic sur le bouton de mise à jour possible si la taille du nom est au moins supérieur à 0
    ui->SetModifButton->setEnabled(arg1.size() >0);
}

void Player_Info::on_SetModifButton_clicked()
{
    // clic sur le bouton pour la mise à jour du joueur -> communication avec le databaseManager

    std::map<QString,QVariant> *player_info = new std::map <QString ,QVariant>() ;

    // récupération de l'identifiant pour pouvoir faire les mises à jour sur la bdd

    player_info->insert(std::pair<QString,QVariant>("id",QVariant(playerId)));

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

    if (db->updatePlayer(player_info))
    {
        //changement d'onglet avec mise à jour des informations sur le joueur
        updatePlayerInfo();
        setCurrentIndex(0);

    }

    else
    {
        // afficher un message en dessous du boutton
        // "la mise à jour n'a pas pu être effectué, vérifiez les informations ou contacter les developpeurs pour vérifier la base de données

        ui->Informations->setText("La mise à jour n'a pas pu être effectuée, vérifiez les informations ou contacter les developpeurs pour vérifier la base de données");
    }
}

void Player_Info::on_NumeroCheckBox_clicked(bool checked)
{
    ui->PlayerNumberEdit->setEnabled(checked);
}

void Player_Info::on_MatchsCheckBox_clicked(bool checked)
{
    ui->PlayerMatchsPlayedEdit->setEnabled(checked);
}



void Player_Info::on_GoalsCheckBox_clicked(bool checked)
{
    ui->PlayerGoalsEdit->setEnabled(checked);
}

void Player_Info::on_FirstNameCheckBox_clicked(bool checked)
{
    ui->PlayerFirstNameEdit->setEnabled(checked);
}

void Player_Info::on_Player_Info_currentChanged(int index)
{
    if (index==1)
    {
        setAttributsEditable(false);
        ui->PwLineEdit->clear();
        ui->Informations->clear();
    }

    if (index==0)
    {
        // rien de spécial
    }
}

void Player_Info::updatePlayerInfo()
{
    // on récupère les informations que l'utilisateur vient d'entrer sur la page de modif et on les affiche sur la page d'informations
    ui->PlayerName->setText(ui->PlayerNameEdit->text());
    if (ui->FirstNameCheckBox->isChecked())
        modifiePrenom(QVariant(ui->PlayerFirstNameEdit->text()));
    if (ui->NumeroCheckBox->isChecked())
        modifieNumero(QVariant(ui->PlayerNumberEdit->value()));
    if (ui->BirthDateCheckBox->isChecked())
        modifieDateNaissance(QVariant(ui->PlayerBirthDateEdit->date()));
    if (ui->PositionCheckBox->isChecked())
        modifiePoste(QVariant(ui->PlayerPositionEdit->currentText()));
    if (ui->YearArrivalCheckBox->isChecked())
        modifieAnneeArrivee(QVariant(ui->PlayerYearArrivalEdit->value()));
    if (ui->MatchsCheckBox->isChecked())
        modifieNbMatchs(QVariant(ui->PlayerMatchsPlayedEdit->value()));
    if(ui->GoalsCheckBox->isChecked())
        modifieNbButs(QVariant(ui->PlayerGoalsEdit->value()));
}
