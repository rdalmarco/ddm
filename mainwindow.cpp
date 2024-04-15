#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cadastrarVeiculo.h"
#include "listarVeiculo.h"
#include "excluirVeiculo.h"
#include "cadastrarmarca.h"
#include "listarmarca.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_1_clicked()
{
    firstwindow *firstWindow = new firstwindow();
    firstWindow->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    secondwindow *secondWindow = new secondwindow();
    secondWindow->show();
}


void MainWindow::on_pushButton_3_clicked()
{
    thirdwindow *thirdWindow = new thirdwindow();
    thirdWindow->show();
}



void MainWindow::on_pushButton_4_clicked()
{
    cadastrarmarca *cadastrarMarca = new cadastrarmarca();
    cadastrarMarca->show();
}


void MainWindow::on_pushButton_5_clicked()
{
    listarMarca *listarmarca = new listarMarca();
    listarmarca->show();
}

