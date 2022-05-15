#include <iostream>
#include "Veiculo.h"
using namespace std;

int main() {

	Veiculo *veiculo1 = new Veiculo(); 
	Veiculo veiculo2 = Veiculo();
  
  double acelerar1;
  double acelerar2;
  double frear1;
  
  std::cout << "Digite a velocidade do primeiro veiculo: ";
  std::cin >> acelerar1;
  std::cout << "Digite a velocidade do segundo veiculo: ";
  std::cin >> acelerar2;
  std::cout << "Digite quanto o primeiro freiou: ";
  std::cin >> frear1;
  
	veiculo1 -> acelerar(acelerar1); 
	veiculo2.acelerar(acelerar2);
	veiculo1 -> frear(frear1);

	double v1 = veiculo1 -> obterVelocidade(); 
	std::cout << "Velocidade atual do primeiro: " << v1 << std::endl;
	delete veiculo1;
	
	double v2 = veiculo2.obterVelocidade(); 
	std::cout << "Velocidade atual do segundo: " << v2 << std::endl;

}