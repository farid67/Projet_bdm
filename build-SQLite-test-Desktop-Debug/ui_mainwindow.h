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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOnglet_1;
    QWidget *centralWidget;
    QTabWidget *AcceuilOnglet;
    QWidget *tab_5;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_4;
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
    QLabel *urlSelectLabel;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_7;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_5;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(693, 492);
        actionOnglet_1 = new QAction(MainWindow);
        actionOnglet_1->setObjectName(QStringLiteral("actionOnglet_1"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        AcceuilOnglet = new QTabWidget(centralWidget);
        AcceuilOnglet->setObjectName(QStringLiteral("AcceuilOnglet"));
        AcceuilOnglet->setGeometry(QRect(0, 0, 691, 471));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayoutWidget = new QWidget(tab_5);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 10, 141, 321));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        verticalLayoutWidget_2 = new QWidget(tab_5);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(142, 10, 541, 421));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_3->addItem(verticalSpacer);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMaximumSize(QSize(530, 100));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setTextFormat(Qt::AutoText);
        label_3->setScaledContents(false);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(true);

        verticalLayout_3->addWidget(label_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_3->addItem(verticalSpacer_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetFixedSize);

        verticalLayout_3->addLayout(verticalLayout_4);

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
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
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
        gridLayoutWidget_4->setGeometry(QRect(560, 20, 111, 331));
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
        label_12->setFont(font2);
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
        urlSelectLabel = new QLabel(verticalLayoutWidget_4);
        urlSelectLabel->setObjectName(QStringLiteral("urlSelectLabel"));
        urlSelectLabel->setEnabled(true);
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

        pushButton_5 = new QPushButton(gridLayoutWidget_5);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout_5->addWidget(pushButton_5, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        AcceuilOnglet->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        AcceuilOnglet->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionOnglet_1->setText(QApplication::translate("MainWindow", "Onglet 1", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Image1", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Image2", 0));
        label_3->setText(QApplication::translate("MainWindow", "A noter que les cr\303\251ateurs de ce projet ne r\303\251clament aucuns droits sur les photos utilis\303\251es. Pour retrouver les droits relatifs aux photos, se referrer au fichier copyright.txt", 0));
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
        pushButton_5->setText(QApplication::translate("MainWindow", "Modify item", 0));
        AcceuilOnglet->setTabText(AcceuilOnglet->indexOf(tab_2), QApplication::translate("MainWindow", "Bdd_elements", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
