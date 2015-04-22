#ifndef CLICKABLELABEL_H
#define CLICKABLELABEL_H
#include "QLabel"

class ClickableLabel : public QLabel
{

Q_OBJECT

public:
 explicit ClickableLabel(QWidget * parent = 0 );
 ~ClickableLabel();

    QStringList * url_select;
    int current_image;

signals:
 void clicked(QPoint p);

public slots:
 void modifieImage(QPoint p);

protected:
 void mouseReleaseEvent ( QMouseEvent * event ) ;
};

#endif // CLICKABLELABEL_H
