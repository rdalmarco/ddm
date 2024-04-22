/********************************************************************************
** Form generated from reading UI file 'cadastrarVeiculo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRARVEICULO_H
#define UI_CADASTRARVEICULO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cadastrarveiculo
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *editPlaca;
    QLineEdit *editModelo;
    QDateEdit *editAno;
    QLineEdit *editValor;

    void setupUi(QWidget *cadastrarveiculo)
    {
        if (cadastrarveiculo->objectName().isEmpty())
            cadastrarveiculo->setObjectName("cadastrarveiculo");
        cadastrarveiculo->resize(340, 566);
        label = new QLabel(cadastrarveiculo);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 10, 241, 31));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        pushButton = new QPushButton(cadastrarveiculo);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 520, 71, 24));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(cadastrarveiculo);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(90, 430, 161, 61));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        pushButton_2->setFont(font2);
        label_2 = new QLabel(cadastrarveiculo);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 100, 71, 16));
        label_2->setFont(font1);
        label_3 = new QLabel(cadastrarveiculo);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 180, 81, 16));
        label_3->setFont(font1);
        label_4 = new QLabel(cadastrarveiculo);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 260, 49, 16));
        label_4->setFont(font1);
        label_5 = new QLabel(cadastrarveiculo);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 350, 49, 16));
        label_5->setFont(font1);
        editPlaca = new QLineEdit(cadastrarveiculo);
        editPlaca->setObjectName("editPlaca");
        editPlaca->setGeometry(QRect(70, 130, 201, 31));
        QFont font3;
        font3.setPointSize(14);
        editPlaca->setFont(font3);
        editModelo = new QLineEdit(cadastrarveiculo);
        editModelo->setObjectName("editModelo");
        editModelo->setGeometry(QRect(70, 210, 201, 31));
        editModelo->setFont(font3);
        editAno = new QDateEdit(cadastrarveiculo);
        editAno->setObjectName("editAno");
        editAno->setGeometry(QRect(70, 290, 201, 31));
        editAno->setFont(font3);
        editValor = new QLineEdit(cadastrarveiculo);
        editValor->setObjectName("editValor");
        editValor->setGeometry(QRect(70, 380, 201, 31));
        editValor->setFont(font3);

        retranslateUi(cadastrarveiculo);

        QMetaObject::connectSlotsByName(cadastrarveiculo);
    } // setupUi

    void retranslateUi(QWidget *cadastrarveiculo)
    {
        cadastrarveiculo->setWindowTitle(QCoreApplication::translate("cadastrarveiculo", "Form", nullptr));
        label->setText(QCoreApplication::translate("cadastrarveiculo", "Cadastrar Veiculo", nullptr));
        pushButton->setText(QCoreApplication::translate("cadastrarveiculo", "Voltar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("cadastrarveiculo", "Criar", nullptr));
        label_2->setText(QCoreApplication::translate("cadastrarveiculo", "Placa", nullptr));
        label_3->setText(QCoreApplication::translate("cadastrarveiculo", "Modelo", nullptr));
        label_4->setText(QCoreApplication::translate("cadastrarveiculo", "Ano", nullptr));
        label_5->setText(QCoreApplication::translate("cadastrarveiculo", "Valor", nullptr));
        editAno->setDisplayFormat(QCoreApplication::translate("cadastrarveiculo", "yyyy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadastrarveiculo: public Ui_cadastrarveiculo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRARVEICULO_H
