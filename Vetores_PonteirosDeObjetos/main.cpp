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

class Simples
{
    int I;
public:
    Simples(){ this->I = 0; }
    Simples(int i) { this->I = i; }
    void Mostrar(){ cout << "I= " << this->I << endl; }
};

int main()
{
    system("cls");

    // Inicialização de vetores de classes com construtor com um argumento
    Simples VS1[2];
    Simples VS2[2] = {1, -2};
    Simples VS3[2] = {Simples(1), Simples(2)};
    Simples VS4[2][3] = {{1, 0, -3}, {4, 8, -7}};

    VS1[0] = 1;
    VS1[1] = -2;
    cout << "\n\n\n\n";
    cout << "1 - ###" << endl;
    for(int i = 0; i < 2; i++)
    {
        VS1[i].Mostrar();
    }

    cout << "2 - ###" << endl;
    for(int a = 0; a < 2; a++)
    {
        VS2[a].Mostrar();
    }

    cout << "3 - ###" << endl;
    for(int b = 0; b < 2; b++)
    {
        VS3[b].Mostrar();
    }
    
    cout << "4 - ###" << endl;
    for(int c = 0; c < 2; c++)
    {
        for(int j = 0; j < 3; j++)
            VS4[c][j].Mostrar();
    }

    cout << "\n)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=)=\n" << endl;

    Ponto VP1[3];
    VP1[0] = Ponto(1, 2);
    VP1[1] = Ponto(-5, 3);
    VP1[2] = Ponto(4, -2);

    Ponto VP3[3] = { Ponto(1, 2), Ponto(-5, 3), Ponto(4, -2) };
    Ponto VP4[3][2] = { { Ponto(-1, 2), Ponto(-5, 1) },
                        { Ponto(4, -2), Ponto(1, -3) },
                        { Ponto(-2, 6), Ponto(3, -3) } };
    
    Ponto *PP3 = VP3;

    for (int i = 0; i < 3; i++) {
        VP1[i].Mostrar("VP1[i]");
        PP3->Mostrar("PP3");
        PP3++;
        for (int j = 0; j < 2; j++) VP4[i][j].Mostrar("VP4");
}



    return 0;
}