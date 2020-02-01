#include <iostream>

using namespace std;

int main()
{
    system("cls");

    cout << "Overloading da funcao divisao" << endl;

    int Divisao(int i, int j);
    float Divisao(float i, int j);

    int a = 5, b = 2;
    float c = 5.0;

    cout << "Divisao I/I = " << a << "/" << b << " = " << Divisao(a, b) << endl;
    cout << "Divisao F/I = " << c << "/" << b << " = " << Divisao(c, b) << endl; 

    return 0;
}

int Divisao(int i, int j)
{
    return (i/j);
}

float Divisao(float i, int j)
{
    return (i/j);
}