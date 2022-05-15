#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

using namespace std;

class Empregado {

    public:
        //atributos
        string nome;
        string sobrenome;
        double salario;

        double anual, anual2;
        double aumento, aumento2;

        //construtor
        Empregado(string pNome, string pSobrenome, double pSalario){
            nome = pNome;
            sobrenome = pSobrenome;
            salario = pSalario;
        }
        //métodos
        void setNome(string novoNome);
        string getNome();

        void setSobrenome(string novoSobrenome);
        string getSobrenome();

        void setSalario(double novoSalario);
        double getSalario();

        double calcularAnual(double salario);

        double calcularAumento(double salario);
};
#endif