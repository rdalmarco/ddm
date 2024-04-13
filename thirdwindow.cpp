#include "thirdwindow.h"
#include "ui_thirdwindow.h"

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
