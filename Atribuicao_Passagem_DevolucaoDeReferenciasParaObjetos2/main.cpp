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

class TLinha 
{
    Ponto P1, P2;
public:
    TLinha() 
    {
        cout << "\nConstruir LD\n";
        P1 = Ponto();
        P2 = Ponto();
    }
    TLinha(Ponto &p1, Ponto &p2);
    TLinha(Ponto p1, Ponto p2);
    ~TLinha(){ }
    void Mostrar() 
    {
        cout << "\nLinha";
        P1.Mostrar("");
        P2.Mostrar("");
    }
    Ponto & Ponto1() { return P1; } // Devolve uma referência para P1
    Ponto & Ponto2() { return P2; } // Devolve uma referência para P2
};

TLinha::TLinha(Ponto &p1, Ponto &p2) {
    cout << "\nConstruir Linha";
    P1 = p1;
    P2 = p2;
}

TLinha::TLinha(Ponto p1, Ponto p2) {
    cout << "\nConstruir Linha";
    P1 = p1;
    P2 = p2;
}

int main() {
    TLinha L(Ponto(2, 6), Ponto(7, 4));
    L.Ponto1().X = 5; // Equivalente a L.P1.X = 5;
    L.Ponto2() = Ponto(1, 1); // Equivalente a L.P2 = Ponto(1, 1)
    L.Mostrar(); // Se P1 e P2 fossem públicos

    return 0;
}