#ifndef TLINHA_H
#define TLINHA_H

#include "TPonto.h"

class TLinha
{
    TPonto P1, P2;
public: 
    TLinha();
    TLinha(TPonto P1, TPonto P2);
    ~TLinha(){}
    TPonto PontoMedio();
    void Mostrar();
};

#endif