#ifndef PLAYER_INFO_H
#define PLAYER_INFO_H

#include <QTabWidget>

namespace Ui {
class Player_Info;
}

class Player_Info : public QTabWidget
{
    Q_OBJECT

public:
    explicit Player_Info(QWidget *parent = 0);
    ~Player_Info();

private:
    Ui::Player_Info *ui;

public slots:
    void modifieNom(const QString& nom);

};

#endif // PLAYER_INFO_H
