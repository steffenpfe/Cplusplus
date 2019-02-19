#include "mainwindow.h"
#include "ui_mainwindow.h"

//Definition der grafischen Bedienoberfläche
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindow) {
    //ui = user interface, bindet grafische Bedienoberfläche in
    //Programm ein.. durch ui->setupUi(this)
    ui->setupUi(this);

    on = true; //on am Anfang true damit er in Methode onOff rein
    //geht und die Komponenten ausschaltet...
    MainWindow::on_onOff_clicked();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ch1_clicked()
{
    ui->channels->setText("Kanal 1 gewählt");
}

void MainWindow::on_ch2_clicked()
{
    ui->channels->setText("Kanal 2 gewählt");
}

void MainWindow::on_ch3_clicked()
{
    ui->channels->setText("Kanal 3 gewählt");
}

void MainWindow::on_ch4_clicked()
{
    ui->channels->setText("Kanal 4 gewählt");
}

void MainWindow::on_ch5_clicked()
{
    ui->channels->setText("Kanal 5 gewählt");
}

void MainWindow::on_onOff_clicked()
{
    if (on) {
         on = false;
         ui->ch1->setEnabled(false);
         ui->ch2->setEnabled(false);
         ui->ch3->setEnabled(false);
         ui->ch4->setEnabled(false);
         ui->ch5->setEnabled(false);

         ui->channels->setEnabled(false);
       }
       else {
         on = true;
         ui->ch1->setEnabled(true);
         ui->ch2->setEnabled(true);
         ui->ch3->setEnabled(true);
         ui->ch4->setEnabled(true);
         ui->ch5->setEnabled(true);

         ui->channels->setEnabled(true);
       }
}
