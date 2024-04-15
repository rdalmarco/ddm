#include "listarmarca.h"
#include "ui_listarmarca.h"
#include "mainwindow.h"
#include "marca.h"
#include "marcarepository.h"

listarMarca::listarMarca(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::listarMarca)
{
    ui->setupUi(this);
}

listarMarca::~listarMarca()
{
    delete ui;
}

void listarMarca::on_pushButton_clicked()
{
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

void listarMarca::exibirMarca() {
    const std::vector<Marca>& marcas = MarcaRepository::getInstance().getMarcas();

    // Limpar qualquer conteúdo anterior
    ui->textBrowser->clear();
    ui->textBrowser->setAlignment(Qt::AlignCenter);



    // Exibir cada veículo na textBrowser
    for (const auto& marca : marcas) {
        ui->textBrowser->append(QString::fromStdString(marca.getNome()));
        ui->textBrowser->append("-----------------------------------------------");
    }
}


void listarMarca::on_pushButton_2_clicked()
{
    exibirMarca();
}

