#ifndef LISTARMARCA_H
#define LISTARMARCA_H

#include <QWidget>

namespace Ui {
class listarMarca;
}

class listarMarca : public QWidget
{
    Q_OBJECT

public:
    explicit listarMarca(QWidget *parent = nullptr);
    ~listarMarca();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::listarMarca *ui;

     void exibirMarca();
};

#endif // LISTARMARCA_H
