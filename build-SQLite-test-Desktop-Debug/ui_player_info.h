/********************************************************************************
** Form generated from reading UI file 'player_info.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYER_INFO_H
#define UI_PLAYER_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Player_Info
{
public:
    QWidget *tab;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *PlayerName;
    QLabel *PlayerDateOfBirth;
    QLabel *PlayerYearArrival;
    QLabel *PlayerPosition;
    QLabel *PlayerMatchsPlayed;
    QWidget *tab1;

    void setupUi(QTabWidget *Player_Info)
    {
        if (Player_Info->objectName().isEmpty())
            Player_Info->setObjectName(QStringLiteral("Player_Info"));
        Player_Info->resize(400, 300);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayoutWidget = new QWidget(tab);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 381, 251));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(horizontalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        PlayerName = new QLabel(horizontalLayoutWidget);
        PlayerName->setObjectName(QStringLiteral("PlayerName"));

        verticalLayout_2->addWidget(PlayerName);

        PlayerDateOfBirth = new QLabel(horizontalLayoutWidget);
        PlayerDateOfBirth->setObjectName(QStringLiteral("PlayerDateOfBirth"));

        verticalLayout_2->addWidget(PlayerDateOfBirth);

        PlayerYearArrival = new QLabel(horizontalLayoutWidget);
        PlayerYearArrival->setObjectName(QStringLiteral("PlayerYearArrival"));

        verticalLayout_2->addWidget(PlayerYearArrival);

        PlayerPosition = new QLabel(horizontalLayoutWidget);
        PlayerPosition->setObjectName(QStringLiteral("PlayerPosition"));

        verticalLayout_2->addWidget(PlayerPosition);

        PlayerMatchsPlayed = new QLabel(horizontalLayoutWidget);
        PlayerMatchsPlayed->setObjectName(QStringLiteral("PlayerMatchsPlayed"));

        verticalLayout_2->addWidget(PlayerMatchsPlayed);


        horizontalLayout->addLayout(verticalLayout_2);

        Player_Info->addTab(tab, QString());
        tab1 = new QWidget();
        tab1->setObjectName(QStringLiteral("tab1"));
        Player_Info->addTab(tab1, QString());

        retranslateUi(Player_Info);

        Player_Info->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Player_Info);
    } // setupUi

    void retranslateUi(QTabWidget *Player_Info)
    {
        Player_Info->setWindowTitle(QApplication::translate("Player_Info", "TabWidget", 0));
        label->setText(QApplication::translate("Player_Info", "Nom complet :", 0));
        label_2->setText(QApplication::translate("Player_Info", "Date de naissance :", 0));
        label_3->setText(QApplication::translate("Player_Info", "Ann\303\251e d'arriv\303\251e :", 0));
        label_4->setText(QApplication::translate("Player_Info", "Poste :", 0));
        label_5->setText(QApplication::translate("Player_Info", "Nombre de matchs jou\303\251s :", 0));
        PlayerName->setText(QApplication::translate("Player_Info", "TextLabel", 0));
        PlayerDateOfBirth->setText(QApplication::translate("Player_Info", "TextLabel", 0));
        PlayerYearArrival->setText(QApplication::translate("Player_Info", "TextLabel", 0));
        PlayerPosition->setText(QApplication::translate("Player_Info", "TextLabel", 0));
        PlayerMatchsPlayed->setText(QApplication::translate("Player_Info", "TextLabel", 0));
        Player_Info->setTabText(Player_Info->indexOf(tab), QApplication::translate("Player_Info", "Info", 0));
        Player_Info->setTabText(Player_Info->indexOf(tab1), QApplication::translate("Player_Info", "Modif (Admin)", 0));
    } // retranslateUi

};

namespace Ui {
    class Player_Info: public Ui_Player_Info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYER_INFO_H
