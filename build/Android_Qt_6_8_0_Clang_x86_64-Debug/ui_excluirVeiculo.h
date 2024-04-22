/********************************************************************************
** Form generated from reading UI file 'excluirVeiculo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXCLUIRVEICULO_H
#define UI_EXCLUIRVEICULO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_excluirveiculo
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *editPlaca;
    QLabel *label_2;

    void setupUi(QWidget *excluirveiculo)
    {
        if (excluirveiculo->objectName().isEmpty())
            excluirveiculo->setObjectName("excluirveiculo");
        excluirveiculo->resize(340, 566);
        label = new QLabel(excluirveiculo);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 10, 171, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);
        pushButton = new QPushButton(excluirveiculo);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 530, 71, 24));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(excluirveiculo);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(90, 280, 151, 41));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        pushButton_2->setFont(font2);
        editPlaca = new QLineEdit(excluirveiculo);
        editPlaca->setObjectName("editPlaca");
        editPlaca->setGeometry(QRect(90, 230, 151, 31));
        editPlaca->setInputMethodHints(Qt::ImhHiddenText);
        label_2 = new QLabel(excluirveiculo);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 200, 49, 16));
        label_2->setFont(font1);

        retranslateUi(excluirveiculo);

        QMetaObject::connectSlotsByName(excluirveiculo);
    } // setupUi

    void retranslateUi(QWidget *excluirveiculo)
    {
        excluirveiculo->setWindowTitle(QCoreApplication::translate("excluirveiculo", "Form", nullptr));
        label->setText(QCoreApplication::translate("excluirveiculo", "Excluir Veiculo", nullptr));
        pushButton->setText(QCoreApplication::translate("excluirveiculo", "Voltar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("excluirveiculo", "Excluir", nullptr));
        label_2->setText(QCoreApplication::translate("excluirveiculo", "Placa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class excluirveiculo: public Ui_excluirveiculo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCLUIRVEICULO_H
