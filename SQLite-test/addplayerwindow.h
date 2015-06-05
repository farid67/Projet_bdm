#ifndef ADDPLAYERWINDOW_H
#define ADDPLAYERWINDOW_H


#include "db.h"
#include <QMainWindow>

namespace Ui {
class AddPlayerWindow;
}

class AddPlayerWindow : public QMainWindow
{
    Q_OBJECT

public:
    // comme pour les autres classes, on doit également passer le pointeur vers le database_manager pour pouvoir effectuer des requête sur la base de donnée
    explicit AddPlayerWindow(DatabaseManager* db,QWidget *parent = 0);
    ~AddPlayerWindow();

private:
    Ui::AddPlayerWindow *ui;
    DatabaseManager* db;
    void setEnableAllFields(bool b);
    QString* current_url;
    int currentImage_Year;

signals:
    void setPlayers(QStringList);

private slots:
    void getUrl(const QString &url);

    void on_PwLineEdit_textChanged(const QString &arg1);
    void on_PwVerif_clicked();
    void on_FirstNameCheckBox_clicked(bool checked);
    void on_NumeroCheckBox_clicked(bool checked);
    void on_BirthDateCheckBox_clicked(bool checked);
    void on_YearArrivalCheckBox_clicked(bool checked);
    void on_PositionCheckBox_clicked(bool checked);
    void on_MatchsCheckBox_clicked(bool checked);
    void on_GoalsCheckBox_clicked(bool checked);
    void on_PlayerNameEdit_textEdited(const QString &arg1);
    void on_AddButton_clicked();
    void on_PlayerListWidget_itemSelectionChanged();
    void on_AddPlayer_2_clicked();
};

#endif // ADDPLAYERWINDOW_H
