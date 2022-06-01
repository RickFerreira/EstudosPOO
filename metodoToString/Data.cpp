//Arquivo Data.cpp
#include "Data.h"

using namespace std;

Data::Data(int dia, int mes, int ano) {
  this->dia = dia;
  this->mes = mes;
  this->ano = ano;
}
int Data::getDia() {
  return dia;
}
int Data::getMes() {
  return mes;
}
int Data::getAno() {
  return ano;
}
string Data::toString(){
  stringstream sstm;
  sstm << dia << '/' << mes << '/' << ano;
  return sstm.str();
}