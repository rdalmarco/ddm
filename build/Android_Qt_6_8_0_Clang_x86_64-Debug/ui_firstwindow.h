/********************************************************************************
** Form generated from reading UI file 'firstwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTWINDOW_H
#define UI_FIRSTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_firstwindow
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *firstwindow)
    {
        if (firstwindow->objectName().isEmpty())
            firstwindow->setObjectName("firstwindow");
        firstwindow->resize(312, 588);
        label = new QLabel(firstwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 10, 31, 16));
        pushButton = new QPushButton(firstwindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 550, 71, 24));
        pushButton_2 = new QPushButton(firstwindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(110, 430, 80, 24));

        retranslateUi(firstwindow);

        QMetaObject::connectSlotsByName(firstwindow);
    } // setupUi

    void retranslateUi(QWidget *firstwindow)
    {
        firstwindow->setWindowTitle(QCoreApplication::translate("firstwindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("firstwindow", "Tela 1", nullptr));
        pushButton->setText(QCoreApplication::translate("firstwindow", "Voltar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("firstwindow", "Criar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class firstwindow: public Ui_firstwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTWINDOW_H
