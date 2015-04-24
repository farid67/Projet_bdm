#include "imageinfowindow.h"
#include "ui_imageinfowindow.h"

ImageInfoWindow::ImageInfoWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ImageInfoWindow)
{
    ui->setupUi(this);
}

ImageInfoWindow::~ImageInfoWindow()
{
    delete ui;
}


void ImageInfoWindow::urlModif(const QString& url)
{
    ui->ImageUrl_label->setText(url);
}
