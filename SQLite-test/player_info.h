#ifndef PLAYER_INFO_H
#define PLAYER_INFO_H

#include <QTabWidget>
#include <QDate>
#include "db.h"


namespace Ui {
class Player_Info;
}

class Player_Info : public QTabWidget
{
    Q_OBJECT

public:
    explicit Player_Info(DatabaseManager *db, QWidget *parent = 0);
    ~Player_Info();

private:
    Ui::Player_Info *ui;
    DatabaseManager *db;
    // util surtout pour les modifications
    int playerId;
    void setAttributsEditable(bool b);
    void updatePlayerInfo();

public slots:
    void modifieNom(const QString& nom);
    void modifiePrenom(const QVariant& prenom);
    void modifieNumero(const QVariant& numero);
    void modifieDateNaissance(const QVariant& dateOfBirth);
    void modifieAnneeArrivee(const QVariant& yearOfArrival);
    void modifiePoste(const QVariant& poste);
    void modifieNbMatchs(const QVariant& nbMatchs);
    void modifieNbButs(const QVariant& NbButs);

    void getPlayerId(const int);

private slots:
    void on_PwVerif_clicked();
    void on_PwLineEdit_textChanged(const QString &arg1);
    void on_YearArrivalCheckBox_clicked(bool checked);
    void on_BirthDateCheckBox_clicked(bool checked);
    void on_PositionCheckBox_clicked(bool checked);
    void on_PwLineEdit_selectionChanged();
    void on_PlayerNameEdit_textChanged(const QString &arg1);
    void on_SetModifButton_clicked();
    void on_NumeroCheckBox_clicked(bool checked);
    void on_MatchsCheckBox_clicked(bool checked);
    void on_GoalsCheckBox_clicked(bool checked);
    void on_FirstNameCheckBox_clicked(bool checked);
    void on_Player_Info_currentChanged(int index);
};

#endif // PLAYER_INFO_H
