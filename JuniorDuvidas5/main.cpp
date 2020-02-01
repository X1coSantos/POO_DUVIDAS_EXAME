#include <iostream>

using namespace std;

class Pai
{
public:
    Pai(/* args */){}
    ~Pai(){}
    virtual void M(){ cout << "PAI" << endl; }
};

class Filho : public Pai
{
public:
    Filho(/* args */){}
    ~Filho(){}
    void M(){ cout << "FILHO" << endl; }
};



int main()
{
    cout << "(Com Virtual) Pai *P = new Pai().....: ";
    Pai *P = new Pai();
    P->M();

    cout << "(Com Virtual) Filho *F = new Filho().: ";
    Filho *F = new Filho();
    F->M();

    cout << "(Com Virtual) Pai *F = new Filho()...: ";
    Pai *PF = new Filho();
    PF->M();

    return 0;
}