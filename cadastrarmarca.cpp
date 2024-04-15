#include <QWidget>
#include <QMessageBox>
#include "cadastrarmarca.h"
#include "ui_cadastrarmarca.h"
#include "mainwindow.h"
#include "marcarepository.h"

cadastrarmarca::cadastrarmarca(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::cadastrarmarca)
{
    ui->setupUi(this);

    connect(ui->editNome, &QLineEdit::textChanged, this, &cadastrarmarca::atualizarEditNome);
}

cadastrarmarca::~cadastrarmarca()
{
    delete ui;
}

void cadastrarmarca::on_pushButton_clicked()
{
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

void cadastrarmarca::limparCamposDaTela() {
    ui->editNome->clear();
}

void cadastrarmarca::criarMarca(const std::string& nome, QWidget *parentWidget) {
    Marca novaMarca(nome);

    MarcaRepository::getInstance().adicionarMarca(novaMarca);
    QMessageBox::information(parentWidget, "Marca Criada", "A marca foi criada com sucesso.");
}

void cadastrarmarca::pegarValores() {
    std::string nome = obterNomeDaInterface();

    criarMarca(nome, this);

    limparCamposDaTela();
}

std::string cadastrarmarca::obterNomeDaInterface() {

    QLineEdit *editNome = ui -> editNome;

    QString textoNome = editNome->text();

    return textoNome.toStdString();
}


void cadastrarmarca::on_pushButton_2_clicked()
{
  pegarValores();
}

void cadastrarmarca::atualizarEditNome(const QString& texto) {
    // Define o texto no campo editNome
    ui->editNome->setText(texto);
}

