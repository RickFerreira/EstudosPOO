#include <iostream>
#include <string>
#include <vector>
using namespace std;
////////função para ver se a matriz é quadrada//////////
void analisarQuadrado(vector<string> listaa){
  float verdadeiroo = 0, contt = 0, tamanhoo = 0;
  string entrada, separador = " ";
  //verifica o tamanho da lista 
  tamanhoo = listaa.size();
  //analisa se de acordo com o tamanho formaria uma matriz quadrada ou não
  while(contt<=tamanhoo){
    contt++;
    if ((tamanhoo/contt)==contt){
      std::cout<< "\nEh quadrado" << endl;
      std::cout<< "\nE formaria uma matriz assim: "<< endl;
      int k = 0;
      for(int x = 0; x < contt; x++){
          for(int y = 0; y < contt; y++){
              std::cout<< listaa[k++] <<" ";
          }
          std::cout<< endl;
      }
      break;
    }
    else{
      verdadeiroo++;
      if (verdadeiroo==tamanhoo){
        std::cout<< "\nNao eh quadrado" << endl;
        std::cout<< "\nItens da matriz = ";
        for (auto i = 0; i < tamanhoo; ++i) {
          std::cout << listaa.at(i) << "; ";
        }
        std::cout<< "\nNão seria possível uma matriz quadrada com o tamanho " << tamanhoo <<endl;
      }
    }
  }
}
////////////iniciando código//////////////
int main(){
    float posicao = 0;
    string entrada, separador = " ";
    vector<string> lista;
    //descrição
    std::cout << "Esse programa recebe indeterminados valores do usuario e verifica se com esses valores formaria uma matriz quadrada\n"<<endl;
    //recebendo os valores todos na mesma linha
    std::cout << "Digite os valores para a matriz(tudo em uma linha separados por espaço)"<<endl;
    std::getline(cin, entrada);
   //adicionar espaço no final
    entrada+=separador;
    //acha o primeiro " "(espaço) com o find e da um push na lista pegando o valor antes do espaço, até retornar um strig::npos(não achou espaço).
    while ((posicao = entrada.find(separador)) != string::npos){ 
      lista.push_back(entrada.substr(0, posicao));
        //apaga o item adicionado na lista e o espaço da string entrada, para da proxima vez verificar o proximo item
        entrada.erase(0, posicao + separador.length());
    }
  //chamando função
  analisarQuadrado(lista);
  return 0;
}
