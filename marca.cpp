#include "marca.h"

Marca::Marca(std::string _nome)
    : nome(_nome) {
}

std::string Marca::getNome() const {
    return nome;
}

void Marca::setNome(std::string _nome) {
    nome = _nome;
}


