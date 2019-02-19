#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include "shapes.h"
#include "triangle.h"
#include "square.h"
#include "pentagon.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    // Erzeugen eines neuen QPainter-Objekts, welches als
    // Ziel der Grafikoperationen das Programmfenster erhält.
    QPainter painter(this);

    // Zeichnen einer schwarzen Linie mit Strichstärke 2 von
    // (x1,y1) = (50,100) bis (x2,y2) = (150,200).
    // Für das Einstellen der Stifteigenschaften des QPainter
    // wird ein QPen-Objekt erzeugt.
    painter.setPen(QPen(Qt::black, 2));
//    painter.drawLine(50,100,150,200);


    Shapes *shapes[3];
    shapes[0] = new Triangle(&painter, 50);
    shapes[1] = new Square(&painter,50);
    shapes[2] = new Pentagon(&painter,50);

    shapes[0]->draw(200,50);
    shapes[1]->draw(200,150);
    shapes[2]->draw(200,250);
}
