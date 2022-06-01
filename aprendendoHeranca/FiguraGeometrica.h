#ifndef FIGURAGEOMETRICA_H_
#define FIGURAGEOMETRICA_H_

#include <iostream>
#include <string>

using namespace std;

class FiguraGeometrica
{
    public:
    //atributos
        string nome;
        int quantidadeLados;
        int tamanhoLado;

    //construtor
        FiguraGeometrica(string novoNome, int novaQuantidadeLados, int novoTamanhoLado);
        
    //metodos
        double calcularPerimetro();
        double calcularArea();
};

#endif