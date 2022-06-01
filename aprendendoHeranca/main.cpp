#include "FiguraGeometrica.h"
#include "Circulo.h"
#include "Triangulo.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int condicao = 0, quantidadeDeLados, tamanho, altura;
    string nome;
    double raio;

    Triangulo triangulo = Triangulo(nome, quantidadeDeLados, tamanho, tamanho, altura);
    Circulo circulo = Circulo(nome, quantidadeDeLados, tamanho, raio);

    while (true)
    {
        cout << "Qual forma voce quer calcular:\n1- Triangulo.\n2- Circulo.\n3- Sair." << endl;
        cin >> condicao;
        if(condicao == 1)
        {
            nome = "Triangulo";
            quantidadeDeLados = 3;

            cout << "\nDigite o tamanho dos lados do triangulo equilatero: ";
            cin >> tamanho;

            cout << "\nDigite o tamanho da altura do triangulo: ";
            cin >> altura;

            Triangulo triangulo = Triangulo(nome, quantidadeDeLados, tamanho, tamanho, altura);
        }
        
        else if(condicao == 2)
        {
            nome = "Circulo";
            quantidadeDeLados = 0;
            tamanho = 0;

            cout << "\nDigite o tamanho do raio: ";
            cin >> raio;

            Circulo circulo = Circulo(nome, quantidadeDeLados, tamanho, raio);
        }
        
        else if(condicao == 3)
        {
            break;
        }

        else
        {
            cout << "Opcao invalida!" << endl;
        }
    }
    return 0;
}