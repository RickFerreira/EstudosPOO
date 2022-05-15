#include "Veiculo.h"

Veiculo::Veiculo() {
	// Falaremos depois
}

void Veiculo::acelerar(double aumVel){ 
	velocidade += aumVel;
}

void Veiculo::frear(double dimVel){ 
	velocidade -= dimVel;
}
double Veiculo::obterVelocidade(){ 
	return velocidade;
}
