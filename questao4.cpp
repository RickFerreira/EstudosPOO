#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  int n, k, resultado = 0;

  std::cout << "Ler um valor n e um valor k e calcular n elevado a k.";

  while(true){
    
    std::cout << "\n\nCaso deseje finalizar o programa digite em k um numero negativo";

    std::cout << "\n\nDigite um valor para n: ";
    std::cin >> n;
    std::cout << "\nDigite um valor para k: ";
    std::cin >> k;

    if(k<0){
      std::cout << "\n\n k < 0, fim do programa, tchau.." << std::endl;
      break;
    }

    for(int i=0; i<k; i++){
      
      if(i==0){
        resultado+=n;
      }
      else{
        resultado*=n;
      }
    }
    
    if(k==0){
        resultado = 1;
    }
    
    std::cout <<"Resultado\n"<< n << "\n\n elevado a " << k << " é igual a " << resultado << "\n\n";
    resultado = 0;
  }  
  return 0;
}