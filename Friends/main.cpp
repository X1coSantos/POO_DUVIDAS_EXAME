#include <iostream>
using namespace std;


class TLinha;

class TPonto 
{
    int X, Y;
public:
    TPonto() 
    {
        X = 0;
        Y = 0;
    }

    TPonto(int x, int y) 
    {
        X = x;
        Y = y;
    }
    
    ~TPonto(){ }

    void Mostrar() {
        cout << "\nPonto=(" << X << ", " << Y << ")";
    }

    TPonto Juntar(TLinha lin);
    friend int Iguais(TPonto p);
    friend TLinha Exemplo(TLinha lin, TPonto p);
    friend TLinha; // Necessário para TLinha::PontoMedio()
};


class TLinha 
{
    TPonto P1, P2;

public:
    TLinha()
    {
        P1 = TPonto();
        P2 = TPonto();
    }

    TLinha(TPonto p1, TPonto p2);

    ~TLinha(){ }

    void Mostrar() 
    {
        P1.Mostrar();
        P2.Mostrar();
    }

    TPonto PontoMedio() {
        return TPonto((P2.X - P1.X) / 2, (P2.Y - P1.Y) / 2);
    }
    friend TPonto TPonto::Juntar(TLinha lin);
    friend TLinha Exemplo(TLinha lin, TPonto p);
};


TPonto TPonto::Juntar(TLinha lin)
{
    return TPonto(lin.P1.X, Y); // Acede a P1 pois é friend de TLinha
}

TLinha::TLinha(TPonto p1, TPonto p2) 
{
    P1 = p1;
    P2 = p2;
}

int Iguais(TPonto p) 
{
    return (p.X == p.Y); // Acede a X e Y pois é friend de TPonto
}

TLinha Exemplo(TLinha lin, TPonto p) 
{ // Acede a P1 pois é friend de TLinha
    // Acede a X e Y pois é friend de TPonto
    return TLinha(lin.P1, TPonto(p.Y, p.X));
}

void main() 
{
    int X, Y;
    cin >> X >> Y;
    TPonto P(X, Y);
    TLinha L(TPonto(2, 6), P);
    L.PontoMedio().Mostrar();
    Exemplo(L, P).Mostrar();
    cout << (Iguais(P) ? "\nDiferentes" : "\nIguais");
}