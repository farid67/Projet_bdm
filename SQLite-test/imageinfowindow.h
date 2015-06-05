#ifndef IMAGEINFOWINDOW_H
#define IMAGEINFOWINDOW_H

#include <QDialog>
#include <QListWidgetItem>
#include <QSqlField>
#include "db.h"
#include "player_info.h"
#include "addplayerwindow.h"


namespace Ui {
class ImageInfoWindow;
}

class ImageInfoWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ImageInfoWindow(DatabaseManager* db,QWidget *parent = 0);
    ~ImageInfoWindow();

    Ui::ImageInfoWindow* getUi(){return ui;}

private slots:
    void on_PlayerList_itemDoubleClicked(QListWidgetItem *item);

    void on_add_player_image_clicked();

signals:
    void playerClicked (const QString& player_name);
    void playerName (const QString& player_name);
    void playerNumero (const QVariant&);
    void playerFirstName (const QVariant&);
    void playerDateOfBirth (const QVariant&);
    void playerYearOfArrival(const QVariant&);
    void playerPosition (const QVariant&);
    void playerMatchs (const QVariant&);
    void playerGoals (const QVariant&);

    // signal pour l'envoi de l'identifiant du joueur
    void playerId(const int);

    void currentUrl(const QString& url);

public slots:
    void urlModif(const QString &url);

    void openPlayerInfo(const QString& player_name);

    // met à jour la liste des joueurs en fonction de l'URL
    void insertPlayerItem(const QString& url);

    // ouverture d'une fenetre de type AddPlayerWIndow
    void openAddPlayer();

    void updatePlayers(const QStringList& players);

private:
    Ui::ImageInfoWindow *ui;
    DatabaseManager* db;
    Player_Info* player_window;
    AddPlayerWindow* addPlayer_window;
};

#endif // IMAGEINFOWINDOW_H
