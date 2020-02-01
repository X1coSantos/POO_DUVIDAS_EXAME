#include <iostream>

using namespace std;

inline float Triplo(float x)
{
    return (x * x * x);
}

class Simples
{
    int I;
public:
    Simples(int i) { I = i;}
    void Mostrar() {cout << "\nI= " << I; }
};


int main()
{
    float F = Triplo(3.0);
    cout << "F=" << F << endl;
    Simples(3).Mostrar();
}