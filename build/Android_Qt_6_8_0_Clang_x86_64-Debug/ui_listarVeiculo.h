/********************************************************************************
** Form generated from reading UI file 'listarVeiculo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTARVEICULO_H
#define UI_LISTARVEICULO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listarveiculo
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_2;

    void setupUi(QWidget *listarveiculo)
    {
        if (listarveiculo->objectName().isEmpty())
            listarveiculo->setObjectName("listarveiculo");
        listarveiculo->resize(340, 566);
        label = new QLabel(listarveiculo);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 10, 181, 21));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);
        pushButton = new QPushButton(listarveiculo);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 530, 71, 24));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        pushButton->setFont(font1);
        textBrowser = new QTextBrowser(listarveiculo);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(10, 50, 321, 401));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        textBrowser->setFont(font2);
        pushButton_2 = new QPushButton(listarveiculo);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(90, 470, 151, 41));
        pushButton_2->setFont(font2);

        retranslateUi(listarveiculo);

        QMetaObject::connectSlotsByName(listarveiculo);
    } // setupUi

    void retranslateUi(QWidget *listarveiculo)
    {
        listarveiculo->setWindowTitle(QCoreApplication::translate("listarveiculo", "Form", nullptr));
        label->setText(QCoreApplication::translate("listarveiculo", "Listar Veiculos", nullptr));
        pushButton->setText(QCoreApplication::translate("listarveiculo", "Voltar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("listarveiculo", "Listar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listarveiculo: public Ui_listarveiculo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTARVEICULO_H
