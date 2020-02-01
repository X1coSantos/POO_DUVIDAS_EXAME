#include <iostream>
#include <string>

#include "TPonto.h"

using namespace std;

TPonto::~TPonto()
{
    // cout << "\nDestruir Ponto" << endl;
}

TPonto::TPonto(double x, double y)
{
    // cout << "<TPonto>" << "::" << __FUNCTION__ << endl;
    this->X = x;
    this->Y = y;

}

void TPonto::Mostrar(string texto)
{
    cout << "[" << texto << "] Ponto = (" << X << ", " << Y << ")" << endl;
}
