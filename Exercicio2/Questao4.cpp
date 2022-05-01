#include <iostream>
#include <string>
#include <vector>
using namespace std;
/////////função//////////
void mapeia(vector<string> chave, vector<string> valor){
  int tamanho = chave.size();
  string matriz[tamanho][2];
  //imprimir as primeiras listas
  std::cout<<"\nassert mapeia({";
  for (auto i = 0; i < tamanho; ++i) {
    if(i == tamanho-1){
      cout << chave[i] << "";
    }else{
      cout << chave[i] << ",";
    }
  }std::cout<<"}, {";
  for (auto i = 0; i < tamanho; ++i) {
    if(i == tamanho-1){
      cout << valor[i] << "";
    }else{
      cout << valor[i] << ",";
    }
  }std::cout<<"}) == ";
  //construindo a matriz com os valores das listas
  for(int i=0; i<tamanho; i++){
    for(int j=0; j<2; j++){
      if(j == 0){
        matriz[i][j] = chave[i];
      }
      else{
        matriz[i][j] = valor[i];
      }
    }
  }
  //imprimindo a matriz formatada
  for(int i=0; i<tamanho; i++){
    for(int j=0; j<2; j++){
      if(j == 0){
        std::cout << "{" << matriz[i][j] << ",";
      }
      else{
        if(i == tamanho-1){
          std::cout << matriz[i][j] << "";
        }else{
          std::cout << matriz[i][j] << "}, ";
        }
      }
    }
  }std::cout<<"}}\n\n";
  //imprimir como forma de matriz
  std::cout<<"Formaria uma matriz assim:\n";
  for (int i=0; i<tamanho; i++) {
    for (int j=0; j<2; j++) {
      std::cout<<matriz[i][j]<<" ";
    }std::cout<<endl;
  }
}
///////////principal////////////
int main() {
  int posicao = 0;
  string entrada1, entrada2, separador = " ";
  vector<string> chaves;
  vector<string> valores;
  //descricao
  std::cout << "Juntando duas listas e fazendo uma bidimensional\n\n";
  //convertendo a string para um vetor
  std::cout << "Digite os valores da primeira lista(todos na mesma linha separados por espaço) \nDigite: ";
  std::getline(cin, entrada1);
  entrada1+=separador;
  while ((posicao = entrada1.find(separador)) != string::npos){ 
    chaves.push_back(entrada1.substr(0, posicao));
    entrada1.erase(0, posicao + separador.length());
  }
  //convertendo a string para um vetor
  std::cout << "\nDigite os valores da segunda lista(com a mesma quantidade da primeira lista) \nDigite: ";
  std::getline(cin, entrada2);
  entrada2+=separador;
  while ((posicao = entrada2.find(separador)) != string::npos){ 
    valores.push_back(entrada2.substr(0, posicao));
    entrada2.erase(0, posicao + separador.length());
  }
  //chamando a função
  mapeia(chaves, valores);
  return 0;
}
