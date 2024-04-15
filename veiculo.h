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
    Veiculo(std::string _placa, std::string _modelo, int _ano, float _valor);

    std::string getPlaca() const;
    std::string getModelo() const;
    int getAno() const;
    float getValor() const;

    void setPlaca(std::string _placa);
    void setModelo(std::string _modelo);
    void setAno(int _ano);
    void setValor(float _valor);

    // Operador de igualdade para comparar dois objetos Veiculo. É Como o EQUALS do Java, só que feito na mão.
    bool operator==(const Veiculo& other) const {
        // Comparar os atributos relevantes para determinar se os veículos são iguais
        return placa == other.placa; // Compara pela placa
    }
};

#endif
