#include <iostream>

using namespace std;


class Pessoa
{
public:
    Pessoa(/* args */);
    ~Pessoa();

    void M1(){cout << "C" << endl;}
};

Pessoa::Pessoa(/* args */)
{
}

Pessoa::~Pessoa()
{
}



class Cliente : public Pessoa
{
public:
    int idade;
    Cliente();
    Cliente(int idade);
    ~Cliente();
    void MostrarPessoa();
    void M1() { cout << "P" << endl;}
};

Cliente::Cliente()
{

}

Cliente::Cliente(int idade)
{
    this->idade = idade;
}

Cliente::~Cliente()
{
}

void Cliente::MostrarPessoa()
{
    cout << "Idade: " << this->idade << endl;
}


class Base
{
private:
    char Codigo;
    void MostrarPrivado();
protected:
    int Numero;
    void MostrarProtegido();
public:
    Base(/* args */);
    ~Base();
    void MostrarPublico();
    void Atribuir(char codigo, int numero);
};

Base::Base(/* args */)
{
}

Base::~Base()
{
}

void Base::Atribuir(char codigo, int numero)
{
    this->Codigo = codigo;
    this->Numero = numero;
}


class Derivada_UM : public Base
{
private:
    /* data */
public:
    Derivada_UM(/* args */);
    ~Derivada_UM();
    void Mostrar();
};

Derivada_UM::Derivada_UM(/* args */)
{
}

Derivada_UM::~Derivada_UM()
{
}

void Derivada_UM::Mostrar()
{
    this->MostrarPublico();
    this->MostrarProtegido();
}

void Derivada_UM::Mostrar()
{
    cout << "Tem acesso ao numero: " << this->Numero;
}

class Derivada_DOIS : protected Base
{
private:
    /* data */
public:
    Derivada_DOIS(/* args */);
    ~Derivada_DOIS();
};

Derivada_DOIS::Derivada_DOIS(/* args */)
{

}

Derivada_DOIS::~Derivada_DOIS()
{
}

class Derivada_TRES : private Base
{
private:
    /* data */
public:
    Derivada_TRES(/* args */);
    ~Derivada_TRES();
};

Derivada_TRES::Derivada_TRES(/* args */)
{

}

Derivada_TRES::~Derivada_TRES()
{
}

/* ================================================================== */

class TFigura
{
private:
    /* data */
public:
    TFigura(/* args */);
    ~TFigura();
};

TFigura::TFigura(/* args */)
{
}

TFigura::~TFigura()
{
}



/* ================================================================== */
int main()
{

    Cliente *Cli[10];
    for(int i = 0; i < 10; i++)
        Cli[i] = new Cliente(i*2);

    for(int i = 0; i < 10; i++)
        Cli[i]->MostrarPessoa();

    for(int i = 0; i < 10; i++)
        delete Cli[i];
    

    Cliente Clientes2[10];
    for(int i = 0; i < 10; i++)
        Clientes2[i] = Cliente(i*3);

    for(int i = 0; i < 10; i++)
        Clientes2[i].MostrarPessoa();

    /* Erro */
    // for(int i = 0; i < 10; i++)
    //     delete Clientes2[i];



    Cliente *X = new Cliente();
    X->M1();

    cout << "\n\n\n ----- Tipos de acesso a membros de uma classe ----" << endl;

    Base B;
    B.Atribuir('K', 10); /* membro publico, que trata dos membros protegidos/privados */
    /* Nenhuma instancia consegue aceder aos membros privados/protegidos da classe */

    /* Derivada com acesso publico, tem acesso aos membros publicos da principal */
    Derivada_UM D1;
    D1.Atribuir('a', 2);

    /**/
    Derivada_DOIS D2;
    //D2.Mostrar();

    return 0;
}