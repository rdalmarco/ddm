#ifndef VEICULOREPOSITORY_H
#define VEICULOREPOSITORY_H

#include <vector>
#include "veiculo.h"

class VeiculoRepository {
public:
    static VeiculoRepository& getInstance();

    void adicionarVeiculo(const Veiculo& veiculo);
    void removerVeiculo(const Veiculo& veiculo);
    const std::vector<Veiculo>& getVeiculos() const;

private:
    std::vector<Veiculo> m_listaDeVeiculos;

    VeiculoRepository() {}
    ~VeiculoRepository() {}

    // Evitar cópia e atribuição
    VeiculoRepository(const VeiculoRepository&) = delete;
    VeiculoRepository& operator=(const VeiculoRepository&) = delete;
};

#endif // VEICULOREPOSITORY_H
