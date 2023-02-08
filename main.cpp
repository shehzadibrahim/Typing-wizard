#include "mainwindow.h"
#include "play.h"
#include <QVector>
#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
  ;
    w.setWindowTitle("TYPING WIZARD");
    w.show();






    return a.exec();
}

