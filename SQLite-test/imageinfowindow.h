#ifndef IMAGEINFOWINDOW_H
#define IMAGEINFOWINDOW_H

#include <QDialog>

namespace Ui {
class ImageInfoWindow;
}

class ImageInfoWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ImageInfoWindow(QWidget *parent = 0);
    ~ImageInfoWindow();

    Ui::ImageInfoWindow* getUi(){return ui;}

private slots:

public slots:
    void urlModif(const QString &url);

private:
    Ui::ImageInfoWindow *ui;
};

#endif // IMAGEINFOWINDOW_H
