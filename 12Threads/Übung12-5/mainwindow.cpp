#include "mainwindow.h"
#include "ui_mainwindow.h"
#define PI 3.14159265

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow), x(0), winkel(0)
{
    ui->setupUi(this);
    timer = new QTimer();
    timer->start(16.7);
    connect(timer,SIGNAL(timeout()),this,SLOT(draw()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

//Zeichnet Inhalt Hauptfenster bei Änderung Fensterinhalt
//oder Änderung durch update()
void MainWindow::paintEvent(QPaintEvent *event)
{
  QPainter painter(this);
  painter.setPen(QPen(Qt::black, 3));
//  painter.drawLine(x,100,x,200);
//  x += 2;
//  if (x > 400) x = 0;
  painter.drawLine(150, 150, 150 + 100*cos(winkel * PI/180), 150 + 100*sin(winkel * PI/180));
  winkel += 1;
  if(winkel >= 360)
      winkel = 0;

}

void MainWindow::draw() {
  update();
}
