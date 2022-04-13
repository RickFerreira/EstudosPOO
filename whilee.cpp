#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  std::cout << "Hello World!\n\n";
  //Ficar somando numeros que o usuario digitar até o numero ser zero
  int numero;
  int cont = 0;
  while (true) {
    std::cout << "Qual o numero" << std::endl;
    std::cin >> numero;  
    if (numero!=0) {
      cont+=numero;
      std::cout << "Soma = " <<cont<< std::endl; 
    } else {
      break;
    }
    
  }
  return 0;  
}