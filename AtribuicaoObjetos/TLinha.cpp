#include <iostream>

#include "TLinha.h"
using namespace std;

TLinha::TLinha()
{
    // this->P1 = Px;
    // this->P2 = Py;
}

TLinha::TLinha(TPonto P1, TPonto P2)
{
    this->P1 = P1;
    this->P2 = P2;
}

TPonto TLinha::PontoMedio()
{
    return TPonto((this->P2.GetX() + this->P1.GetX())/2, (this->P2.GetY() + this->P1.GetY())/2);
}

void TLinha::Mostrar()
{
    cout << "Linha" << endl;
    P1.Mostrar("P1");
    P2.Mostrar("P2");
}