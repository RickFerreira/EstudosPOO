#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

int main() {

    //executando
    std::cout << "Inicializando apenas as variáveis\n" << std::endl;
    string nome;
    int idade;
    double peso;
    double altura;
    string cpf;
    
    std::cout << "Digite seu nome: ";
    std::cin >> nome;

    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    std::cout << "Digite seu peso: ";
    std::cin >> peso;

    std::cout << "Digite sua altura: ";
    std::cin >> altura;

    std::cout << "Digite seu CPF: ";
    std::cin >> cpf;

    std::cout << "\nCriando o objeto da classe pessoa\n" << std::endl;

    //instanciando e inicializando um objeto da classe pessoa
    Pessoa pessoa1 = Pessoa(nome, idade, peso, altura);

    std::cout << "\nInicializando as variáveis que não foram passadas pelo construtor\n" << std::endl;
    
    //inicializando o atributo IMC que não foi passado pelo construtor
    double imc = pessoa1.calcularImc(pessoa1.peso, pessoa1.altura);
    pessoa1.imc = imc;

    //inicializando o atributo CPF que não foi passado pelo construtor e é privado
    pessoa1.setCPF(cpf);
    
    
    std::cout << "\nObjeto pessoa: nome = " << pessoa1.nome << std::endl;
    std::cout << "Objeto pessoa: idade = " << pessoa1.idade << std::endl;
    std::cout << "Objeto pessoa: peso = " << pessoa1.peso << std::endl;
    std::cout << "Objeto pessoa: altura = " << pessoa1.altura << std::endl;

    std::cout << "Objeto pessoa: IMC = " << pessoa1.imc << std::endl;
    std::cout << "Objeto pessoa: CPF = " << pessoa1.getCPF() << std::endl;

    std::cout << "\nAlterando o CPF\n" << std::endl;

    std::cout << "Digite seu novo CPF: ";
    std::cin >> cpf;
    pessoa1.setCPF(cpf);
    std::cout << "Objeto pessoa: CPF = " << pessoa1.getCPF() << std::endl;
    

    return 0;
    
}