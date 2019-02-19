#include "mainwindow.h"
#include "ui_mainwindow.h"

//Definition der grafischen Bedienoberfläche
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindow),
    dialogui(new Ui::Dialog) {
    //ui = user interface, bindet grafische Bedienoberfläche in
    //Programm ein.. durch ui->setupUi(this)
    ui->setupUi(this);

    on = true; //on am Anfang true damit er in Methode onOff rein
    //geht und die Komponenten ausschaltet...
    MainWindow::on_onOff_clicked();

    ui->onOff->setStyleSheet("QCheckBox{width: 25px;height: 25px;}\
      QCheckBox::indicator:unchecked {image: url(icons/on.png);} \
      QCheckBox::indicator:unchecked:hover {border-image: url(icons/onroll.png);} \
      QCheckBox::indicator:unchecked:pressed {image: url(icons/onpressed.png);} \
      QCheckBox::indicator:checked {image: url(icons/off.png);} \
      QCheckBox::indicator:checked:hover {image: url(icons/offroll.png);} \
      QCheckBox::indicator:checked:pressed {image: url(icons/offpressed.png);}");

 ui->ch1->setStyleSheet("QRadioButton{width: 25px;height: 25px;}\
     QRadioButton::indicator:unchecked:disabled{image: url(icons/ch1disabled.png);} \
     QRadioButton::indicator:unchecked {image: url(icons/ch1.png);} \
     QRadioButton::indicator:unchecked:hover {image: url(icons/ch1roll.png);} \
     QRadioButton::indicator:unchecked:pressed {image: url(icons/ch1pressed.png);} \
     QRadioButton::indicator:checked {image: url(icons/ch1sel.png);} \
     QRadioButton::indicator:checked:disabled{image: url(icons/ch1disabled.png);} \
     QRadioButton::indicator:checked:hover {image: url(icons/ch1roll.png);} \
     QRadioButton::indicator:checked:pressed {image: url(icons/ch1pressed.png);}");

    ui->ch2->setStyleSheet("QRadioButton{width: 25px;height: 25px;}\
        QRadioButton::indicator:unchecked:disabled{image: url(icons/ch2disabled.png);} \
        QRadioButton::indicator:unchecked {image: url(icons/ch2.png);} \
        QRadioButton::indicator:unchecked:hover {image: url(icons/ch2roll.png);} \
        QRadioButton::indicator:unchecked:pressed {image: url(icons/ch2pressed.png);} \
        QRadioButton::indicator:checked {image: url(icons/ch2sel.png);} \
        QRadioButton::indicator:checked:disabled{image: url(icons/ch2disabled.png);} \
        QRadioButton::indicator:checked:hover {image: url(icons/ch2roll.png);} \
        QRadioButton::indicator:checked:pressed {image: url(icons/ch2pressed.png);}");

   ui->ch3->setStyleSheet("QRadioButton{width: 25px;height: 25px;}\
       QRadioButton::indicator:unchecked:disabled{image: url(icons/ch3disabled.png);} \
       QRadioButton::indicator:unchecked {image: url(icons/ch3.png);} \
       QRadioButton::indicator:unchecked:hover {image: url(icons/ch3roll.png);} \
       QRadioButton::indicator:unchecked:pressed {image: url(icons/ch3pressed.png);} \
       QRadioButton::indicator:checked {image: url(icons/ch3sel.png);} \
       QRadioButton::indicator:checked:disabled{image: url(icons/ch3disabled.png);} \
       QRadioButton::indicator:checked:hover {image: url(icons/ch3roll.png);} \
       QRadioButton::indicator:checked:pressed {image: url(icons/ch3pressed.png);}");

  ui->ch4->setStyleSheet("QRadioButton{width: 25px;height: 25px;}\
      QRadioButton::indicator:unchecked:disabled{image: url(icons/ch4disabled.png);} \
      QRadioButton::indicator:unchecked {image: url(icons/ch4.png);} \
      QRadioButton::indicator:unchecked:hover {image: url(icons/ch4roll.png);} \
      QRadioButton::indicator:unchecked:pressed {image: url(icons/ch4pressed.png);} \
      QRadioButton::indicator:checked {image: url(icons/ch4sel.png);} \
      QRadioButton::indicator:checked:disabled{image: url(icons/ch4disabled.png);} \
      QRadioButton::indicator:checked:hover {image: url(icons/ch4roll.png);} \
      QRadioButton::indicator:checked:pressed {image: url(icons/ch4pressed.png);}");

 ui->ch5->setStyleSheet("QRadioButton{width: 25px;height: 25px;}\
     QRadioButton::indicator:unchecked:disabled{image: url(icons/ch5disabled.png);} \
     QRadioButton::indicator:unchecked {image: url(icons/ch5.png);} \
     QRadioButton::indicator:unchecked:hover {image: url(icons/ch5roll.png);} \
     QRadioButton::indicator:unchecked:pressed {image: url(icons/ch5pressed.png);} \
     QRadioButton::indicator:checked {image: url(icons/ch5sel.png);} \
     QRadioButton::indicator:checked:disabled{image: url(icons/ch5disabled.png);} \
     QRadioButton::indicator:checked:hover {image: url(icons/ch5roll.png);} \
     QRadioButton::indicator:checked:pressed {image: url(icons/ch5pressed.png);}");


    //Aufgabe 4: "about" Fenster:
    dialog = new QDialog();
    dialogui->setupUi(dialog);
    dialog->setModal(true);  //Modaler Dialog: Rest ist blockiert



}

MainWindow::~MainWindow(){
    delete ui;
    delete dialogui;
}

void MainWindow::on_ch1_clicked(){
    ui->channels->setText("Kanal 1 gewählt");
}

void MainWindow::on_ch2_clicked(){
    ui->channels->setText("Kanal 2 gewählt");
}

void MainWindow::on_ch3_clicked(){
    ui->channels->setText("Kanal 3 gewählt");
}

void MainWindow::on_ch4_clicked(){
    ui->channels->setText("Kanal 4 gewählt");
}

void MainWindow::on_ch5_clicked(){
    ui->channels->setText("Kanal 5 gewählt");
}

void MainWindow::on_onOff_clicked(){
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

//Menüpunkt "about"
void MainWindow::on_actionAbout_triggered(){
    dialog->show();
}
