/********************************************************************************
** Form generated from reading UI file 'thirdwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDWINDOW_H
#define UI_THIRDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_thirdwindow
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *thirdwindow)
    {
        if (thirdwindow->objectName().isEmpty())
            thirdwindow->setObjectName("thirdwindow");
        thirdwindow->resize(245, 436);
        label = new QLabel(thirdwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 10, 51, 16));
        pushButton = new QPushButton(thirdwindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 360, 71, 24));

        retranslateUi(thirdwindow);

        QMetaObject::connectSlotsByName(thirdwindow);
    } // setupUi

    void retranslateUi(QWidget *thirdwindow)
    {
        thirdwindow->setWindowTitle(QCoreApplication::translate("thirdwindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("thirdwindow", "Tela 3", nullptr));
        pushButton->setText(QCoreApplication::translate("thirdwindow", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class thirdwindow: public Ui_thirdwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDWINDOW_H
