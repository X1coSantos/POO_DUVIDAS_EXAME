#include <iostream>
#include <list>
using namespace std;

class Pessoa
{ 
public:
    string Nome;
    Pessoa(string nom){ Nome = nom; }
    virtual void Mostrar(){ cout << Nome << endl;}
};

class Aluno : public Pessoa
{ 
    int Ano_Nascimento;
public: 
    Aluno(string nom, int ano=2000): Pessoa(nom){ Ano_Nascimento = ano; }
    void Mostrar() { Pessoa::Mostrar(); cout << Ano_Nascimento ; }

private: 
    int GetAno() { return Ano_Nascimento; }
};


int main()
{
    // system("cls");
    list<Pessoa *>LP;
    LP.push_front(new Pessoa("Joao"));
    LP.push_front(new Pessoa("Xico"));
    LP.push_front(new Pessoa("Junior"));


    for(list<Pessoa *>::iterator it = LP.begin(); it != LP.end(); it++)
        (*it)->Mostrar();


    list<Pessoa *> *OutrasPessoas = new list<Pessoa *>();
    OutrasPessoas->push_back(new Pessoa("jonas")); 

    Pessoa *P10 = new Aluno("Pedro");
    P10->Mostrar();

    Pessoa *P11 = new Pessoa("Zezito");
    P11->Nome = "Joao";
    P11->Mostrar();

    return 0;
}