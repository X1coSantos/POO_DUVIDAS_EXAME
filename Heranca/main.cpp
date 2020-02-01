#include <iostream>
using namespace std;


/* =========== CLASSE BASE ===========*/
class Base
{
    char C;
public:
    char Chave();
    void DefinirChave(char C);
};

/* =========== CLASSE DERIVADA ===========*/
class Derivada : public Base
{
    int V;
public:
    void DefinirValor(int V);
    void Mostrar();
};

/* =========== CLASSE BASE FUNCOES ===========*/
char Base::Chave(){ return this->C; }
void Base::DefinirChave(char C){ this->C = C; }

/* =========== CLASSE DERIVADA FUNCOES ===========*/
void Derivada::Mostrar(){ cout << "\nChave='" << Chave() << "' Valor='" << V << "'"; }
void Derivada::DefinirValor(int V){ this->V = V; }

/* =========== MAIN ===========*/
int main()
{
    Derivada D;
    D.DefinirChave('A');
    D.DefinirValor(1);
    D.Mostrar();

    return 0;
}