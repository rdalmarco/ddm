#include "veiculo.h"

// Construtor
Veiculo::Veiculo(std::string _placa, std::string _modelo, int _ano, float _valor)
    : placa(_placa), modelo(_modelo), ano(_ano), valor(_valor) {
    // Construtor
}

// Métodos de acesso
std::string Veiculo::getPlaca() const {
    return placa;
}

std::string Veiculo::getModelo() const {
    return modelo;
}

int Veiculo::getAno() const {
    return ano;
}

float Veiculo::getValor() const {
    return valor;
}

// Métodos de modificação
void Veiculo::setPlaca(std::string _placa) {
    placa = _placa;
}

void Veiculo::setModelo(std::string _modelo) {
    modelo = _modelo;
}

void Veiculo::setAno(int _ano) {
    ano = _ano;
}

void Veiculo::setValor(float _valor) {
    valor = _valor;
}
