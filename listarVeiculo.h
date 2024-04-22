#ifndef LISTARVEICULO_H
#define LISTARVEICULO_H

#include <QWidget>

namespace Ui {
class listarveiculo;
}

class listarveiculo : public QWidget
{
    Q_OBJECT

public:
      explicit listarveiculo(QWidget *parent = nullptr);
    ~listarveiculo();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::listarveiculo *ui;

    void exibirVeiculos();
};

#endif // LISTARVEICULO_H
