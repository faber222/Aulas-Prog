#include <prglib.h>

#include <iostream>
#include <list>
#include <string>

using namespace std;

using prglib::arvore;

int main() {
  // cria uma árvore vazia
  arvore<string> arv;

  // adiciona alguns dados ...
  arv.adiciona("coisa");
  arv.adiciona("treco");
  arv.adiciona("bagaça");
  arv.adiciona("algo");

  cout << "Antes de remover ..." << endl;
  for (auto& x : arv) {
    cout << "Dado armazenado: " << x << endl;
  }

  arv.remove("treco");

  cout << "Após remover ..." << endl;
  for (auto& x : arv) {
    cout << "Dado armazenado: " << x << endl;
  }

  // isto deve gerar uma exceção, pois "nada" não está na árvore !!
  arv.remove("nada");
}