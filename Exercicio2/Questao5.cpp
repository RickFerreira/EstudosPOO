#include <iostream>
using namespace std;
////////////////////função//////////////////////
void filtra_menores(int tamanhoo, int chavee[tamanhoo], int valorr[tamanhoo]){
  int valor, cont=0, contChaves=0, contValores=0, cont2=0, cont3=0, matriz[tamanhoo][2], matriz2[tamanhoo-cont][2], matriz3[tamanhoo-cont][2];
  //criando a matriz de chaves e valores
  for(int i=0; i<tamanhoo; i++){
    for(int j=0; j<2; j++){
      if(j == 0){
        matriz[i][j] = chavee[i];
      }
      else{
        matriz[i][j] = valorr[i];
      }
    }
  }//recebendo o valor para filtrar
  std::cout << "\nDigite agora o valor que você quer usar como parâmetro para filtrar os menores\nDigite: ";
  std::cin >> valor;
  for(int i=0; i<tamanhoo; i++){
    //verificando se as chaves são menores que os valor
    if(matriz[i][0] < valor){
      cont++;
    }
    //criando matriz com valores que vão ficar
    for(int j=0; j<2; j++){
      if(matriz[i][0] >= valor){
        if(j==0){
          matriz2[cont2][0] = matriz[i][0];  
        }
        else{
          matriz2[cont2][1] = matriz[i][1];
          cont2++;
        }
      }
    }
    //criando matriz com valores excluidos
    for(int k=0; k<2; k++){
      if(matriz[i][0] < valor){
        if(k==0){
          matriz3[cont3][0] = matriz[i][0];  
        }
        else{
          matriz3[cont3][1] = matriz[i][1];
          cont3++;
        }
      }
    }
  }
  //imprimindo a lista completa
  std::cout << "\nSegue então como ficou a lista completa:\nlista_bidimensional{";
  for(int i=0; i<tamanhoo; i++){
    for(int j=0; j<2; j++){
      if(j == 0){
        std::cout <<"{"<< matriz[i][j] << ",";
      }
      else{
        if(i == tamanhoo-1){
          std::cout << matriz[i][j] << "}}";
        }
        else{
          std::cout << matriz[i][j] << "}, ";
        }
      }
    }
  }
  //imprimindo o assert que mostra quantos foram eliminados
  std::cout << "\n\nSegue então o valor usado e quantos itens foram eliminadas a partir dele:\nassert filtra_menores(lista_bidimensional, " << valor << ") == " << cont;
  //imprimindo a lista de itens que sobrou
  std::cout << "\n\nSegue então a lista com os itens que restaram:\nassert lista_bidimensional == {";
  for(int i=0; i<cont2; i++){
    for(int j=0; j<2; j++){
      if(j==0){
        std::cout << matriz2[i][0] << ":";
      }
      else{
        if(i == cont2-1){
          std::cout << matriz2[i][1];
        }
        else{
          std::cout << matriz2[i][1] << ", ";
        }
      }
    }
  }std::cout << "}";
    //imprimindo a lista de itens excluidos
  std::cout << "\n\nSegue então a lista com os "<<cont<<" itens excluidos:\nlista_excluidos == {";
  for(int i=0; i<cont2; i++){
    for(int j=0; j<2; j++){
      if(j==0){
        std::cout << matriz3[i][0] << ":";
      }
      else{
        if(i == cont2-1){
          std::cout << matriz3[i][1];
        }
        else{
          std::cout << matriz3[i][1] << ", ";
        }
      }
    }
  }std::cout << "}";
}  
////////////////////Principal//////////////////////
int main(){ 
  int tamanho;
  //descricao
  std::cout << "Esse programa recebe uma lista bidimensional e um valor, então elimina da lista todas as entradas com chaves menores que valor.\n\n";
  //recebendo tamanho e os itens da lista
  std::cout << "Digite o tamanho que vai ter sua lista bidimensional\nDigite: ";
  std::cin >> tamanho;
  int chaves[tamanho], valores[tamanho];
  std::cout << "\nVocê vai começar digitando as "<<tamanho<< " chaves da lista\n";
  for(int i=0; i<tamanho; i++){
    std::cout << "Digite a "<< i+1 <<"ª chave: ";
    std::cin >> chaves[i];
  }
  std::cout << "\nAgora você pode digitar os "<<tamanho<< " valores da lista\n";
  for(int i=0; i<tamanho; i++){
    std::cout << "Digite o "<< i+1 <<"ª valor: ";
    std::cin >> valores[i];
  }  
  //chamando a função
  filtra_menores(tamanho, chaves, valores);
  return 0;
}