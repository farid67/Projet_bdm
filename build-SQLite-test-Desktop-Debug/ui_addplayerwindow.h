/********************************************************************************
** Form generated from reading UI file 'addplayerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPLAYERWINDOW_H
#define UI_ADDPLAYERWINDOW_H

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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPlayerWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *AddButton;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_8;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_9;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *PlayerNameEdit;
    QGridLayout *gridLayout_10;
    QLabel *label_19;
    QLineEdit *PlayerFirstNameEdit;
    QCheckBox *FirstNameCheckBox;
    QGridLayout *gridLayout_11;
    QLabel *label_20;
    QSpinBox *PlayerNumberEdit;
    QCheckBox *NumeroCheckBox;
    QGridLayout *gridLayout_12;
    QDateEdit *PlayerBirthDateEdit;
    QLabel *label_21;
    QCheckBox *BirthDateCheckBox;
    QGridLayout *gridLayout_13;
    QLabel *label_22;
    QSpinBox *PlayerYearArrivalEdit;
    QCheckBox *YearArrivalCheckBox;
    QGridLayout *gridLayout_14;
    QLabel *label_23;
    QComboBox *PlayerPositionEdit;
    QCheckBox *PositionCheckBox;
    QGridLayout *gridLayout_15;
    QLabel *label_24;
    QSpinBox *PlayerMatchsPlayedEdit;
    QCheckBox *MatchsCheckBox;
    QGridLayout *gridLayout_16;
    QLabel *label_25;
    QSpinBox *PlayerGoalsEdit;
    QCheckBox *GoalsCheckBox;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_26;
    QLineEdit *PwLineEdit;
    QPushButton *PwVerif;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *Informations;
    QWidget *tab_2;
    QListWidget *PlayerListWidget;
    QLabel *label;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *AddPlayer_2;
    QLabel *Information_existingPlayer;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AddPlayerWindow)
    {
        if (AddPlayerWindow->objectName().isEmpty())
            AddPlayerWindow->setObjectName(QStringLiteral("AddPlayerWindow"));
        AddPlayerWindow->resize(465, 487);
        centralwidget = new QWidget(AddPlayerWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(16, 10, 431, 451));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayoutWidget_5 = new QWidget(tab);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(20, 330, 381, 41));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        AddButton = new QPushButton(horizontalLayoutWidget_5);
        AddButton->setObjectName(QStringLiteral("AddButton"));

        horizontalLayout_6->addWidget(AddButton);

        horizontalLayoutWidget_6 = new QWidget(tab);
        horizontalLayoutWidget_6->setObjectName(QStringLiteral("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(20, 50, 381, 267));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(horizontalLayoutWidget_6);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        label_18 = new QLabel(widget_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_9->addWidget(label_18, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(15, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        PlayerNameEdit = new QLineEdit(widget_2);
        PlayerNameEdit->setObjectName(QStringLiteral("PlayerNameEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PlayerNameEdit->sizePolicy().hasHeightForWidth());
        PlayerNameEdit->setSizePolicy(sizePolicy);

        gridLayout_9->addWidget(PlayerNameEdit, 0, 2, 1, 1);


        verticalLayout_4->addLayout(gridLayout_9);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        label_19 = new QLabel(widget_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_10->addWidget(label_19, 0, 1, 1, 1);

        PlayerFirstNameEdit = new QLineEdit(widget_2);
        PlayerFirstNameEdit->setObjectName(QStringLiteral("PlayerFirstNameEdit"));
        sizePolicy.setHeightForWidth(PlayerFirstNameEdit->sizePolicy().hasHeightForWidth());
        PlayerFirstNameEdit->setSizePolicy(sizePolicy);

        gridLayout_10->addWidget(PlayerFirstNameEdit, 0, 2, 1, 1);

        FirstNameCheckBox = new QCheckBox(widget_2);
        FirstNameCheckBox->setObjectName(QStringLiteral("FirstNameCheckBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(FirstNameCheckBox->sizePolicy().hasHeightForWidth());
        FirstNameCheckBox->setSizePolicy(sizePolicy1);

        gridLayout_10->addWidget(FirstNameCheckBox, 0, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout_10);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        label_20 = new QLabel(widget_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy2);
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_11->addWidget(label_20, 0, 1, 1, 1);

        PlayerNumberEdit = new QSpinBox(widget_2);
        PlayerNumberEdit->setObjectName(QStringLiteral("PlayerNumberEdit"));
        sizePolicy.setHeightForWidth(PlayerNumberEdit->sizePolicy().hasHeightForWidth());
        PlayerNumberEdit->setSizePolicy(sizePolicy);
        PlayerNumberEdit->setMinimum(1);
        PlayerNumberEdit->setValue(1);

        gridLayout_11->addWidget(PlayerNumberEdit, 0, 2, 1, 1);

        NumeroCheckBox = new QCheckBox(widget_2);
        NumeroCheckBox->setObjectName(QStringLiteral("NumeroCheckBox"));
        sizePolicy1.setHeightForWidth(NumeroCheckBox->sizePolicy().hasHeightForWidth());
        NumeroCheckBox->setSizePolicy(sizePolicy1);

        gridLayout_11->addWidget(NumeroCheckBox, 0, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout_11);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        PlayerBirthDateEdit = new QDateEdit(widget_2);
        PlayerBirthDateEdit->setObjectName(QStringLiteral("PlayerBirthDateEdit"));

        gridLayout_12->addWidget(PlayerBirthDateEdit, 0, 2, 1, 1);

        label_21 = new QLabel(widget_2);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_12->addWidget(label_21, 0, 1, 1, 1);

        BirthDateCheckBox = new QCheckBox(widget_2);
        BirthDateCheckBox->setObjectName(QStringLiteral("BirthDateCheckBox"));
        sizePolicy1.setHeightForWidth(BirthDateCheckBox->sizePolicy().hasHeightForWidth());
        BirthDateCheckBox->setSizePolicy(sizePolicy1);

        gridLayout_12->addWidget(BirthDateCheckBox, 0, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout_12);

        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        label_22 = new QLabel(widget_2);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_13->addWidget(label_22, 0, 1, 1, 1);

        PlayerYearArrivalEdit = new QSpinBox(widget_2);
        PlayerYearArrivalEdit->setObjectName(QStringLiteral("PlayerYearArrivalEdit"));
        PlayerYearArrivalEdit->setMinimum(1850);
        PlayerYearArrivalEdit->setMaximum(2016);

        gridLayout_13->addWidget(PlayerYearArrivalEdit, 0, 2, 1, 1);

        YearArrivalCheckBox = new QCheckBox(widget_2);
        YearArrivalCheckBox->setObjectName(QStringLiteral("YearArrivalCheckBox"));
        sizePolicy1.setHeightForWidth(YearArrivalCheckBox->sizePolicy().hasHeightForWidth());
        YearArrivalCheckBox->setSizePolicy(sizePolicy1);

        gridLayout_13->addWidget(YearArrivalCheckBox, 0, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout_13);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        label_23 = new QLabel(widget_2);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_14->addWidget(label_23, 0, 1, 1, 1);

        PlayerPositionEdit = new QComboBox(widget_2);
        PlayerPositionEdit->setObjectName(QStringLiteral("PlayerPositionEdit"));

        gridLayout_14->addWidget(PlayerPositionEdit, 0, 2, 1, 1);

        PositionCheckBox = new QCheckBox(widget_2);
        PositionCheckBox->setObjectName(QStringLiteral("PositionCheckBox"));
        sizePolicy1.setHeightForWidth(PositionCheckBox->sizePolicy().hasHeightForWidth());
        PositionCheckBox->setSizePolicy(sizePolicy1);

        gridLayout_14->addWidget(PositionCheckBox, 0, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout_14);

        gridLayout_15 = new QGridLayout();
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        label_24 = new QLabel(widget_2);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_15->addWidget(label_24, 0, 1, 1, 1);

        PlayerMatchsPlayedEdit = new QSpinBox(widget_2);
        PlayerMatchsPlayedEdit->setObjectName(QStringLiteral("PlayerMatchsPlayedEdit"));
        PlayerMatchsPlayedEdit->setMaximum(1000);

        gridLayout_15->addWidget(PlayerMatchsPlayedEdit, 0, 2, 1, 1);

        MatchsCheckBox = new QCheckBox(widget_2);
        MatchsCheckBox->setObjectName(QStringLiteral("MatchsCheckBox"));
        sizePolicy1.setHeightForWidth(MatchsCheckBox->sizePolicy().hasHeightForWidth());
        MatchsCheckBox->setSizePolicy(sizePolicy1);

        gridLayout_15->addWidget(MatchsCheckBox, 0, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout_15);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        label_25 = new QLabel(widget_2);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_16->addWidget(label_25, 0, 1, 1, 1);

        PlayerGoalsEdit = new QSpinBox(widget_2);
        PlayerGoalsEdit->setObjectName(QStringLiteral("PlayerGoalsEdit"));
        PlayerGoalsEdit->setMaximum(1000);

        gridLayout_16->addWidget(PlayerGoalsEdit, 0, 2, 1, 1);

        GoalsCheckBox = new QCheckBox(widget_2);
        GoalsCheckBox->setObjectName(QStringLiteral("GoalsCheckBox"));
        sizePolicy1.setHeightForWidth(GoalsCheckBox->sizePolicy().hasHeightForWidth());
        GoalsCheckBox->setSizePolicy(sizePolicy1);

        gridLayout_16->addWidget(GoalsCheckBox, 0, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout_16);


        horizontalLayout_8->addWidget(widget_2);

        horizontalLayoutWidget_7 = new QWidget(tab);
        horizontalLayoutWidget_7->setObjectName(QStringLiteral("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(20, 10, 381, 31));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(horizontalLayoutWidget_7);
        label_26->setObjectName(QStringLiteral("label_26"));

        horizontalLayout_9->addWidget(label_26);

        PwLineEdit = new QLineEdit(horizontalLayoutWidget_7);
        PwLineEdit->setObjectName(QStringLiteral("PwLineEdit"));
        PwLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_9->addWidget(PwLineEdit);

        PwVerif = new QPushButton(horizontalLayoutWidget_7);
        PwVerif->setObjectName(QStringLiteral("PwVerif"));
        PwVerif->setEnabled(false);

        horizontalLayout_9->addWidget(PwVerif);

        verticalLayoutWidget = new QWidget(tab);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 380, 381, 31));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Informations = new QLabel(verticalLayoutWidget);
        Informations->setObjectName(QStringLiteral("Informations"));
        Informations->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Informations);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        PlayerListWidget = new QListWidget(tab_2);
        PlayerListWidget->setObjectName(QStringLiteral("PlayerListWidget"));
        PlayerListWidget->setGeometry(QRect(15, 60, 391, 291));
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(false);
        label->setGeometry(QRect(20, 20, 381, 20));
        label->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget_2 = new QWidget(tab_2);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(19, 360, 381, 51));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        AddPlayer_2 = new QPushButton(verticalLayoutWidget_2);
        AddPlayer_2->setObjectName(QStringLiteral("AddPlayer_2"));
        AddPlayer_2->setEnabled(false);

        verticalLayout_2->addWidget(AddPlayer_2);

        Information_existingPlayer = new QLabel(verticalLayoutWidget_2);
        Information_existingPlayer->setObjectName(QStringLiteral("Information_existingPlayer"));
        Information_existingPlayer->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Information_existingPlayer);

        tabWidget->addTab(tab_2, QString());
        AddPlayerWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(AddPlayerWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AddPlayerWindow->setStatusBar(statusbar);

        retranslateUi(AddPlayerWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(AddPlayerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AddPlayerWindow)
    {
        AddPlayerWindow->setWindowTitle(QApplication::translate("AddPlayerWindow", "MainWindow", 0));
        AddButton->setText(QApplication::translate("AddPlayerWindow", "Add Player to Image", 0));
        label_18->setText(QApplication::translate("AddPlayerWindow", "Nom :", 0));
        label_19->setText(QApplication::translate("AddPlayerWindow", "Prenom :", 0));
        FirstNameCheckBox->setText(QString());
        label_20->setText(QApplication::translate("AddPlayerWindow", "Numero :", 0));
        NumeroCheckBox->setText(QString());
        label_21->setText(QApplication::translate("AddPlayerWindow", "Date de naissance :", 0));
        BirthDateCheckBox->setText(QString());
        label_22->setText(QApplication::translate("AddPlayerWindow", "Ann\303\251e d'arriv\303\251e :", 0));
        YearArrivalCheckBox->setText(QString());
        label_23->setText(QApplication::translate("AddPlayerWindow", "Poste :", 0));
        PlayerPositionEdit->clear();
        PlayerPositionEdit->insertItems(0, QStringList()
         << QApplication::translate("AddPlayerWindow", "Gardien", 0)
         << QApplication::translate("AddPlayerWindow", "Defenseur", 0)
         << QApplication::translate("AddPlayerWindow", "Milieu", 0)
         << QApplication::translate("AddPlayerWindow", "Attaquant", 0)
        );
        PositionCheckBox->setText(QString());
        label_24->setText(QApplication::translate("AddPlayerWindow", "Nombre de matchs jou\303\251s :", 0));
        MatchsCheckBox->setText(QString());
        label_25->setText(QApplication::translate("AddPlayerWindow", "Nombre de buts :", 0));
        GoalsCheckBox->setText(QString());
        label_26->setText(QApplication::translate("AddPlayerWindow", "Password :", 0));
        PwVerif->setText(QApplication::translate("AddPlayerWindow", "Ok", 0));
        Informations->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AddPlayerWindow", "New Player", 0));
        label->setText(QApplication::translate("AddPlayerWindow", "Existing Player that are not in this image :", 0));
        AddPlayer_2->setText(QApplication::translate("AddPlayerWindow", "Add player to current photo", 0));
        Information_existingPlayer->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AddPlayerWindow", "Existing player", 0));
    } // retranslateUi

};

namespace Ui {
    class AddPlayerWindow: public Ui_AddPlayerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPLAYERWINDOW_H
