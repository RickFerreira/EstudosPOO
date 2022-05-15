#include "Aluno.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
  Aluno one;
  one = Aluno();

  string nome;
  double cre;

  cout<<"Digite um nome: ";
  cin>>nome;
  cout<<"Digite o cre: ";
  cin>>cre;

  one.setNome(nome);
  one.setCre(cre);

  cout<<"Nome do aluno é "<<one.getNome()<<" e o CRE é "<<one.getCre();

  return 0;
}