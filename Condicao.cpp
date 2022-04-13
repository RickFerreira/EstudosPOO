// Ver condições de um número
#include <cstdio>
#include <iostream>

using namespace std;

int main() {

  int numero;
  string opcao;

  std::cout << "Qual o numero" << std::endl;
  std::cin >> numero;

  while (true) {

    if (numero % 2 == 0) {

      if (numero < 100) {
        std::cout << "Par e menor que 100" << std::endl;
      } else {
        std::cout << "Par e maior ou igual a 100" << std::endl;
      }
    }

    else if (numero % 2 != 0) {

      if (numero >= 100) {
        std::cout << "Impar e maior que 100" << std::endl;
      } else {
        std::cout << "Impar e menor que 100" << std::endl;
      }
    }

    std::cout << "Deseja ver outro numero (responda s ou n)" << std::endl;
    std::cin >> opcao;
    if (opcao == "s") {
      std::cout << "Qual o numero" << std::endl;
      std::cin >> numero;
    } else {
      break;
    }
  }

  return 0;
}