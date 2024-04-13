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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_secondwindow
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *secondwindow)
    {
        if (secondwindow->objectName().isEmpty())
            secondwindow->setObjectName("secondwindow");
        secondwindow->resize(230, 469);
        label = new QLabel(secondwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 10, 61, 16));
        pushButton = new QPushButton(secondwindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 350, 71, 24));

        retranslateUi(secondwindow);

        QMetaObject::connectSlotsByName(secondwindow);
    } // setupUi

    void retranslateUi(QWidget *secondwindow)
    {
        secondwindow->setWindowTitle(QCoreApplication::translate("secondwindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("secondwindow", "Tela 2", nullptr));
        pushButton->setText(QCoreApplication::translate("secondwindow", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondwindow: public Ui_secondwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
