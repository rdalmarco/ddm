/********************************************************************************
** Form generated from reading UI file 'listarmarca.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTARMARCA_H
#define UI_LISTARMARCA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listarMarca
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QLabel *label;

    void setupUi(QWidget *listarMarca)
    {
        if (listarMarca->objectName().isEmpty())
            listarMarca->setObjectName("listarMarca");
        listarMarca->resize(360, 566);
        pushButton_2 = new QPushButton(listarMarca);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(100, 470, 151, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        pushButton_2->setFont(font);
        pushButton = new QPushButton(listarMarca);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 530, 71, 24));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        pushButton->setFont(font1);
        textBrowser = new QTextBrowser(listarMarca);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(20, 60, 321, 401));
        textBrowser->setFont(font);
        label = new QLabel(listarMarca);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 20, 181, 21));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        label->setFont(font2);
        label->setTextFormat(Qt::PlainText);

        retranslateUi(listarMarca);

        QMetaObject::connectSlotsByName(listarMarca);
    } // setupUi

    void retranslateUi(QWidget *listarMarca)
    {
        listarMarca->setWindowTitle(QCoreApplication::translate("listarMarca", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("listarMarca", "Listar", nullptr));
        pushButton->setText(QCoreApplication::translate("listarMarca", "Voltar", nullptr));
        label->setText(QCoreApplication::translate("listarMarca", "Listar Marcas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listarMarca: public Ui_listarMarca {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTARMARCA_H
