//Arquivo Data.h
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Data {
  
  public:
    Data(int, int, int);
    int getDia();
    int getMes();
    int getAno();
    string toString();
  
  private:
    int dia;
    int mes;
    int ano;
};
