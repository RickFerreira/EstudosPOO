#include <iostream>
#include <cstdio>

using namespace  std;

int main() {
  int sorteio = rand() % 100, numero, tentativas = 0;
  
  std::cout << "Esse programa é um jogo que sorteia um numero de 1 a 100, vc terá que adivinhar o número sorteado";
  
  std::cout << "\n\nO número já foi sorteado, agora vc pode tentar acertar. Boa sorte!!";

  while(true){
    tentativas++;

    std::cout << "\n\nDigite o valor que você acha que foi sorteado: ";
    std::cin >> numero;

    if(numero == sorteio){
      std::cout << "\n\nParabéns, o número "<<sorteio<<" foi o sorteado, você acertou e utilizou "<<tentativas<< " tentativas.";
      break;
    }
    else{
      if(numero > sorteio){
        std::cout << "\n\nQue pena, não foi dessa vez, o número sorteado é menor que " << numero << ". Mas você pode tentar de novo..";
      }
      else{
        std::cout << "Que pena, não foi dessa vez, o número sorteado é maior que " << numero << ". Mas você pode tentar de novo..";
      }
    }
  }
  return 0;
}
