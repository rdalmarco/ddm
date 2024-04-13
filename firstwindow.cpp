#include <iostream>
#include "firstwindow.h"
#include "ui_firstwindow.h"
#include "mainwindow.h"
#include "veiculorepository.h"

firstwindow::firstwindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::firstwindow)
{
    ui->setupUi(this);
}

firstwindow::~firstwindow()
{
    delete ui;
}

void firstwindow::on_pushButton_clicked()
{
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

void firstwindow::criarVeiculo(const std::string& placa, const std::string& modelo, int ano, float valor) {
    Veiculo novoVeiculo(placa, modelo, ano, valor);

   VeiculoRepository::getInstance().adicionarVeiculo(novoVeiculo);
}

void firstwindow::pegarValores() {
    std::string placa = obterPlacaDaInterface();
    std::string modelo = obterModeloDaInterface();
    int ano = obterAnoDaInterface();
    float valor = obterValorDaInterface();

    criarVeiculo(placa, modelo, ano, valor);
}

std::string firstwindow::obterPlacaDaInterface() {
    return "ABC1234";
}

std::string firstwindow::obterModeloDaInterface() {
    return "Sedan";
}

int firstwindow::obterAnoDaInterface() {
    return 2022; //
}

float firstwindow::obterValorDaInterface() {
    return 35000.0; //
}


void firstwindow::on_pushButton_2_clicked()
{
    pegarValores();
}

