#include "ClickableLabel.h"
#include "QMouseEvent"
#include "iostream"

ClickableLabel::ClickableLabel( QWidget * parent ) :QLabel(parent)

{
    url_select = new QStringList();
    current_image = 0;
    connect(this,SIGNAL(clicked(QPoint)),this,SLOT(modifieImage(QPoint)));
 //this->setText(text);
}

ClickableLabel::~ClickableLabel()
{
}

void ClickableLabel::modifieImage(QPoint p)
{
    //clic  droite de l'image -> image suivante

    if (p.x() > this->width()/2)// click sur la droite de l'image
    {
        current_image++;
        this->setPixmap(url_select->at(current_image));
        emit urlChanged(url_select->at(current_image));
    }

    else//click sur la gauche
    {
        current_image--;
        this->setPixmap(url_select->at(current_image));
        emit urlChanged(url_select->at(current_image));
    }

}

void ClickableLabel::mouseReleaseEvent( QMouseEvent * event )
{
//    std::cout << "clic " << std::endl;

    if (event->pos().x() > width()/2 && url_select->size()>current_image+1)
    {
        emit clicked(event->pos());
    }
    else if (event->pos().x() <= width()/2 && current_image-1>=0)
    {
        emit(clicked(event->pos()));
    }

}
