#include <iostream>

#include "TPonto.h"
#include "TLinha.h"
#include "Ident.h"

using namespace std;

int main()
{
    system("cls");
    /* Duas maneiras de inicializar uma classe */
    /*TPonto P1(4, -1);
    TPonto P2 = TPonto(2, 3);

    P2.Mostrar("P2 antes");
    P2 = P1;
    P2.Mostrar("P2 Depois");


    Ident I1("abc");
    Ident I2("xpto");

    I1.Mostrar("I1");
    I2.Mostrar("I2");

    I2 = I1;
    I2.Mostrar("I2 Depois");
    I1.Mostrar("I1 Depois");

    I2.Alterar("a");

    I2.Mostrar("I2 2x Depois");
    I1.Mostrar("I1 2x Depois");*/


    TPonto P(3, 5);
    TLinha L(TPonto(-2, 2), P);
    L.Mostrar();
    L.PontoMedio().Mostrar("Ponto Medio:");

    return 0;
}