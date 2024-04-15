/********************************************************************************
** Form generated from reading UI file 'cadastrarmarca.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRARMARCA_H
#define UI_CADASTRARMARCA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cadastrarmarca
{
public:
    QLabel *label;
    QPushButton *pushButton_2;
    QLineEdit *editNome;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QWidget *cadastrarmarca)
    {
        if (cadastrarmarca->objectName().isEmpty())
            cadastrarmarca->setObjectName("cadastrarmarca");
        cadastrarmarca->resize(360, 566);
        label = new QLabel(cadastrarmarca);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 10, 241, 31));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        pushButton_2 = new QPushButton(cadastrarmarca);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(70, 280, 201, 61));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        pushButton_2->setFont(font1);
        editNome = new QLineEdit(cadastrarmarca);
        editNome->setObjectName("editNome");
        editNome->setGeometry(QRect(70, 230, 201, 31));
        QFont font2;
        font2.setPointSize(14);
        editNome->setFont(font2);
        pushButton = new QPushButton(cadastrarmarca);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 520, 71, 24));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        pushButton->setFont(font3);
        label_2 = new QLabel(cadastrarmarca);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 200, 71, 16));
        label_2->setFont(font3);

        retranslateUi(cadastrarmarca);

        QMetaObject::connectSlotsByName(cadastrarmarca);
    } // setupUi

    void retranslateUi(QWidget *cadastrarmarca)
    {
        cadastrarmarca->setWindowTitle(QCoreApplication::translate("cadastrarmarca", "Form", nullptr));
        label->setText(QCoreApplication::translate("cadastrarmarca", "Cadastrar Marca", nullptr));
        pushButton_2->setText(QCoreApplication::translate("cadastrarmarca", "Cadastrar Marca", nullptr));
        pushButton->setText(QCoreApplication::translate("cadastrarmarca", "Voltar", nullptr));
        label_2->setText(QCoreApplication::translate("cadastrarmarca", "Nome", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadastrarmarca: public Ui_cadastrarmarca {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRARMARCA_H
