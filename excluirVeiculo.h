#ifndef EXCLUIRVEICULO_H
#define EXCLUIRVEICULO_H

#include <QWidget>

namespace Ui {
class excluirveiculo;
}

class excluirveiculo : public QWidget
{
    Q_OBJECT

public:
    explicit excluirveiculo(QWidget *parent = nullptr);
    ~excluirveiculo();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::excluirveiculo *ui;

    void excluirVeiculo(QWidget *parentWidget);

    std::string obterPlacaDaInterface();
};

#endif // EXCLUIRVEICULO_H
