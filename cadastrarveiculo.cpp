#include <QWidget>
#include <QMessageBox>
#include "cadastrarveiculo.h"
#include "ui_cadastrarveiculo.h"
#include "mainwindow.h"
#include "veiculorepository.h"

cadastrarveiculo::cadastrarveiculo(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::cadastrarveiculo)
{
    ui->setupUi(this);
}

cadastrarveiculo::~cadastrarveiculo()
{
    delete ui;
}

void cadastrarveiculo::on_pushButton_clicked()
{
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

void cadastrarveiculo::limparCamposDaTela() {
    ui->editPlaca->clear();
    ui->editModelo->clear();
    ui->editValor->clear();
    ui->editAno->clear();
}

void cadastrarveiculo::criarVeiculo(const std::string& placa, const std::string& modelo, int ano, float valor, QWidget *parentWidget) {
    Veiculo novoVeiculo(placa, modelo, ano, valor);

   VeiculoRepository::getInstance().adicionarVeiculo(novoVeiculo);
    QMessageBox::information(parentWidget, "Veículo Criado", "O veículo foi criado com sucesso.");
}

void cadastrarveiculo::pegarValores() {
    std::string placa = obterPlacaDaInterface();
    std::string modelo = obterModeloDaInterface();
    int ano = obterAnoDaInterface();
    float valor = obterValorDaInterface();

    criarVeiculo(placa, modelo, ano, valor, this);

    limparCamposDaTela();
}

std::string cadastrarveiculo::obterPlacaDaInterface() {

    QLineEdit *editPlaca = ui -> editPlaca;

    QString textoPlaca = editPlaca->text();

    return textoPlaca.toStdString();
}

std::string cadastrarveiculo::obterModeloDaInterface() {

    QLineEdit *editModelo = ui -> editModelo;

    QString textoModelo = editModelo->text();

    return textoModelo.toStdString();
}

int cadastrarveiculo::obterAnoDaInterface() {

    //* indica que editAno é um ponteiro apontando para um objeto do tipo QLineEdit
    //ui -> editAno é um ponteiro para o widget editAno da tela, e estou atribuindo esse ponteiro a um ponteiro local chamado *editAno
    QDateEdit *editAno = ui -> editAno;

    QString textoAno = editAno->text();

    return textoAno.toInt();
}

float cadastrarveiculo::obterValorDaInterface() {

    QLineEdit *editValor = ui -> editValor;

    QString textoValor = editValor->text();

    return textoValor.toFloat();
}


void cadastrarveiculo::on_pushButton_2_clicked()
{
    pegarValores();
}

