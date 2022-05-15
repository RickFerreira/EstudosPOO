#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>
using namespace std;

class Veiculo {
	
	private:
		string modelo;
		int anoFabricacao;
		double velocidade;
	
	public:
		Veiculo();
		void acelerar(double aumVel);
		void frear(double dimVel); 
		double obterVelocidade();
};
#endif
