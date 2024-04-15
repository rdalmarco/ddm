/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_secondwindow
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_2;

    void setupUi(QWidget *secondwindow)
    {
        if (secondwindow->objectName().isEmpty())
            secondwindow->setObjectName("secondwindow");
        secondwindow->resize(340, 566);
        label = new QLabel(secondwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 10, 81, 21));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);
        pushButton = new QPushButton(secondwindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 530, 71, 24));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        pushButton->setFont(font1);
        textBrowser = new QTextBrowser(secondwindow);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(10, 50, 321, 401));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        textBrowser->setFont(font2);
        pushButton_2 = new QPushButton(secondwindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(90, 470, 151, 41));
        pushButton_2->setFont(font2);

        retranslateUi(secondwindow);

        QMetaObject::connectSlotsByName(secondwindow);
    } // setupUi

    void retranslateUi(QWidget *secondwindow)
    {
        secondwindow->setWindowTitle(QCoreApplication::translate("secondwindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("secondwindow", "Listar", nullptr));
        pushButton->setText(QCoreApplication::translate("secondwindow", "Voltar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("secondwindow", "Listar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondwindow: public Ui_secondwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
