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

    void setupUi(QWidget *firstwindow)
    {
        if (firstwindow->objectName().isEmpty())
            firstwindow->setObjectName("firstwindow");
        firstwindow->resize(216, 357);
        label = new QLabel(firstwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 10, 31, 16));
        pushButton = new QPushButton(firstwindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 260, 71, 24));

        retranslateUi(firstwindow);

        QMetaObject::connectSlotsByName(firstwindow);
    } // setupUi

    void retranslateUi(QWidget *firstwindow)
    {
        firstwindow->setWindowTitle(QCoreApplication::translate("firstwindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("firstwindow", "Tela 1", nullptr));
        pushButton->setText(QCoreApplication::translate("firstwindow", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class firstwindow: public Ui_firstwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTWINDOW_H
