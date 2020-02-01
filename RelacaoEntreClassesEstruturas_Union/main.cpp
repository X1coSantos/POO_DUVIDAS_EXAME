#include <iostream>

using namespace std;

union Bits 
{
    double D;
    unsigned char V[sizeof(double)];
    Bits(double d);
    void Mostrar();
};

Bits::Bits(double d){ D = d; }

void Bits::Mostrar() 
{
    int i, j;
    for (j = sizeof(double) - 1; j >= 0; j--) {
        cout << "Bits do byte " << j << ": ";
        for (i = 128; i; i >>= 1)
        {
            cout << (i & V[j] ? "1" : "0");
        }
        cout << "\n";
    }
}

int main()
{
    Bits BD(12.34);
    BD.Mostrar();

    return 0;
}