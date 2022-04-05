#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
  string n1 = "123";
  string n2 = "abc";
  int x1, x2;

  try {
    // esta conversão é feita com sucesso
    x1 = stoi(n1);
    cout << "Primeira conversão: " << x1 << endl;
  } catch (...) {
    cout << "Erro de conversão: " << n1
         << " não é uma string numérica inteira !" << endl;
  }

  try {
    // esta conversão dispara uma exceção
    x2 = stoi(n2);
    cout << "Segunda conversão: " << x2 << endl;
  } catch (...) {
    cout << "Erro de conversão: " << n2
         << " não é uma string numérica inteira !" << endl;
  }
  // we can use the throw

  return 0;
}