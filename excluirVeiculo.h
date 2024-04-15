#ifndef EXCLUIRVEICULO_H
#define EXCLUIRVEICULO_H

#include <QWidget>

namespace Ui {
class thirdwindow;
}

class thirdwindow : public QWidget
{
    Q_OBJECT

public:
    explicit thirdwindow(QWidget *parent = nullptr);
    ~thirdwindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::thirdwindow *ui;

    void excluirVeiculo(QWidget *parentWidget);

    std::string obterPlacaDaInterface();
};

#endif // EXCLUIRVEICULO_H
