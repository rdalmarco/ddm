/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *pushButton_3;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QLabel *label;
    QFrame *frame_2;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(340, 566);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(30, 20, 291, 241));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(30, 160, 231, 41));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        pushButton_3->setFont(font);
        pushButton_1 = new QPushButton(frame);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(30, 60, 231, 41));
        pushButton_1->setFont(font);
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 110, 231, 41));
        pushButton_2->setFont(font);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 10, 101, 31));
        label->setFont(font);
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(30, 280, 291, 191));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        pushButton_4 = new QPushButton(frame_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(30, 50, 231, 41));
        pushButton_4->setFont(font);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 10, 101, 31));
        label_2->setFont(font);
        pushButton_5 = new QPushButton(frame_2);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(30, 100, 231, 41));
        pushButton_5->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 340, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Excluir", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "Cadastrar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Listar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Veiculo", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Cadastrar", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Marca", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Listar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
