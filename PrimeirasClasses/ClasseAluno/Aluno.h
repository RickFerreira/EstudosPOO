//aqui fica o cabeçalho, onde vai ficar todos os métodos e atributos declarados
#include <iostream>
using namespace std;

class Aluno{
//normalmente utiliza-se private para os atributos
  private:
    string nome;
    double cre;
//normalmente os metodos podem ser publicos
  public:
//chamando o construtor
    Aluno();
    void setNome(string newName);
    string getNome();
    void setCre(double cre);
    double getCre();
};//não esquecer de colocar ; nesse .h