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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
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
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_2;
    QLabel *PlayerName;
    QLabel *PlayerFirstName;
    QLabel *PlayerNumber;
    QLabel *PlayerDateOfBirth;
    QLabel *PlayerYearArrival;
    QLabel *PlayerPosition;
    QLabel *PlayerMatchsPlayed;
    QLabel *PlayerGoals;
    QWidget *tab_modif;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_4;
    QLineEdit *PlayerNameEdit;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QLineEdit *PlayerFirstNameEdit;
    QCheckBox *FirstNameCheckBox;
    QGridLayout *gridLayout_3;
    QLabel *label_11;
    QSpinBox *PlayerNumberEdit;
    QCheckBox *NumeroCheckBox;
    QGridLayout *gridLayout;
    QDateEdit *PlayerBirthDateEdit;
    QLabel *label_12;
    QCheckBox *BirthDateCheckBox;
    QGridLayout *gridLayout_5;
    QLabel *label_13;
    QSpinBox *PlayerYearArrivalEdit;
    QCheckBox *YearArrivalCheckBox;
    QGridLayout *gridLayout_6;
    QLabel *label_14;
    QComboBox *PlayerPositionEdit;
    QCheckBox *PositionCheckBox;
    QGridLayout *gridLayout_7;
    QLabel *label_15;
    QSpinBox *PlayerMatchsPlayedEdit;
    QCheckBox *MatchsCheckBox;
    QGridLayout *gridLayout_8;
    QLabel *label_16;
    QSpinBox *PlayerGoalsEdit;
    QCheckBox *GoalsCheckBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *SetModifButton;
    QSpacerItem *horizontalSpacer_2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_17;
    QLineEdit *PwLineEdit;
    QPushButton *PwVerif;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *Informations;

    void setupUi(QTabWidget *Player_Info)
    {
        if (Player_Info->objectName().isEmpty())
            Player_Info->setObjectName(QStringLiteral("Player_Info"));
        Player_Info->resize(423, 439);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayoutWidget = new QWidget(tab);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 60, 381, 251));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label);

        label_6 = new QLabel(horizontalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_6);

        label_8 = new QLabel(horizontalLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_8);

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

        label_7 = new QLabel(horizontalLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_7);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        PlayerName = new QLabel(horizontalLayoutWidget);
        PlayerName->setObjectName(QStringLiteral("PlayerName"));

        verticalLayout_2->addWidget(PlayerName);

        PlayerFirstName = new QLabel(horizontalLayoutWidget);
        PlayerFirstName->setObjectName(QStringLiteral("PlayerFirstName"));

        verticalLayout_2->addWidget(PlayerFirstName);

        PlayerNumber = new QLabel(horizontalLayoutWidget);
        PlayerNumber->setObjectName(QStringLiteral("PlayerNumber"));

        verticalLayout_2->addWidget(PlayerNumber);

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

        PlayerGoals = new QLabel(horizontalLayoutWidget);
        PlayerGoals->setObjectName(QStringLiteral("PlayerGoals"));

        verticalLayout_2->addWidget(PlayerGoals);


        horizontalLayout->addLayout(verticalLayout_2);

        Player_Info->addTab(tab, QString());
        tab_modif = new QWidget();
        tab_modif->setObjectName(QStringLiteral("tab_modif"));
        horizontalLayoutWidget_2 = new QWidget(tab_modif);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 50, 381, 267));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(horizontalLayoutWidget_2);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        PlayerNameEdit = new QLineEdit(widget);
        PlayerNameEdit->setObjectName(QStringLiteral("PlayerNameEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PlayerNameEdit->sizePolicy().hasHeightForWidth());
        PlayerNameEdit->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(PlayerNameEdit, 0, 2, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_9, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(15, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_10, 0, 1, 1, 1);

        PlayerFirstNameEdit = new QLineEdit(widget);
        PlayerFirstNameEdit->setObjectName(QStringLiteral("PlayerFirstNameEdit"));
        sizePolicy.setHeightForWidth(PlayerFirstNameEdit->sizePolicy().hasHeightForWidth());
        PlayerFirstNameEdit->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(PlayerFirstNameEdit, 0, 2, 1, 1);

        FirstNameCheckBox = new QCheckBox(widget);
        FirstNameCheckBox->setObjectName(QStringLiteral("FirstNameCheckBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(FirstNameCheckBox->sizePolicy().hasHeightForWidth());
        FirstNameCheckBox->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(FirstNameCheckBox, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_11, 0, 1, 1, 1);

        PlayerNumberEdit = new QSpinBox(widget);
        PlayerNumberEdit->setObjectName(QStringLiteral("PlayerNumberEdit"));
        sizePolicy.setHeightForWidth(PlayerNumberEdit->sizePolicy().hasHeightForWidth());
        PlayerNumberEdit->setSizePolicy(sizePolicy);
        PlayerNumberEdit->setMinimum(1);
        PlayerNumberEdit->setValue(1);

        gridLayout_3->addWidget(PlayerNumberEdit, 0, 2, 1, 1);

        NumeroCheckBox = new QCheckBox(widget);
        NumeroCheckBox->setObjectName(QStringLiteral("NumeroCheckBox"));
        sizePolicy1.setHeightForWidth(NumeroCheckBox->sizePolicy().hasHeightForWidth());
        NumeroCheckBox->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(NumeroCheckBox, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        PlayerBirthDateEdit = new QDateEdit(widget);
        PlayerBirthDateEdit->setObjectName(QStringLiteral("PlayerBirthDateEdit"));

        gridLayout->addWidget(PlayerBirthDateEdit, 0, 2, 1, 1);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_12, 0, 1, 1, 1);

        BirthDateCheckBox = new QCheckBox(widget);
        BirthDateCheckBox->setObjectName(QStringLiteral("BirthDateCheckBox"));
        sizePolicy1.setHeightForWidth(BirthDateCheckBox->sizePolicy().hasHeightForWidth());
        BirthDateCheckBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(BirthDateCheckBox, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_13 = new QLabel(widget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_13, 0, 1, 1, 1);

        PlayerYearArrivalEdit = new QSpinBox(widget);
        PlayerYearArrivalEdit->setObjectName(QStringLiteral("PlayerYearArrivalEdit"));
        PlayerYearArrivalEdit->setMinimum(1850);
        PlayerYearArrivalEdit->setMaximum(2016);

        gridLayout_5->addWidget(PlayerYearArrivalEdit, 0, 2, 1, 1);

        YearArrivalCheckBox = new QCheckBox(widget);
        YearArrivalCheckBox->setObjectName(QStringLiteral("YearArrivalCheckBox"));
        sizePolicy1.setHeightForWidth(YearArrivalCheckBox->sizePolicy().hasHeightForWidth());
        YearArrivalCheckBox->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(YearArrivalCheckBox, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_5);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_14 = new QLabel(widget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_14, 0, 1, 1, 1);

        PlayerPositionEdit = new QComboBox(widget);
        PlayerPositionEdit->setObjectName(QStringLiteral("PlayerPositionEdit"));

        gridLayout_6->addWidget(PlayerPositionEdit, 0, 2, 1, 1);

        PositionCheckBox = new QCheckBox(widget);
        PositionCheckBox->setObjectName(QStringLiteral("PositionCheckBox"));
        sizePolicy1.setHeightForWidth(PositionCheckBox->sizePolicy().hasHeightForWidth());
        PositionCheckBox->setSizePolicy(sizePolicy1);

        gridLayout_6->addWidget(PositionCheckBox, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_6);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_15 = new QLabel(widget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_15, 0, 1, 1, 1);

        PlayerMatchsPlayedEdit = new QSpinBox(widget);
        PlayerMatchsPlayedEdit->setObjectName(QStringLiteral("PlayerMatchsPlayedEdit"));
        PlayerMatchsPlayedEdit->setMaximum(1000);

        gridLayout_7->addWidget(PlayerMatchsPlayedEdit, 0, 2, 1, 1);

        MatchsCheckBox = new QCheckBox(widget);
        MatchsCheckBox->setObjectName(QStringLiteral("MatchsCheckBox"));
        sizePolicy1.setHeightForWidth(MatchsCheckBox->sizePolicy().hasHeightForWidth());
        MatchsCheckBox->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(MatchsCheckBox, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_7);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        label_16 = new QLabel(widget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_16, 0, 1, 1, 1);

        PlayerGoalsEdit = new QSpinBox(widget);
        PlayerGoalsEdit->setObjectName(QStringLiteral("PlayerGoalsEdit"));
        PlayerGoalsEdit->setMaximum(1000);

        gridLayout_8->addWidget(PlayerGoalsEdit, 0, 2, 1, 1);

        GoalsCheckBox = new QCheckBox(widget);
        GoalsCheckBox->setObjectName(QStringLiteral("GoalsCheckBox"));
        sizePolicy1.setHeightForWidth(GoalsCheckBox->sizePolicy().hasHeightForWidth());
        GoalsCheckBox->setSizePolicy(sizePolicy1);

        gridLayout_8->addWidget(GoalsCheckBox, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_8);


        horizontalLayout_2->addWidget(widget);

        verticalLayoutWidget = new QWidget(tab_modif);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 310, 381, 31));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        SetModifButton = new QPushButton(verticalLayoutWidget);
        SetModifButton->setObjectName(QStringLiteral("SetModifButton"));

        horizontalLayout_3->addWidget(SetModifButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayoutWidget_3 = new QWidget(tab_modif);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 10, 381, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(horizontalLayoutWidget_3);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_4->addWidget(label_17);

        PwLineEdit = new QLineEdit(horizontalLayoutWidget_3);
        PwLineEdit->setObjectName(QStringLiteral("PwLineEdit"));
        PwLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(PwLineEdit);

        PwVerif = new QPushButton(horizontalLayoutWidget_3);
        PwVerif->setObjectName(QStringLiteral("PwVerif"));
        PwVerif->setEnabled(false);

        horizontalLayout_4->addWidget(PwVerif);

        horizontalLayoutWidget_4 = new QWidget(tab_modif);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(10, 350, 381, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        Informations = new QLabel(horizontalLayoutWidget_4);
        Informations->setObjectName(QStringLiteral("Informations"));
        Informations->setEnabled(false);

        horizontalLayout_5->addWidget(Informations);

        Player_Info->addTab(tab_modif, QString());

        retranslateUi(Player_Info);

        Player_Info->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Player_Info);
    } // setupUi

    void retranslateUi(QTabWidget *Player_Info)
    {
        Player_Info->setWindowTitle(QApplication::translate("Player_Info", "TabWidget", 0));
        label->setText(QApplication::translate("Player_Info", "Nom :", 0));
        label_6->setText(QApplication::translate("Player_Info", "Prenom :", 0));
        label_8->setText(QApplication::translate("Player_Info", "Numero :", 0));
        label_2->setText(QApplication::translate("Player_Info", "Date de naissance :", 0));
        label_3->setText(QApplication::translate("Player_Info", "Ann\303\251e d'arriv\303\251e :", 0));
        label_4->setText(QApplication::translate("Player_Info", "Poste :", 0));
        label_5->setText(QApplication::translate("Player_Info", "Nombre de matchs jou\303\251s :", 0));
        label_7->setText(QApplication::translate("Player_Info", "Nombre de buts :", 0));
        PlayerName->setText(QApplication::translate("Player_Info", "TextLabel", 0));
        PlayerFirstName->setText(QApplication::translate("Player_Info", "TextLabel", 0));
        PlayerNumber->setText(QApplication::translate("Player_Info", "TextLabel", 0));
        PlayerDateOfBirth->setText(QApplication::translate("Player_Info", "TextLabel", 0));
        PlayerYearArrival->setText(QApplication::translate("Player_Info", "TextLabel", 0));
        PlayerPosition->setText(QApplication::translate("Player_Info", "TextLabel", 0));
        PlayerMatchsPlayed->setText(QApplication::translate("Player_Info", "TextLabel", 0));
        PlayerGoals->setText(QApplication::translate("Player_Info", "TextLabel", 0));
        Player_Info->setTabText(Player_Info->indexOf(tab), QApplication::translate("Player_Info", "Info", 0));
        label_9->setText(QApplication::translate("Player_Info", "Nom :", 0));
        label_10->setText(QApplication::translate("Player_Info", "Prenom :", 0));
        FirstNameCheckBox->setText(QString());
        label_11->setText(QApplication::translate("Player_Info", "Numero :", 0));
        NumeroCheckBox->setText(QString());
        label_12->setText(QApplication::translate("Player_Info", "Date de naissance :", 0));
        BirthDateCheckBox->setText(QString());
        label_13->setText(QApplication::translate("Player_Info", "Ann\303\251e d'arriv\303\251e :", 0));
        YearArrivalCheckBox->setText(QString());
        label_14->setText(QApplication::translate("Player_Info", "Poste :", 0));
        PlayerPositionEdit->clear();
        PlayerPositionEdit->insertItems(0, QStringList()
         << QApplication::translate("Player_Info", "Gardien", 0)
         << QApplication::translate("Player_Info", "Defenseur", 0)
         << QApplication::translate("Player_Info", "Milieu", 0)
         << QApplication::translate("Player_Info", "Attaquant", 0)
        );
        PositionCheckBox->setText(QString());
        label_15->setText(QApplication::translate("Player_Info", "Nombre de matchs jou\303\251s :", 0));
        MatchsCheckBox->setText(QString());
        label_16->setText(QApplication::translate("Player_Info", "Nombre de buts :", 0));
        GoalsCheckBox->setText(QString());
        SetModifButton->setText(QApplication::translate("Player_Info", "Set modifications", 0));
        label_17->setText(QApplication::translate("Player_Info", "Password :", 0));
        PwVerif->setText(QApplication::translate("Player_Info", "Ok", 0));
        Informations->setText(QString());
        Player_Info->setTabText(Player_Info->indexOf(tab_modif), QApplication::translate("Player_Info", "Modif (Admin)", 0));
    } // retranslateUi

};

namespace Ui {
    class Player_Info: public Ui_Player_Info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYER_INFO_H
