#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_ch1_clicked();
    void on_ch2_clicked();
    void on_ch3_clicked();
    void on_ch4_clicked();
    void on_ch5_clicked();

    void on_onOff_clicked();

private:
    Ui::MainWindow *ui;
    bool on;
};

#endif // MAINWINDOW_H
