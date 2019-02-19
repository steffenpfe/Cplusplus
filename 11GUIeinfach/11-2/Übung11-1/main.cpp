#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])//Startwerte für Programm

{
    QApplication a(argc, argv);
    MainWindow w; //für Hauptfenster des Programms
    w.show();

    return a.exec();
}
