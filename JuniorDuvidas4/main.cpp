#include <iostream>
#include <list>

using namespace std;

class Pessoa
{
    int BI;
public:
    Pessoa(){}
    Pessoa(int BI)
    {
        this->BI = BI;
    }
    ~Pessoa(){}
    void Mostrar(){cout << "Pessoa com BI: " << this->BI << endl;}
};

int main()
{

    Pessoa P(1999);
    P.Mostrar();

    Pessoa P2[10];
    P2[0] = Pessoa(1);
    P2[1] = Pessoa(2);
    P2[2] = Pessoa(3);
    P2[3] = Pessoa(4);
    P2[4] = Pessoa(5);
    P2[5] = Pessoa(6);
    P2[6] = Pessoa(7);
    P2[7] = Pessoa(8);
    P2[8] = Pessoa(9);
    P2[9] = Pessoa(10);



    for(int i = 0; i < 10; i++)
        P2[i].Mostrar();

    // for(int i = 0; i < 10; i++)
    //     delete P2[i];        

    return 0;
}