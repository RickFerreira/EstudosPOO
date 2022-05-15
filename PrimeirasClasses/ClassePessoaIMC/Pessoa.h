#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

using namespace std;

class Pessoa {

    public:
        //atributos ou características
        string nome;
        int idade;
        double peso;
        double altura;
        double imc;

        //construtor
        Pessoa(string novoNome, int novaIdade, double novoPeso, double novaAltura){
            nome = novoNome;
            idade = novaIdade;
            peso = novoPeso;
            altura = novaAltura;
        }

        //métodos ou funções
        double calcularImc(double peso, double altura);
        void setCPF(string novoCPF);
        string getCPF();

    private:
        //atributos ou características
        string cpf;

};
#endif