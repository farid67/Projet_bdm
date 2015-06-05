/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ClickableLabel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *AcceuilOnglet;
    QWidget *tab_5;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLabel *Acceuil_label;
    QWidget *tab_6;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *urlInsertLabel;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *AnneeInsertCheckBox;
    QSpinBox *spinBox;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_10;
    QCheckBox *NumeroInsertCheckBox;
    QSpinBox *NumeroSpinBox;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QWidget *tab_2;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *AnneeSelectCheckBox;
    QSpinBox *AnneeSearchSpinBox;
    QPushButton *SearchpushButton;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_13;
    QCheckBox *NumeroSelectCheckBox;
    QSpinBox *NumeroSelectSpinBox_4;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_12;
    QLineEdit *NameSearchLineEdit;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_7;
    ClickableLabel *urlSelectLabel;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_7;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *ModifyImagepushButton;
    QSpacerItem *horizontalSpacer_5;
    QWidget *tab_3;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_8;
    QVBoxLayout *verticalLayout_14;
    QToolButton *DeleteAlltoolButton;
    QPushButton *DeleteAllPlayer;
    QPushButton *DeleteAllTables;
    QPushButton *DeleteImageTable;
    QPushButton *CreateImageTable;
    QPushButton *DeletePlayerTable;
    QPushButton *CreatePlayerTable;
    QLabel *DeleteLabel;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_12;
    QLineEdit *Admin_pwlineEdit;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *AdminpushButton;
    QLabel *WarningInfo;
    QWidget *tab;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_8;
    QLabel *label;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(693, 492);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        AcceuilOnglet = new QTabWidget(centralWidget);
        AcceuilOnglet->setObjectName(QStringLiteral("AcceuilOnglet"));
        AcceuilOnglet->setGeometry(QRect(0, 0, 691, 471));
        AcceuilOnglet->setTabPosition(QTabWidget::North);
        AcceuilOnglet->setIconSize(QSize(32, 32));
        AcceuilOnglet->setTabsClosable(false);
        AcceuilOnglet->setMovable(false);
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayoutWidget_2 = new QWidget(tab_5);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(90, 10, 547, 421));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(true);

        verticalLayout_3->addWidget(label_4);

        Acceuil_label = new QLabel(verticalLayoutWidget_2);
        Acceuil_label->setObjectName(QStringLiteral("Acceuil_label"));
        Acceuil_label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(Acceuil_label);

        AcceuilOnglet->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        verticalLayoutWidget_3 = new QWidget(tab_6);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 80, 541, 331));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        urlInsertLabel = new QLabel(verticalLayoutWidget_3);
        urlInsertLabel->setObjectName(QStringLiteral("urlInsertLabel"));
        urlInsertLabel->setEnabled(true);
        urlInsertLabel->setFrameShape(QFrame::Panel);
        urlInsertLabel->setLineWidth(1);
        urlInsertLabel->setScaledContents(true);
        urlInsertLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(urlInsertLabel);

        gridLayoutWidget = new QWidget(tab_6);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 0, 671, 81));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout->setVerticalSpacing(5);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(tab_6);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(559, 80, 121, 331));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_3, 4, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        AnneeInsertCheckBox = new QCheckBox(gridLayoutWidget_2);
        AnneeInsertCheckBox->setObjectName(QStringLiteral("AnneeInsertCheckBox"));

        verticalLayout_2->addWidget(AnneeInsertCheckBox);

        spinBox = new QSpinBox(gridLayoutWidget_2);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setEnabled(false);
        QFont font1;
        font1.setFamily(QStringLiteral("Droid Sans Japanese"));
        spinBox->setFont(font1);
        spinBox->setAlignment(Qt::AlignCenter);
        spinBox->setMinimum(1899);
        spinBox->setMaximum(2015);
        spinBox->setValue(2015);

        verticalLayout_2->addWidget(spinBox);


        gridLayout_2->addLayout(verticalLayout_2, 3, 0, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setEnabled(false);

        gridLayout_2->addWidget(pushButton_4, 5, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_4, 6, 0, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        NumeroInsertCheckBox = new QCheckBox(gridLayoutWidget_2);
        NumeroInsertCheckBox->setObjectName(QStringLiteral("NumeroInsertCheckBox"));
        NumeroInsertCheckBox->setEnabled(true);
        NumeroInsertCheckBox->setLayoutDirection(Qt::LeftToRight);
        NumeroInsertCheckBox->setCheckable(true);
        NumeroInsertCheckBox->setChecked(false);
        NumeroInsertCheckBox->setTristate(false);

        verticalLayout_10->addWidget(NumeroInsertCheckBox);

        NumeroSpinBox = new QSpinBox(gridLayoutWidget_2);
        NumeroSpinBox->setObjectName(QStringLiteral("NumeroSpinBox"));
        NumeroSpinBox->setEnabled(false);
        NumeroSpinBox->setAlignment(Qt::AlignCenter);
        NumeroSpinBox->setMinimum(1);

        verticalLayout_10->addWidget(NumeroSpinBox);


        gridLayout_2->addLayout(verticalLayout_10, 1, 0, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(false);
        label_2->setMaximumSize(QSize(16777215, 20));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_2);

        lineEdit_2 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_9->addWidget(lineEdit_2);


        gridLayout_2->addLayout(verticalLayout_9, 0, 0, 1, 1);

        AcceuilOnglet->addTab(tab_6, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayoutWidget_4 = new QWidget(tab_2);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(560, 20, 113, 331));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_5, 4, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        AnneeSelectCheckBox = new QCheckBox(gridLayoutWidget_4);
        AnneeSelectCheckBox->setObjectName(QStringLiteral("AnneeSelectCheckBox"));

        verticalLayout_5->addWidget(AnneeSelectCheckBox);

        AnneeSearchSpinBox = new QSpinBox(gridLayoutWidget_4);
        AnneeSearchSpinBox->setObjectName(QStringLiteral("AnneeSearchSpinBox"));
        AnneeSearchSpinBox->setEnabled(false);
        AnneeSearchSpinBox->setAlignment(Qt::AlignCenter);
        AnneeSearchSpinBox->setReadOnly(false);
        AnneeSearchSpinBox->setMinimum(1899);
        AnneeSearchSpinBox->setMaximum(2015);
        AnneeSearchSpinBox->setValue(2015);

        verticalLayout_5->addWidget(AnneeSearchSpinBox);


        gridLayout_4->addLayout(verticalLayout_5, 3, 0, 1, 1);

        SearchpushButton = new QPushButton(gridLayoutWidget_4);
        SearchpushButton->setObjectName(QStringLiteral("SearchpushButton"));
        SearchpushButton->setEnabled(false);

        gridLayout_4->addWidget(SearchpushButton, 5, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_6, 6, 0, 1, 1);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        NumeroSelectCheckBox = new QCheckBox(gridLayoutWidget_4);
        NumeroSelectCheckBox->setObjectName(QStringLiteral("NumeroSelectCheckBox"));
        NumeroSelectCheckBox->setEnabled(true);
        NumeroSelectCheckBox->setLayoutDirection(Qt::LeftToRight);
        NumeroSelectCheckBox->setCheckable(true);
        NumeroSelectCheckBox->setChecked(false);
        NumeroSelectCheckBox->setTristate(false);

        verticalLayout_13->addWidget(NumeroSelectCheckBox);

        NumeroSelectSpinBox_4 = new QSpinBox(gridLayoutWidget_4);
        NumeroSelectSpinBox_4->setObjectName(QStringLiteral("NumeroSelectSpinBox_4"));
        NumeroSelectSpinBox_4->setEnabled(false);
        NumeroSelectSpinBox_4->setAlignment(Qt::AlignCenter);
        NumeroSelectSpinBox_4->setMinimum(1);

        verticalLayout_13->addWidget(NumeroSelectSpinBox_4);


        gridLayout_4->addLayout(verticalLayout_13, 1, 0, 1, 1);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        label_12 = new QLabel(gridLayoutWidget_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setEnabled(false);
        label_12->setMaximumSize(QSize(16777215, 20));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(label_12);

        NameSearchLineEdit = new QLineEdit(gridLayoutWidget_4);
        NameSearchLineEdit->setObjectName(QStringLiteral("NameSearchLineEdit"));

        verticalLayout_15->addWidget(NameSearchLineEdit);


        gridLayout_4->addLayout(verticalLayout_15, 0, 0, 1, 1);

        verticalLayoutWidget_4 = new QWidget(tab_2);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(10, 20, 541, 331));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        urlSelectLabel = new ClickableLabel(verticalLayoutWidget_4);
        urlSelectLabel->setObjectName(QStringLiteral("urlSelectLabel"));
        urlSelectLabel->setEnabled(true);
        urlSelectLabel->setMouseTracking(true);
        urlSelectLabel->setFrameShape(QFrame::Panel);
        urlSelectLabel->setLineWidth(1);
        urlSelectLabel->setScaledContents(true);
        urlSelectLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(urlSelectLabel);

        gridLayoutWidget_5 = new QWidget(tab_2);
        gridLayoutWidget_5->setObjectName(QStringLiteral("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(10, 350, 541, 81));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout_5->setVerticalSpacing(5);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(gridLayoutWidget_5);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        gridLayout_5->addWidget(pushButton_7, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 0, 4, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        ModifyImagepushButton = new QPushButton(gridLayoutWidget_5);
        ModifyImagepushButton->setObjectName(QStringLiteral("ModifyImagepushButton"));

        gridLayout_5->addWidget(ModifyImagepushButton, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        AcceuilOnglet->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayoutWidget_6 = new QWidget(tab_3);
        gridLayoutWidget_6->setObjectName(QStringLiteral("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(19, 10, 651, 411));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        DeleteAlltoolButton = new QToolButton(gridLayoutWidget_6);
        DeleteAlltoolButton->setObjectName(QStringLiteral("DeleteAlltoolButton"));
        DeleteAlltoolButton->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(DeleteAlltoolButton->sizePolicy().hasHeightForWidth());
        DeleteAlltoolButton->setSizePolicy(sizePolicy1);
        DeleteAlltoolButton->setAutoFillBackground(false);
        DeleteAlltoolButton->setCheckable(false);
        DeleteAlltoolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_14->addWidget(DeleteAlltoolButton);

        DeleteAllPlayer = new QPushButton(gridLayoutWidget_6);
        DeleteAllPlayer->setObjectName(QStringLiteral("DeleteAllPlayer"));

        verticalLayout_14->addWidget(DeleteAllPlayer);

        DeleteAllTables = new QPushButton(gridLayoutWidget_6);
        DeleteAllTables->setObjectName(QStringLiteral("DeleteAllTables"));

        verticalLayout_14->addWidget(DeleteAllTables);

        DeleteImageTable = new QPushButton(gridLayoutWidget_6);
        DeleteImageTable->setObjectName(QStringLiteral("DeleteImageTable"));

        verticalLayout_14->addWidget(DeleteImageTable);

        CreateImageTable = new QPushButton(gridLayoutWidget_6);
        CreateImageTable->setObjectName(QStringLiteral("CreateImageTable"));

        verticalLayout_14->addWidget(CreateImageTable);

        DeletePlayerTable = new QPushButton(gridLayoutWidget_6);
        DeletePlayerTable->setObjectName(QStringLiteral("DeletePlayerTable"));

        verticalLayout_14->addWidget(DeletePlayerTable);

        CreatePlayerTable = new QPushButton(gridLayoutWidget_6);
        CreatePlayerTable->setObjectName(QStringLiteral("CreatePlayerTable"));

        verticalLayout_14->addWidget(CreatePlayerTable);

        DeleteLabel = new QLabel(gridLayoutWidget_6);
        DeleteLabel->setObjectName(QStringLiteral("DeleteLabel"));
        DeleteLabel->setEnabled(false);
        DeleteLabel->setFont(font);
        DeleteLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_14->addWidget(DeleteLabel);


        gridLayout_8->addLayout(verticalLayout_14, 0, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_8, 2, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        Admin_pwlineEdit = new QLineEdit(gridLayoutWidget_6);
        Admin_pwlineEdit->setObjectName(QStringLiteral("Admin_pwlineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Admin_pwlineEdit->sizePolicy().hasHeightForWidth());
        Admin_pwlineEdit->setSizePolicy(sizePolicy2);
        Admin_pwlineEdit->setAutoFillBackground(false);
        Admin_pwlineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout_12->addWidget(Admin_pwlineEdit);


        gridLayout_7->addLayout(verticalLayout_12, 0, 2, 1, 1);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_5 = new QLabel(gridLayoutWidget_6);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setEnabled(false);
        label_5->setLayoutDirection(Qt::LeftToRight);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_11->addWidget(label_5);


        gridLayout_7->addLayout(verticalLayout_11, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        AdminpushButton = new QPushButton(gridLayoutWidget_6);
        AdminpushButton->setObjectName(QStringLiteral("AdminpushButton"));
        AdminpushButton->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(AdminpushButton->sizePolicy().hasHeightForWidth());
        AdminpushButton->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(AdminpushButton);


        gridLayout_7->addLayout(horizontalLayout, 1, 1, 1, 2);

        WarningInfo = new QLabel(gridLayoutWidget_6);
        WarningInfo->setObjectName(QStringLiteral("WarningInfo"));
        WarningInfo->setEnabled(false);
        WarningInfo->setFont(font);
        WarningInfo->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(WarningInfo, 2, 1, 1, 2);


        gridLayout_6->addLayout(gridLayout_7, 0, 0, 1, 1);

        AcceuilOnglet->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayoutWidget_3 = new QWidget(tab);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(80, 30, 541, 351));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(gridLayoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setEnabled(false);
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy4);
        label_3->setMaximumSize(QSize(530, 100));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setTextFormat(Qt::AutoText);
        label_3->setScaledContents(false);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(true);

        verticalLayout->addWidget(label_3);


        verticalLayout_4->addLayout(verticalLayout);


        gridLayout_3->addLayout(verticalLayout_4, 1, 0, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setSizeConstraint(QLayout::SetNoConstraint);
        label = new QLabel(gridLayoutWidget_3);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        verticalLayout_8->addWidget(label);


        gridLayout_3->addLayout(verticalLayout_8, 0, 0, 1, 1);

        AcceuilOnglet->addTab(tab, QString());
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        AcceuilOnglet->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_4->setText(QApplication::translate("MainWindow", "Bienvenue sur la nouvelle application de reconnaissance des joueurs du Fc Barcelone ! ", 0));
        Acceuil_label->setText(QApplication::translate("MainWindow", "La photo de l'acceuil devrait apparaitre ici...", 0));
        AcceuilOnglet->setTabText(AcceuilOnglet->indexOf(tab_5), QApplication::translate("MainWindow", "Acceuil", 0));
        urlInsertLabel->setText(QApplication::translate("MainWindow", "Aucune image s\303\251l\303\251ctionn\303\251e pour le moment", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Click to select Image", 0));
        AnneeInsertCheckBox->setText(QApplication::translate("MainWindow", "Ann\303\251e :", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "Insert in bdd", 0));
#ifndef QT_NO_TOOLTIP
        NumeroInsertCheckBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        NumeroInsertCheckBox->setText(QApplication::translate("MainWindow", "Num\303\251ro :", 0));
        NumeroInsertCheckBox->setShortcut(QString());
        label_2->setText(QApplication::translate("MainWindow", "Nom du Joueur :", 0));
        AcceuilOnglet->setTabText(AcceuilOnglet->indexOf(tab_6), QApplication::translate("MainWindow", "New Image", 0));
        AnneeSelectCheckBox->setText(QApplication::translate("MainWindow", "Ann\303\251e :", 0));
        AnneeSearchSpinBox->setSpecialValueText(QApplication::translate("MainWindow", "Ann\303\251e", 0));
        SearchpushButton->setText(QApplication::translate("MainWindow", "Search", 0));
#ifndef QT_NO_TOOLTIP
        NumeroSelectCheckBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        NumeroSelectCheckBox->setText(QApplication::translate("MainWindow", "Num\303\251ro :", 0));
        NumeroSelectCheckBox->setShortcut(QString());
        label_12->setText(QApplication::translate("MainWindow", "Nom du Joueur :", 0));
        urlSelectLabel->setText(QApplication::translate("MainWindow", "Veuillez sp\303\251cifier au moins le nom du joueur pour effectuer une nouvelle recherche", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "Delete item", 0));
        ModifyImagepushButton->setText(QApplication::translate("MainWindow", "Modify item", 0));
        AcceuilOnglet->setTabText(AcceuilOnglet->indexOf(tab_2), QApplication::translate("MainWindow", "Bdd_elements", 0));
        DeleteAlltoolButton->setText(QApplication::translate("MainWindow", "Delete all images from the database", 0));
        DeleteAllPlayer->setText(QApplication::translate("MainWindow", "Delete all player from the database", 0));
        DeleteAllTables->setText(QApplication::translate("MainWindow", "Delete All Tables (do it only if you are sure)", 0));
        DeleteImageTable->setText(QApplication::translate("MainWindow", "Delete Image Table", 0));
        CreateImageTable->setText(QApplication::translate("MainWindow", "Recreate Image Table (this will only work if you have delete it before)", 0));
        DeletePlayerTable->setText(QApplication::translate("MainWindow", "Delete Player Table", 0));
        CreatePlayerTable->setText(QApplication::translate("MainWindow", "Recreate Player Table (this will only work if you have delete it before)", 0));
        DeleteLabel->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "Mot de Passe :", 0));
        AdminpushButton->setText(QApplication::translate("MainWindow", "Verification", 0));
        WarningInfo->setText(QApplication::translate("MainWindow", "Be careful of operations that you will do here, all operations are unchangeable.", 0));
        AcceuilOnglet->setTabText(AcceuilOnglet->indexOf(tab_3), QApplication::translate("MainWindow", "Admin", 0));
        label_3->setText(QApplication::translate("MainWindow", "A noter que les cr\303\251ateurs de ce projet ne r\303\251clament aucuns droits sur les photos utilis\303\251es. \n"
" Pour retrouver les droits relatifs aux photos, se referrer au fichier copyright.txt", 0));
        label->setText(QApplication::translate("MainWindow", "Dev : \n"
" - MATYSIAK Pierre \n"
" - OUHMICH Farid \n"
" Avec la collaboration de Mr. Fabre!", 0));
        AcceuilOnglet->setTabText(AcceuilOnglet->indexOf(tab), QApplication::translate("MainWindow", "A propos", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
