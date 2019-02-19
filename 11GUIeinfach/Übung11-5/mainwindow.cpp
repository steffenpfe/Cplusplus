#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)//, ui(new Ui::MainWindow)
{
    //ui->setupUi(this);
    hlayout1.addWidget(&checkbox);
    hlayout1.addWidget(&lineedit);

    hlayout2.addWidget(&rb1);//Pushbuttons
    hlayout2.addWidget(&rb2);
    hlayout2.addWidget(&rb3);
    hlayout2.addWidget(&rb4);
    hlayout2.addWidget(&rb5);

    vlayout.addLayout(&hlayout1);
    vlayout.addLayout(&hlayout2);

    widget.setLayout(&vlayout);
    this->setCentralWidget(&widget);
    this->setWindowTitle("Halloooo");

    QObject::connect(&rb1, SIGNAL(clicked()), &s, SLOT(map()));
    QObject::connect(&rb2, SIGNAL(clicked()), &s, SLOT(map()));
    QObject::connect(&rb3, SIGNAL(clicked()), &s, SLOT(map()));
    QObject::connect(&rb4, SIGNAL(clicked()), &s, SLOT(map()));
    QObject::connect(&rb5, SIGNAL(clicked()), &s, SLOT(map()));

    //Klickereignis im Signal-Mapper auf die Zahlenwerte 1-5 abbilden
    s.setMapping(&rb1, 1);
    s.setMapping(&rb2, 2);
    s.setMapping(&rb3, 3);
    s.setMapping(&rb4, 4);
    s.setMapping(&rb5, 5);

    //SignalMapper mit behandler verbinden.
    QObject::connect(&s, SIGNAL(mapped(int)),this, SLOT(buttonHandler(int)));

    QObject::connect(&checkbox, SIGNAL(clicked()), this, SLOT(checkBoxHandler()));
    bool enabled = true;

}


void MainWindow::buttonHandler(int i) {
    ostringstream strStream;
    strStream << "Kanal " << i << " gewaehlt";
    lineedit.setText(QString::fromStdString(strStream.str()));
}


void MainWindow::checkBoxHandler() {
    if(enabled) {
        this->lineedit.setEnabled(false);
        this->rb1.setEnabled(false);
        this->rb2.setEnabled(false);
        this->rb3.setEnabled(false);
        this->rb4.setEnabled(false);
        this->rb5.setEnabled(false);
        enabled = false;
    }
    else {
        this->lineedit.setEnabled(true);
        this->rb1.setEnabled(true);
        this->rb2.setEnabled(true);
        this->rb3.setEnabled(true);
        this->rb4.setEnabled(true);
        this->rb5.setEnabled(true);
        enabled = true;
    }
}




MainWindow::~MainWindow()
{
    //delete ui;
}
