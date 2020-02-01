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

Ponto PontoMedioValor(Ponto P1, Ponto P2)
{
    return Ponto((P2.X - P1.X) / 2, (P2.Y - P1.Y) / 2);
}

Ponto *PontoMedioPont(Ponto *P1, Ponto *P2)
{
    return new Ponto((P2->X - P1->X) / 2, (P2->Y - P1->Y) / 2);
}
// Passagem e devolução de referências para pontos
Ponto &PontoMedioRef(Ponto &P1, Ponto &P2)
{
    return * (new Ponto((P2.X - P1.X) / 2, (P2.Y - P1.Y) / 2));
}

int main()
{
    /* A passagem de variaveis por referencia evirta a copia efetuada na passagem por valor, inicação e devolução de variáveis */
    Ponto P1(2, 3), P2(8, 5);
    PontoMedioValor(P1, P2).Mostrar("");
    PontoMedioPont(&P1, &P2)->Mostrar("");
    PontoMedioRef(P1, P2).Mostrar("");

    return 0;
}