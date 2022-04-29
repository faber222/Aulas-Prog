#include <fstream>
#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
  ifstream arq(argv[1]);
  string palavra;
  list<string> lista, lista2;

  while (arq >> palavra) {
    lista.push_back(palavra);
  }
/*
  for (auto it = lista.begin(); it != lista.end(); it++) {
    for (auto t = it; t != lista.end(); t++) {
      if (*t == *it) {
        lista2.push_back(*t);
      }
    }
  }
  */

  while (!lista2.empty()) {
    cout << lista2.front() << endl;
    lista2.remove(lista2.front());
  }
}