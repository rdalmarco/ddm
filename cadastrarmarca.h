#ifndef CADASTRARMARCA_H
#define CADASTRARMARCA_H

#include <QWidget>
#include "marca.h"

namespace Ui {
class cadastrarmarca;
}

class cadastrarmarca : public QWidget
{
    Q_OBJECT

public:
    explicit cadastrarmarca(QWidget *parent = nullptr);
    ~cadastrarmarca();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::cadastrarmarca *ui;
    void criarMarca(const std::string& nome, QWidget *parentWidget);
    void pegarValores();
    void limparCamposDaTela();
    void atualizarEditNome(const QString& texto);

     std::string obterNomeDaInterface();
};

#endif // CADASTRARMARCA_H
