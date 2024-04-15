#include "marcarepository.h"

MarcaRepository& MarcaRepository::getInstance() {
    static MarcaRepository instance;
    return instance;
}

void MarcaRepository::adicionarMarca(const Marca& marca) {
    m_listaDeMarcas.push_back(marca);
}


const std::vector<Marca>& MarcaRepository::getMarcas() const {
    return m_listaDeMarcas;
}
