#include <iostream>
#include <list>

using namespace std;


class Empresa
{
public:
    list<Empresa *> SubEmpresas;
    Empresa(/* args */){}
    ~Empresa(){}
};


class Gestor
{
public:
    Gestor(/* args */);
    ~Gestor();
};

int main()
{

    Empresa *E = new Empresa();
    return 0;
}