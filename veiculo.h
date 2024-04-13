#ifndef VEICULO_H
#define VEICULO_H

#include <string>

class Veiculo {
private:
    std::string placa;
    std::string modelo;
    int ano;
    float valor;

public:
    // Construtor
    Veiculo(std::string _placa, std::string _modelo, int _ano, float _valor);

    // Métodos de acesso
    std::string getPlaca() const;
    std::string getModelo() const;
    int getAno() const;
    float getValor() const;

    // Métodos de modificação
    void setPlaca(std::string _placa);
    void setModelo(std::string _modelo);
    void setAno(int _ano);
    void setValor(float _valor);
};

#endif
