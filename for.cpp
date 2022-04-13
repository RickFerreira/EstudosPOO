#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  std::cout << "Hello World!\n\n";
  //for para imprimir os numeros entre de 10 a -10, indicando os divisiveis por 3
  for (int i=9; i>-10; i--)
  {
    std::cout << "Numero atual:" << i << std::endl;
    if(i==0)
    {
      std::cout << i << " não se divide" << std::endl;
    }
    else if(i%3 == 0)
    {
      std::cout << i << " é divisivel por 3 e o resultado é = " << i/3 << std::endl;
    }
    else
    {
      std::cout << i << " não é divisivel por 3" <<std::endl;
    }
      std::cout << " " << std::endl;

  }
  return 0;  
}//setpresision