#include "veiculorepository.h"

VeiculoRepository& VeiculoRepository::getInstance() {
    static VeiculoRepository instance;
    return instance;
}

void VeiculoRepository::adicionarVeiculo(const Veiculo& veiculo) {
    m_listaDeVeiculos.push_back(veiculo);
}

void VeiculoRepository::removerVeiculo(const std::string& placa) {
    // Implemente a remoção de acordo com suas necessidades
}

const std::vector<Veiculo>& VeiculoRepository::getVeiculos() const {
    return m_listaDeVeiculos;
}
