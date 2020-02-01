#include <iostream>
using namespace std;

class Pessoa
{ 
public:
    void M1(){ cout << "P"; }
};

class Cliente : public Pessoa
{ 
public:
    void M1() { cout << "C"; }
};
 
int main()
{
    // system("cls");

    Pessoa *P = new Pessoa();
    cout << "Pessoa *P = new Pessoa(): ";
    P->M1();

    cout << "\n\n";

    Pessoa *P1 = new Cliente();
    cout << "Pessoa *P1 = new Cliente(): ";
    P1->M1();

    cout << "\n\n";


    Cliente *C = new Cliente();
    cout << "Cliente *C = new Cliente(): ";
    C->M1();

    return 0;
}