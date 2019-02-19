/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *onOff;
    QLineEdit *channels;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *ch1;
    QRadioButton *ch2;
    QRadioButton *ch3;
    QRadioButton *ch4;
    QRadioButton *ch5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(357, 228);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 20, 311, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        onOff = new QPushButton(widget);
        onOff->setObjectName(QStringLiteral("onOff"));

        horizontalLayout->addWidget(onOff);

        channels = new QLineEdit(widget);
        channels->setObjectName(QStringLiteral("channels"));

        horizontalLayout->addWidget(channels);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 70, 316, 19));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        ch1 = new QRadioButton(widget1);
        ch1->setObjectName(QStringLiteral("ch1"));

        horizontalLayout_2->addWidget(ch1);

        ch2 = new QRadioButton(widget1);
        ch2->setObjectName(QStringLiteral("ch2"));

        horizontalLayout_2->addWidget(ch2);

        ch3 = new QRadioButton(widget1);
        ch3->setObjectName(QStringLiteral("ch3"));

        horizontalLayout_2->addWidget(ch3);

        ch4 = new QRadioButton(widget1);
        ch4->setObjectName(QStringLiteral("ch4"));

        horizontalLayout_2->addWidget(ch4);

        ch5 = new QRadioButton(widget1);
        ch5->setObjectName(QStringLiteral("ch5"));

        horizontalLayout_2->addWidget(ch5);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 357, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        onOff->setText(QApplication::translate("MainWindow", "Ein/Aus", 0));
        ch1->setText(QApplication::translate("MainWindow", "Kanal 1", 0));
        ch2->setText(QApplication::translate("MainWindow", "Kanal 2", 0));
        ch3->setText(QApplication::translate("MainWindow", "Kanal 3", 0));
        ch4->setText(QApplication::translate("MainWindow", "Kanal 4", 0));
        ch5->setText(QApplication::translate("MainWindow", "Kanal 5", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
