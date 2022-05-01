#include <iostream>
#include <cmath>
#include <cstdio>
#include <math.h>

using namespace std;

int main() {
  double a,b,c,delta,x1,x2,raiz;

  std::cout << "Equaçao do 2o grau da forma: ax² + bx + c.\n\n";

  std::cout << "Qual o valor de a?\nDigite: ";
  std::cin >> a;

  while(true){
    if(a==0){
      std::cout << "\n\nSe a=0, não é uma equação do segundo grau.\n\n";
      std::cout << "\n\nDigite outro valor para a\nDigite: ";
      std::cin >> a;
    }
    else{
      break;
    }
  }
  std::cout << "\n\nQual o valor de b?\nDigite: ";
  std::cin >> b;
  std::cout << "\n\nQual o valor de c?\nDigite: ";
  std::cin >> c;

  std::cout << "\n a = "<<a<<"\n b = "<<b<<"\n c = "<< c <<"\n\n";

  
  delta = b*b - (4*a*c);
  std::cout<<"Delta = "<<delta<<"\n";

  if (delta<0){
    std::cout << "\nDelta menor que 0. Raízes imaginárias. Tchau\n\n";
  }

  else if (delta==0){
    raiz = ((-b)+raiz) / (2*a);
    std::cout << "\n\nDelta=0 , raiz = "<< raiz <<"\n\n";

  }
  else{
    x1 = (-b + sqrt(delta) ) / (2*a);
    x2 = (-b - sqrt(delta) ) / (2*a);
    std::cout << "\nRaizes: x' = " << x1 <<" e x'' = " << x2 << "\n\n";
  }
return 0;
}
