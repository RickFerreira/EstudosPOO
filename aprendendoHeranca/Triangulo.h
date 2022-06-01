#ifndef TRIANGULO_H_
#define TRIANGULO_H_

#include "FiguraGeometrica.h"

#include <iostream>
#include <string>

using namespace std;

class Triangulo : public FiguraGeometrica
{
    public:
    //atributo
        double base;
        double altura;
    
    //construtor
        Triangulo(string novoN, int novaQ, int novoT, double novoBase, double novaAltura);

    //metodo
        double calcularPerimetro();
        double calcularArea();
};

#endif