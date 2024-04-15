#ifndef LISTARVEICULO_H
#define LISTARVEICULO_H

#include <QWidget>

namespace Ui {
class secondwindow;
}

class secondwindow : public QWidget
{
    Q_OBJECT

public:
      explicit secondwindow(QWidget *parent = nullptr);
    ~secondwindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::secondwindow *ui;

    void exibirVeiculos();
};

#endif // LISTARVEICULO_H
