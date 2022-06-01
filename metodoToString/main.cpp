#include <iostream>
#include "Data.h"

using namespace std;

int main() {
  Data tmp(15,6,2012);
    cout << tmp.getDia() << "/" << tmp.getMes() << "/" << tmp.getAno() << endl;
    cout << tmp.toString();
  return 0;
}