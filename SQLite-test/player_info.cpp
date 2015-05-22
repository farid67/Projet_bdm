#include "player_info.h"
#include "ui_player_info.h"



Player_Info::Player_Info(QWidget *parent) :
    QTabWidget(parent),
    ui(new Ui::Player_Info)
{
    ui->setupUi(this);



}

Player_Info::~Player_Info()
{
    delete ui;
}


void Player_Info::modifieNom(const QString &nom)
{
    ui->PlayerName->setText(nom);
}
