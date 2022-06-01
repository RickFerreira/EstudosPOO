#include "Circulo.h"

#include <iostream>
#include <string>

using namespace std;

Circulo::Circulo(string novoN, int novaQ, int novoT, double novoRaio) : FiguraGeometrica(novoN, novaQ, novoT)
{
    this -> raio = novoRaio;
}

double Circulo::calcularPerimetro()
{
    double perimetro = 2 * 3.14 * raio;
    return perimetro;
}

double Circulo::calcularArea()
{
    double area = 2 * 3.14 * (raio * raio);
    return area;
}