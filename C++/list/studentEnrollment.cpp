#include <fstream>
#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
  ifstream arq(argv[1]);
  ifstream arq2(argv[2]);
  list<string> lista, lista2, lista3;

  string nome, nome2;

  while (arq >> nome) {
    lista.push_back(nome);
    lista3.push_back(nome);
  }
  while (arq2 >> nome2) {
    lista2.push_back(nome2);
  }

  for (auto& it : lista) {
    for (auto& t : lista2) {
      if (t == it) {
        lista3.remove(it);
      }
    }
  }
  while (!lista3.empty()) {
    cout << lista3.front() << endl;
    lista3.pop_front();
  }
}