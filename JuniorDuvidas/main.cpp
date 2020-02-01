#include <iostream>

using namespace std;

class Pessoa
{
private:
public:
    Pessoa(/* args */){}
    ~Pessoa(){}
    void M1(){ cout << "Pessoa" << endl; }
    int idade;
};

class Cliente : public Pessoa
{
private:
public:
    Cliente(/* args */){}
    ~Cliente(){}
    void M1() { cout << "Cliente" << endl;}
};


int main()
{
    Pessoa *P = new Pessoa();
    Pessoa *P1 = new Cliente();
    P1->M1();


    return 0;
}