#include "db.h"
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    // seems to makes problem
    w.setWindowIcon(QIcon("../iconFcb"));
    w.setWindowTitle("Appli reconnaissance joueurs FCB");
    w.show();



    return a.exec();
}
