#ifndef CIRCULO_H_
#define CIRCULO_H_

#include "FiguraGeometrica.h"

#include <iostream>
#include <string>

using namespace std;

class Circulo : public FiguraGeometrica
{
    public:
    //atributo
        double raio;
    
    //construtor
        Circulo(string novoN, int novaQ, int novoT, double novoRaio);

    //metodo
        double calcularPerimetro();
        double calcularArea();
};

#endif