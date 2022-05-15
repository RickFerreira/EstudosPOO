#include <iostream>
#include <string>
#include "Pessoa.h"

double Pessoa::calcularImc(double peso, double altura){
    double imc = peso / (altura * altura);
    return imc;
}

void Pessoa::setCPF(string novoCPF){
    this->cpf = novoCPF;
}

string Pessoa::getCPF(){
    return this->cpf;
}

