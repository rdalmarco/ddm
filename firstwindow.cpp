#include "firstwindow.h"
#include "ui_firstwindow.h"
#include "mainwindow.h"

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

