#include <iostream>
#include <string>
#include "Empregado.h"

double Empregado::calcularAnual(double salario){
    double anual = salario*12;
    return anual;
}

double Empregado::calcularAumento(double salario){
    double aumento = (salario*0.1)+salario;
    return aumento;
}

void Empregado::setNome(string novoNome){
    this->nome = novoNome;
}

string Empregado::getNome(){
    return this->nome;
}

void Empregado::setSobrenome(string novoSobrenome){
    this->sobrenome = novoSobrenome;
}

string Empregado::getSobrenome(){
    return this->sobrenome;
}

void Empregado::setSalario(double novoSalario){
    this->salario = novoSalario;
}

double Empregado::getSalario(){
    return this->salario;
}
