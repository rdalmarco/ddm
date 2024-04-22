#include "listarVeiculo.h"
#include "ui_listarVeiculo.h"
#include "mainwindow.h"
#include "veiculo.h"
#include "veiculorepository.h"

listarveiculo::listarveiculo(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::listarveiculo)
{
    ui->setupUi(this);
}

listarveiculo::~listarveiculo()
{
    delete ui;
}

void listarveiculo::on_pushButton_clicked()
{
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

void listarveiculo::exibirVeiculos() {
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


void listarveiculo::on_pushButton_2_clicked()
{
    exibirVeiculos();
}

