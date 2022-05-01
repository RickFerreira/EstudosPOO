#include <iostream>
#include <cstdio>

using namespace std;

int main(){
  double valor, positivos = 0, negativos = 0;
  int contPositivos = 0, contNegativos = 0, contZeros = 0;
  double lista[5];

  std::cout << "Ler 5 valores e mostrar a média dos números positivos e a média dos números negativos.";
  
  for(int i = 0; i<5; i++){
    std::cout << "\n\nDigite um valor: ";
    std::cin >> valor;
    lista[i] = valor;

    if(valor>0){
      positivos+=valor;
      contPositivos++;
    }
    else if(valor==0){
      contZeros++;
    }
    else{
      negativos+=valor;
      contNegativos++;
    }

  }
  std::cout <<"\n\nEsses são os valores que vc digitou: \n";
  for(int j = 0; j<5; j++){
    std::cout <<"    "<<lista[j];
  }
  
  std::cout <<"\n\nA média dos postivos é igual a: "<<(positivos/contPositivos)<<"\n\n";
  std::cout <<"A média dos negativos é igual a: "<<(negativos/contNegativos)<<"\n\n";
  std::cout <<"Existe "<<contZeros<<" numero(s) zero(s)\n\n";
}
