#include <iostream>
#include <list>

using namespace std;

class Fronteira
{
public:
    Fronteira(string nome){ this->nome = nome; }
    ~Fronteira(){}
    string nome;
    void Mostrar() {cout << this->nome << endl; }
};

class FronteiraTipo1 : public Fronteira
{
public:
    FronteiraTipo1(string nome):Fronteira(nome){}
    ~FronteiraTipo1(){}
};

class FronteiraTipo2 : public Fronteira
{
public:
    FronteiraTipo2(string nome):Fronteira(nome){}
    ~FronteiraTipo2(){}
};

class FronteiraTipo3 : public Fronteira
{
public:
    FronteiraTipo3(string nome):Fronteira(nome){}
    ~FronteiraTipo3(){}
};

class Veiculo
{
public:
    int id;
    Veiculo(int id)
    {
        this->id = id;
    }
    ~Veiculo(){}

    bool operator==(const Veiculo &V)
    {
        return (this->id == V.id);
    }
};

class Proprietario
{
public:
    Proprietario(/* args */){}
    ~Proprietario(){}
};
/* c( empresas 0 sub empresas*/
class Gestor
{
public:
    Gestor()
    {
        Lv = new list<Veiculo *>();
        Lp = new list<Proprietario *>();
    }
    ~Gestor(){}
    list<Veiculo *> *Lv;
    list<Proprietario *> *Lp;

    void Inserir(Veiculo *V)
    {
        bool existe = 0;
        /* Verifica se o veiculo ja existe */
        for(list<Veiculo *>::iterator it = Lv->begin(); it != Lv->end(); it++)
        {
            if(*(*it) == *V) {existe = 1; break;}
        }

        /* Se ja existir, n faz nada, se nao exsitir adiciona */
        if(existe)
            cout << "[Carro " << V->id << "]Esse carro ja foi inserido!" << endl;
        else Lv->push_back(V);

    }


    void RemoverMotociclos()
    {

    }

    Proprietario *DeterminarProprietarioComMaisVeiculos()
    {
        Proprietario *PMV = NULL;
        int qntAtual = 0, qntMaior = 0;
    
        /* Percorrer lista de proprietarios */
    }
};

int main()
{
    Gestor G;

    list<Fronteira *>ListaFronteiras;

    FronteiraTipo1 *FT1 = new FronteiraTipo1("Fronteira Tipo 1");
    FT1->Mostrar();

    FronteiraTipo2 *FT2 = new FronteiraTipo2("Fronteira Tipo 2");
    FT2->Mostrar();

    FronteiraTipo3 *FT3 = new FronteiraTipo3("Fronteira Tipo 3");
    FT3->Mostrar();

    ListaFronteiras.push_back(FT1);
    ListaFronteiras.push_back(FT2);
    ListaFronteiras.push_back(FT3);

    /* Criar Inserir(Veiculo) no gestor */
    G.Inserir(new Veiculo(1));
    G.Inserir(new Veiculo(1));
    G.Inserir(new Veiculo(3));
    G.Inserir(new Veiculo(2));
    G.Inserir(new Veiculo(3));
    G.Inserir(new Veiculo(5));
    G.Inserir(new Veiculo(6));



    return 0;
}