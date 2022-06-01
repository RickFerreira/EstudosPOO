#include "Triangulo.h"

#include <iostream>
#include <string>

using namespace std;

Triangulo::Triangulo(string novoN, int novaQ, int novoT, double novaBase, double novaAltura) : FiguraGeometrica(novoN, novaQ, novoT)
{
    this -> base = novaBase;
    this -> altura = novaAltura;
}

double Triangulo::calcularArea()
{
    double area = (base * altura) / 2;
    return area;
}