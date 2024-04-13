#ifndef FIRSTWINDOW_H
#define FIRSTWINDOW_H

#include <QWidget>
#include "veiculo.h"

namespace Ui {
class firstwindow;
}

class firstwindow : public QWidget
{
    Q_OBJECT

public:
    explicit firstwindow(QWidget *parent = nullptr);
    ~firstwindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::firstwindow *ui;
    void criarVeiculo(const std::string& placa, const std::string& modelo, int ano, float valor);
    void pegarValores();

    // Métodos para obter valores da interface
    std::string obterPlacaDaInterface();
    std::string obterModeloDaInterface();
    int obterAnoDaInterface();
    float obterValorDaInterface();
};

#endif // FIRSTWINDOW_H
