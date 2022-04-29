#include <fstream>
#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
  ifstream arq(argv[1]);
  list<int> lista, valores;
  float media = 0;
  int soma = 0;
  int n;
  int x = 0;

  while (arq >> n) {
    lista.push_back(n);
  }
  for (auto it = lista.begin(); it != lista.end(); it++) {
    soma = soma + *it;
    x++;
  } /*
   for (auto& i : lista) {
     soma = soma + i;
     x++;
   }*/
  media = soma / x;
  // cout << media << endl;

  for (auto t = lista.begin(); t != lista.end(); t++) {
    if (*t < ((media * 20) / 100)) {
      valores.push_back(*t);
    }
  }
  /*
  for (auto& x : lista) {
    if (x <= ((media * 20) / 100)) {
      valores.push_back(x);
    }
  }*/

  while (!valores.empty()) {
    cout << valores.front() << endl;
    valores.pop_front();
  }
}