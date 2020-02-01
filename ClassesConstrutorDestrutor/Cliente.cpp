#include <iostream>

#include "Cliente.h"

using namespace std;


int Cliente::counter = 0; 

Cliente::Cliente()
{
    cout << this->counter << "<" << endl;
    this->idade = this->counter++;
}

Cliente::~Cliente()
{

}

void Cliente::Mostrar()
{
    cout << "Idade: " << this->idade << endl;
}