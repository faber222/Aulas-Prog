#include <iostream>
#include <list>

using namespace std;

int second() {
  list<int> numeros;

  numeros.push_back(34);
  numeros.push_back(7);
  numeros.push_back(21);
  numeros.push_back(8);
  numeros.push_back(12);
  numeros.push_back(17);

  // ordena a lista
  numeros.sort();

  // mostra o conteúdo da lista
  for (auto& x : numeros) {
    cout << x << endl;
  }

  cout << endl;
}

// compara duas strings de acordo com seus comprimentos
bool comp_comprimento(const string& s1, const string& s2) {
  return s1.size() < s2.size();
}

int main() {
  list<string> l;

  l.push_back("banana");
  l.push_back("caju");
  l.push_back("laranja");
  l.push_back("cajamanga");

  // ordena lista de string de acordo com comprimentos das string
  l.sort(comp_comprimento);

  // mostra conteúdo da lista na tela
  for (auto& w : l) {
    cout << w << endl;
  }
}