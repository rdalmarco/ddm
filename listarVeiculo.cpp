#include "listarVeiculo.h"
#include "ui_listarVeiculo.h"
#include "mainwindow.h"
#include "veiculo.h"
#include "veiculorepository.h"

secondwindow::secondwindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::secondwindow)
{
    ui->setupUi(this);
}

secondwindow::~secondwindow()
{
    delete ui;
}

void secondwindow::on_pushButton_clicked()
{
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

void secondwindow::exibirVeiculos() {
    const std::vector<Veiculo>& veiculos = VeiculoRepository::getInstance().getVeiculos();

    // Limpar qualquer conteúdo anterior
    ui->textBrowser->clear();
    ui->textBrowser->setAlignment(Qt::AlignCenter);



    // Exibir cada veículo na textBrowser
    for (const auto& veiculo : veiculos) {
        ui->textBrowser->append(QString::fromStdString(veiculo.getPlaca()));
        ui->textBrowser->append(QString::fromStdString(veiculo.getModelo()));
        ui->textBrowser->append(QString::number(veiculo.getAno()));
        ui->textBrowser->append(QString::number(veiculo.getValor()));
        ui->textBrowser->append("-----------------------------------------------");
    }
}


void secondwindow::on_pushButton_2_clicked()
{
    exibirVeiculos();
}

