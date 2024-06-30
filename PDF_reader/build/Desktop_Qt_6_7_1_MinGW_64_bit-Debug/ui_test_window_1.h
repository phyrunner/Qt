/********************************************************************************
** Form generated from reading UI file 'test_window_1.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_WINDOW_1_H
#define UI_TEST_WINDOW_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test_Window_1
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Test_Window_1)
    {
        if (Test_Window_1->objectName().isEmpty())
            Test_Window_1->setObjectName("Test_Window_1");
        Test_Window_1->resize(800, 600);
        centralwidget = new QWidget(Test_Window_1);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(190, 300, 141, 51));
        Test_Window_1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Test_Window_1);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Test_Window_1->setMenuBar(menubar);
        statusbar = new QStatusBar(Test_Window_1);
        statusbar->setObjectName("statusbar");
        Test_Window_1->setStatusBar(statusbar);

        retranslateUi(Test_Window_1);

        QMetaObject::connectSlotsByName(Test_Window_1);
    } // setupUi

    void retranslateUi(QMainWindow *Test_Window_1)
    {
        Test_Window_1->setWindowTitle(QCoreApplication::translate("Test_Window_1", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("Test_Window_1", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Test_Window_1: public Ui_Test_Window_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_WINDOW_1_H
