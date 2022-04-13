//Primeiras praticas de c++
//sepre utilizar esse include
#include <iostream>
//Para poder usar as mesmas coisas de c
#include <cstdio>
//Para usar o std
using namespace std;

int main() {
  
  std::cout << "Hello World!" << std::endl;
  //declara variável do tipo char
  char nome[80];
  string resposta;
  int numero = 10;

  //cout para mostrar ao usuario
  //cin para receber o que o usuario passar  
  std::cout << "Qual o seu nome?" << std::endl;
  std::cin >> nome;
  std::cout << "Olá " << nome << ", tudo bem?" << std::endl;
  std::cin >> resposta;
  //utilizar if e else
  if(resposta == "sim")
  {
    std::cout << "Que bom então" << std::endl;
  }
  else{
    std::cout << "Melhoras então" << std::endl;
  }
  
  //nunca esqueça do return
  return 0;
}