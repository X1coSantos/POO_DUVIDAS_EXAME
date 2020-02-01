#ifndef TPONTO_H
#define TPONTO_H

#include <string>

class TPonto
{
    double X, Y;
public:
    TPonto():X(0), Y(0){};
    TPonto(double x, double y);   // Construtor
    ~TPonto();  // Destrutor
    void Mostrar(std::string texto);

    void SetX(double x){ this->X = x; }
    void SetY(double y){ this->Y = y; }
    double  GetX() { return this->X; }
    double  GetY() { return this->Y; }
};

#endif