#include "FiguraGeometrica.h"

#include <iostream>
#include <string>

using namespace std;

FiguraGeometrica::FiguraGeometrica(string novoNome, int novaQuantidadeLado, int novoTamanhoLados)
{
    this -> nome = novoNome;
    this -> quantidadeLados = novaQuantidadeLado;
    this -> tamanhoLado = novoTamanhoLados;
}

double FiguraGeometrica::calcularPerimetro()
{
    double perimetro = quantidadeLados * tamanhoLado;
    return perimetro;
}

double FiguraGeometrica::calcularArea()
{
    double area = tamanhoLado * tamanhoLado;
    return area;
}
