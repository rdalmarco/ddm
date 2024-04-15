#include "veiculorepository.h"

VeiculoRepository& VeiculoRepository::getInstance() {
    static VeiculoRepository instance;
    return instance;
}

void VeiculoRepository::adicionarVeiculo(const Veiculo& veiculo) {
    m_listaDeVeiculos.push_back(veiculo);
}

void VeiculoRepository::removerVeiculo(const Veiculo& veiculo) {
    // Encontrar o iterador para o veículo na lista
    auto it = std::find(m_listaDeVeiculos.begin(), m_listaDeVeiculos.end(), veiculo);

    // Verificar se o veículo foi encontrado
    if (it != m_listaDeVeiculos.end()) {
        // Remover o veículo da lista
        m_listaDeVeiculos.erase(it);
    }

    //O Eraser recebe um iterator daquele objeto na lista, nao podendo receber diretamente o objeto
}

const std::vector<Veiculo>& VeiculoRepository::getVeiculos() const {
    return m_listaDeVeiculos;
}
