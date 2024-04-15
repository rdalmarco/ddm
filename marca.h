#ifndef MARCA_H
#define MARCA_H

#include <string>

class Marca
{
private:
     std::string nome;
public:
    Marca(std::string nome);

    std::string getNome() const;

    void setNome(std::string _nome);
};

#endif // MARCA_H



