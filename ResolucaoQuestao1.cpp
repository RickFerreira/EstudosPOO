#include <iostream>
#include <cmath>
#include <cstdio>

int main() {
  double numero;
  int opcao;
  
  std::cout << "Esse programa mostra a raiz quadrada de qualquer número.\n\n";
  
  while (true)
  {
    std::cout << "Qual número você deseja saber a raiz?\nDigite: ";
    std::cin >> numero;
    
    while(true){
      if (numero < 0){
          std::cout << "\n\nPor favor digite um valor positivo!!\nQual número você deseja saber a raiz?\nDigite: ";
        std::cin >> numero;
      }
      else{
        break;
      }
    }
    
    std::cout << "\nA raiz quadrada de "<<numero<<" é igual a "<< sqrt(numero)<<"\n\n";
    
    std::cout << "Deseja saber a raiz de mais algum número?\nSe sim digite 1 e se não digite 2: ";
    std::cin >> opcao;
    std::cout << "\n\n";
    if (opcao == 2){
      break;
    }
 
  }
return 0;
}