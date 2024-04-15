#ifndef MARCAREPOSITORY_H
#define MARCAREPOSITORY_H

#include <vector>
#include "marca.h"

class MarcaRepository
{
public:
    static MarcaRepository& getInstance();

    void adicionarMarca(const Marca& marca);
    const std::vector<Marca>& getMarcas() const;

private:
    std::vector<Marca> m_listaDeMarcas;

    MarcaRepository() {}
    ~MarcaRepository() {}


    MarcaRepository(const MarcaRepository&) = delete;
    MarcaRepository& operator=(const MarcaRepository&) = delete;
};

#endif // MARCAREPOSITORY_H
