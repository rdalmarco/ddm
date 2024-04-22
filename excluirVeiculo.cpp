#include <QWidget>
#include <QMessageBox>
#include "excluirVeiculo.h"
#include "ui_excluirVeiculo.h"
#include "mainwindow.h"
#include "veiculo.h"
#include "veiculorepository.h"

excluirveiculo::excluirveiculo(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::excluirveiculo)
{
    ui->setupUi(this);
}

excluirveiculo::~excluirveiculo()
{
    delete ui;
}

void excluirveiculo::on_pushButton_clicked()
{
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

std::string excluirveiculo::obterPlacaDaInterface() {

    QLineEdit *editPlaca = ui -> editPlaca;

    QString textoPlaca = editPlaca->text();

    return textoPlaca.toStdString();
}


void excluirveiculo::excluirVeiculo(QWidget *parentWidget) {
    std::string placa = obterPlacaDaInterface();

    const std::vector<Veiculo>& veiculos = VeiculoRepository::getInstance().getVeiculos();

    for (const auto& veiculo : veiculos) {
        if (veiculo.getPlaca() == placa) {
            VeiculoRepository::getInstance().removerVeiculo(veiculo);

            QMessageBox::information(parentWidget, "Veículo Excluído", "O veículo foi excluído com sucesso.");

            break;
        }
    }
    QMessageBox::information(parentWidget, "Veículo Não Excluído", "Placa não encontrada.");
}


void excluirveiculo::on_pushButton_2_clicked()
{
    excluirVeiculo(this);
}

