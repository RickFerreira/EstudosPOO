#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;
//funcao para imprimir as listas
void imprimir(vector<int> vec)
{
  //percorrer o tamanho do vetor imprimindo cada valor separado por ";"
  for (auto i = 0; i < vec.size(); ++i) {
    std::cout << vec.at(i) << "; ";
  }
  //pular linha
  std::cout << endl;
}
//funcao para gerar uma lista aleatoria a partir de uma original
void embaralhar(vector<int> vec){
  //nessas tres linhas eu pego o vetor e reorganizo aleatoriamente a ordem dos itens, garantindo que não se repita o mesmo item
  std::random_device aleatorio;
  std::default_random_engine aleat(aleatorio());
  shuffle(vec.begin(), vec.end(), aleat);
  //imprimo então a lista aleatoria chamando a função imprimir 
  std::cout << "Lista aleatoria: ";
  imprimir(vec);
}
//codigo principal
int main() {
  //criando meu vetor original
  vector<int> lista_original(5);
  //pedindo para o usuario escrever a lista
  for(int i=0; i<5; i++){
      std::cout << "Digite um valor\n";
      std::cin >> lista_original[i];
  }
  //imprimindo a lista original
  std::cout << "Lista original: ";
  imprimir(lista_original);
  //chamando a função para embaralhar passando a lista original
  embaralhar(lista_original);
  return 0;
}