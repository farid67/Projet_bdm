    #ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTabWidget>
#include "db.h"
#include "ClickableLabel.h"
#include "imageinfowindow.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void openImageInfo();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_spinBox_valueChanged(int arg1);

    void on_NumeroSpinBox_valueChanged(int arg1);

//    void on_NumeroCheckBox_clicked(bool checked);

//    void on_AnneeCheckBox_clicked(bool checked);

    void on_SearchpushButton_clicked();

    void on_NameSearchLineEdit_textEdited(const QString &arg1);

    void on_NumeroInsertCheckBox_clicked(bool checked);

    void on_AnneeInsertCheckBox_clicked(bool checked);

    void on_lineEdit_2_textEdited(const QString &arg1);

    void on_AnneeSearchSpinBox_valueChanged(int arg1);

    void on_NumeroSelectCheckBox_clicked(bool checked);

    void on_AnneeSelectCheckBox_clicked(bool checked);

    void on_NumeroSelectSpinBox_4_valueChanged(int arg1);


    void on_Admin_pwlineEdit_textChanged(const QString &arg1);

    void on_AdminpushButton_clicked();

    void on_AcceuilOnglet_currentChanged(int index);

    void on_DeleteAlltoolButton_clicked();

    void on_Admin_pwlineEdit_returnPressed();

    void on_DeleteAllPlayer_clicked();

    void on_DeleteAllTables_clicked();

    void on_DeleteImageTable_clicked();

    void on_DeletePlayerTable_clicked();

    void on_CreateImageTable_clicked();

    void on_CreatePlayerTable_clicked();

    // void on_ModifyImagepushButton_clicked(); // Cette fonction est inutile (voir explication dans le code source)

    void on_pushButton_7_clicked();

signals:
    void urlChanged(const QString& new_url);


private:
    Ui::MainWindow *ui;

    ImageInfoWindow* ImageInfo;

    //ajout d'un manager de bdd dans la classe MainWindow
    DatabaseManager *db_manage;

    ClickableLabel* qlabel;

    // chaine pour les tests sur ouverture d'image
    std::string * file_url_string;
    QString* file_url;

    int picture_date_Insert;
    int player_number_Insert;
    QString* player_name_Insert;

    int player_number_Select;
    QString* player_name_Select;
    int picture_date_Select;
};

#endif // MAINWINDOW_H
