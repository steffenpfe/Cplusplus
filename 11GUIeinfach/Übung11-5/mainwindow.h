#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QRadioButton>
#include <QCheckBox>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSignalMapper>

#include <sstream>
#include <QString>

using namespace std;


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private:
    //Ui::MainWindow *ui;
    QWidget widget; //Zentrales widget für gui in dem alles plaziert wird
    QCheckBox checkbox;
    QRadioButton rb1, rb2, rb3, rb4, rb5;
    QLineEdit lineedit;
    QVBoxLayout vlayout;
    QHBoxLayout hlayout1, hlayout2;
    QSignalMapper s;
    bool enabled;

public slots:
    void buttonHandler(int i);
    void checkBoxHandler();
};

#endif // MAINWINDOW_H
