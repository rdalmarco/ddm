#include "thirdwindow.h"
#include "ui_thirdwindow.h"
#include "mainwindow.h"

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

