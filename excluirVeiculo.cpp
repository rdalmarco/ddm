#include <QWidget>
#include <QMessageBox>
#include "excluirVeiculo.h"
#include "ui_excluirVeiculo.h"
#include "mainwindow.h"
#include "veiculo.h"
#include "veiculorepository.h"

thirdwindow::thirdwindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::thirdwindow)
{
    ui->setupUi(this);
}

thirdwindow::~thirdwindow()
{
    delete ui;
}

void thirdwindow::on_pushButton_clicked()
{
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

std::string thirdwindow::obterPlacaDaInterface() {

    QLineEdit *editPlaca = ui -> editPlaca;

    QString textoPlaca = editPlaca->text();

    return textoPlaca.toStdString();
}


void thirdwindow::excluirVeiculo(QWidget *parentWidget) {
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


void thirdwindow::on_pushButton_2_clicked()
{
    excluirVeiculo(this);
}

