#ifndef CLICKABLELABEL_H
#define CLICKABLELABEL_H
#include "QLabel"


// classe créée pour pouvoir faire en sorte de cliquer sur un label (pour changer l'image  courante)

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

 void urlChanged(const QString& url);

public slots:
 void modifieImage(QPoint p);

protected:
 void mouseReleaseEvent ( QMouseEvent * event ) ;
};

#endif // CLICKABLELABEL_H
