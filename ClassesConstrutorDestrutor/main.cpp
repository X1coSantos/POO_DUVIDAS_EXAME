#include <iostream>

using namespace std;

#include "Cliente.h"

// class TPonto
// {
//     int X, Y;

// public:
//     TPonto(int x, int y);   // Construtor
//     ~TPonto();  // Destrutor
//     void Mostrar();
// };

// TPonto::TPonto(int x, int y)
// {
//     cout << "<TPonto>" << "::" << __FUNCTION__ << endl;

//     this->X = x;
//     this->Y = y;

// }

// TPonto::~TPonto()
// {
//     cout << "\nDestruir Ponto" << endl;
// }

// void TPonto::Mostrar()
// {
//     cout << "\nPonto = (" << X << ", " << Y << ")" << endl;
// }

int main()
{
    system("cls");

    cout << "Classes - Construtor e destrutor" << endl;

    // TPonto P;
    // P.Mostrar();

    // TPonto Q(1,2);
    // Q.Mostrar();



    Cliente Clie[100];
    for(int i = 0; i < 10; i++)
        Clie[i] = Cliente();

    for(int i = 0; i < 10; i++)
        Clie[i].Mostrar();

    return 0;
}