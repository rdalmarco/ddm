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

class Ui_thirdwindow
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *editPlaca;
    QLabel *label_2;

    void setupUi(QWidget *thirdwindow)
    {
        if (thirdwindow->objectName().isEmpty())
            thirdwindow->setObjectName("thirdwindow");
        thirdwindow->resize(340, 566);
        label = new QLabel(thirdwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 10, 171, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);
        pushButton = new QPushButton(thirdwindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 530, 71, 24));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(thirdwindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(90, 280, 151, 41));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        pushButton_2->setFont(font2);
        editPlaca = new QLineEdit(thirdwindow);
        editPlaca->setObjectName("editPlaca");
        editPlaca->setGeometry(QRect(90, 230, 151, 31));
        editPlaca->setInputMethodHints(Qt::ImhHiddenText);
        label_2 = new QLabel(thirdwindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 200, 49, 16));
        label_2->setFont(font1);

        retranslateUi(thirdwindow);

        QMetaObject::connectSlotsByName(thirdwindow);
    } // setupUi

    void retranslateUi(QWidget *thirdwindow)
    {
        thirdwindow->setWindowTitle(QCoreApplication::translate("thirdwindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("thirdwindow", "Excluir Veiculo", nullptr));
        pushButton->setText(QCoreApplication::translate("thirdwindow", "Voltar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("thirdwindow", "Excluir", nullptr));
        label_2->setText(QCoreApplication::translate("thirdwindow", "Placa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class thirdwindow: public Ui_thirdwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCLUIRVEICULO_H
