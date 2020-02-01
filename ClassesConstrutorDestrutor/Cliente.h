#ifndef CLIENTE_H
#define CLIENTE_H

#include "Pessoa.h"

class Cliente
{
    int idade;
public:
    static int counter;
    Cliente();
    ~Cliente();
    void Mostrar();
};

#endif