#include "Aluno.h"
//construtor
Aluno::Aluno() {
}
//implementação dos metodos
void Aluno::setNome(string newName) {
  nome = newName;
}
void Aluno::setCre(double newCre) {
  cre = newCre;
}
string Aluno::getNome() {
  return nome;  
}
double Aluno::getCre() {
  return cre;  
}
