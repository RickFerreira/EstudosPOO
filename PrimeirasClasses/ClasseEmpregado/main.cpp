#include <iostream>
#include <string>
#include "Empregado.h"

using namespace std;

int main() {
    string nome;
    string sobrenome;
    double salario;

    Empregado primeiroEmpregado = Empregado(nome, sobrenome, salario);
    Empregado segundoEmpregado = Empregado(nome, sobrenome, salario);
    
    cout << "\nDigite o nome do primeiro empregado: ";
    cin >> nome;
    primeiroEmpregado.setNome(nome);

    cout << "Digite o sobrenome dele: ";
    cin >> sobrenome;
    primeiroEmpregado.setSobrenome(sobrenome);
  
    cout << "Digite o salario dele: ";
    cin >> salario;
    primeiroEmpregado.setSalario(salario);

    cout << "\nDigite o nome do segundo empregado: ";
    cin >> nome;
    segundoEmpregado.setNome(nome);

    cout << "Digite o sobrenome dele: ";
    cin >> sobrenome;
    segundoEmpregado.setSobrenome(sobrenome);
  
    cout << "Digite o salario dele: ";
    cin >> salario;
    segundoEmpregado.setSalario(salario);
    
    double anual = primeiroEmpregado.calcularAnual(primeiroEmpregado.salario);
    primeiroEmpregado.anual = anual;
    double aumento = primeiroEmpregado.calcularAumento(primeiroEmpregado.salario);
    primeiroEmpregado.aumento = aumento;
  
    double anual2 = segundoEmpregado.calcularAnual(segundoEmpregado.salario);
    segundoEmpregado.anual = anual2;
    double aumento2 = segundoEmpregado.calcularAumento(segundoEmpregado.salario);
    segundoEmpregado.aumento = aumento2;  

    cout << "\n\n-----------Primeiro Empregado-----------\n\n";
    cout << "Nome: " << primeiroEmpregado.nome << endl;
    cout << "Sobrenome: " << primeiroEmpregado.sobrenome << endl;
    cout << "Salario anual de R$" << primeiroEmpregado.anual << endl;

    cout << "\n\n-----------Segundo Empregado------------\n\n";
    cout << "Nome: " << segundoEmpregado.nome << endl;
    cout << "Sobrenome: " << segundoEmpregado.sobrenome << endl;
    cout << "Salario anual de R$" << segundoEmpregado.anual << endl;


    cout << "\n\n-----------Salarios ajustados-----------\n\n";
    primeiroEmpregado.setSalario(aumento);
    cout << "\nO empregado "<< primeiroEmpregado.nome << " " << primeiroEmpregado.sobrenome <<" agora tem um salario de R$" << primeiroEmpregado.calcularAnual(aumento) << endl;
    segundoEmpregado.setSalario(aumento2);
    cout << "\nO empregado "<< segundoEmpregado.nome << " " << segundoEmpregado.sobrenome <<" agora tem um salario de R$" << segundoEmpregado.calcularAnual(aumento2) << endl;
  
    return 0;
}