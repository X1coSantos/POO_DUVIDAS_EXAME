#ifndef IDENT_H
#define IDENT_H

#include <iostream>
#include <string.h>

using namespace std;

class Ident
{
    char *Nome;
public:
    Ident(char *Nome);
    ~Ident(){ /*cout << "Destruir Ident"*/; free(this->Nome); }
    void Mostrar(string texto){ cout << "[" << texto << "] Nome: " << this->Nome << endl; }
    void Alterar(char *Nome){ strcpy(this->Nome, Nome); }
};

#endif