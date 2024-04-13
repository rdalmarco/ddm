#include "secondwindow.h"
#include "ui_secondwindow.h"
#include "mainwindow.h"

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

