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

int main()
{
    int *PI1 = new int;
    int *PI2 = new int(-6);

    if(!PI1) 
    {
        cout << "Erro ao alocar " << endl;
        return 0;
    }

    *PI1 = 15;
    cout << "Valor 1: " << *PI1 << " no endereco " << PI1 << endl;
    cout << "Valor 2: " << *PI2 << " no endereco " << PI2 << endl;
    delete PI1;
    delete PI2;

    Ponto *PP1 = new Ponto;
    Ponto *PP2 = new Ponto(3, 2);
    PP1->X = 10;
    PP1->Y = 20;

    PP1->Mostrar("PP1");
    PP2->Mostrar("PP2");

    cout << "Valor 1 PP1 no endereco " << PP1 << endl;
    cout << "Valor 2 PP2 no endereco " << PP2 << endl;
    delete PP1;
    delete PP2;


    cout << "\n\n\n" << endl;

    int *V1 = new int[5];
    for(int i = 0; i < 5; i++)
        V1[i] = (i+1) * 10;

    for(int i = 0; i < 5; i++)
        cout << "V1[" << i << "] = " << V1[i] << endl;

    delete[] V1;


    Ponto *VP = new Ponto[3];
    for(int i = 0; i < 3; i++)
    {
        VP[i].X = i * 2;
        VP[i].Y = i * 4;
    }

    for(int i = 0; i < 3; i++)
        VP[i].Mostrar("VP[i]");

    delete[] VP;

    return 0;
}