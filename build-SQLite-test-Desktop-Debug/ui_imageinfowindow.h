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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageInfoWindow
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *ImageUrl_label;

    void setupUi(QDialog *ImageInfoWindow)
    {
        if (ImageInfoWindow->objectName().isEmpty())
            ImageInfoWindow->setObjectName(QStringLiteral("ImageInfoWindow"));
        ImageInfoWindow->resize(421, 310);
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


        retranslateUi(ImageInfoWindow);

        QMetaObject::connectSlotsByName(ImageInfoWindow);
    } // setupUi

    void retranslateUi(QDialog *ImageInfoWindow)
    {
        ImageInfoWindow->setWindowTitle(QApplication::translate("ImageInfoWindow", "Dialog", 0));
        label->setText(QApplication::translate("ImageInfoWindow", "Url :", 0));
        ImageUrl_label->setText(QApplication::translate("ImageInfoWindow", "No Url for the moment", 0));
    } // retranslateUi

};

namespace Ui {
    class ImageInfoWindow: public Ui_ImageInfoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEINFOWINDOW_H
