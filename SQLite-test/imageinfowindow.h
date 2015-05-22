#ifndef IMAGEINFOWINDOW_H
#define IMAGEINFOWINDOW_H

#include <QDialog>
#include <QListWidgetItem>
#include "db.h"
#include "player_info.h"

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

signals:
    void playerClicked (const QString& player_name);
    void playerName (const QString& player_name);

public slots:
    void urlModif(const QString &url);

    void openPlayerInfo(const QString& player_name);

    // met à jour la liste des joueurs en fonction de l'URL
    void insertPlayerItem(const QString& url);

private:
    Ui::ImageInfoWindow *ui;
    DatabaseManager* db;
    Player_Info* player_window;
};

#endif // IMAGEINFOWINDOW_H
