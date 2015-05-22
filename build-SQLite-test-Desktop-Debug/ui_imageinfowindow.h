/********************************************************************************
** Form generated from reading UI file 'imageinfowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEINFOWINDOW_H
#define UI_IMAGEINFOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageInfoWindow
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *ImageUrl_label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QListWidget *PlayerList;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *add_player_image;

    void setupUi(QDialog *ImageInfoWindow)
    {
        if (ImageInfoWindow->objectName().isEmpty())
            ImageInfoWindow->setObjectName(QStringLiteral("ImageInfoWindow"));
        ImageInfoWindow->resize(431, 379);
        gridLayoutWidget = new QWidget(ImageInfoWindow);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 10, 381, 71));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(false);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        ImageUrl_label = new QLabel(gridLayoutWidget);
        ImageUrl_label->setObjectName(QStringLiteral("ImageUrl_label"));
        ImageUrl_label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ImageUrl_label, 1, 0, 1, 1);

        verticalLayoutWidget = new QWidget(ImageInfoWindow);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 90, 381, 167));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(false);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        PlayerList = new QListWidget(verticalLayoutWidget);
        PlayerList->setObjectName(QStringLiteral("PlayerList"));

        verticalLayout->addWidget(PlayerList);

        verticalLayoutWidget_2 = new QWidget(ImageInfoWindow);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 270, 381, 80));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        add_player_image = new QPushButton(verticalLayoutWidget_2);
        add_player_image->setObjectName(QStringLiteral("add_player_image"));

        verticalLayout_2->addWidget(add_player_image);


        retranslateUi(ImageInfoWindow);

        QMetaObject::connectSlotsByName(ImageInfoWindow);
    } // setupUi

    void retranslateUi(QDialog *ImageInfoWindow)
    {
        ImageInfoWindow->setWindowTitle(QApplication::translate("ImageInfoWindow", "Dialog", 0));
        label->setText(QApplication::translate("ImageInfoWindow", "Url :", 0));
        ImageUrl_label->setText(QApplication::translate("ImageInfoWindow", "No Url for the moment", 0));
        label_2->setText(QApplication::translate("ImageInfoWindow", "Liste des joueurs pr\303\251sents sur la photo :", 0));
        add_player_image->setText(QApplication::translate("ImageInfoWindow", "Add player to the photo", 0));
    } // retranslateUi

};

namespace Ui {
    class ImageInfoWindow: public Ui_ImageInfoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEINFOWINDOW_H
