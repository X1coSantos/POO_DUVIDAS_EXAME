#include <iostream>

using namespace std;

class Ponto
{
public:
    double X, Y;
    Ponto():X(0), Y(0){}
    Ponto(double x, double y)
    {
        this->X = x;
        this->Y = y;
    }

    ~Ponto(){}

    void Mostrar(string txt)
    {
        cout << "{" << txt << "} Ponto=(" << this->X << ", " << this->Y << ")" << endl;
    }
};

class Linha
{
public:
    /* Estes dois pontos, precisam de ser inicializados, caso contrario, coisas más acontecem xd */
    Ponto p1, p2;
    Linha(Ponto P1, Ponto P2)
    {
        this->p1 = P1;
        this->p2 = P2;
    }
    ~Linha(){}

    void Mostrar()
    {
        this->p1.Mostrar("p1 linha");
        this->p2.Mostrar("p2 linha");
    }
};

int main()
{
    system("cls");

    Ponto P = Ponto(1,3);
    P.Mostrar("P");

    Ponto K(5.1, 2.7);
    K.Mostrar("K");

    Linha L1 = Linha(P, K);
    L1.Mostrar();

    Ponto C, C1, C2;
    C.Mostrar("C");

    return 0;
}