#include <prglib.h>

#include <iostream>

using namespace std;

using prglib::arvore;

/*
 *
 */
int main(int argc, char** argv) {
  arvore<int> a;

  a.adiciona(10);
  a.adiciona(5);
  a.adiciona(7);
  a.adiciona(2);
  a.adiciona(13);
  a.adiciona(11);
  a.adiciona(15);

  // testando se dado existe na árvore
  int y;

  cout << "Digite um número: ";
  cin >> y;
  try {
    auto& x = a.obtem(y);
    cout << y << " existe !" << endl;
  } catch (...) {
    cout << y << " NÃO existe !" << endl;
  }

  // enumerando os dados com iteração ... eles devem aparecer em ordem crescente
  // !
  for (auto& x : a) {
    cout << x << ", ";
  }
  cout << endl;

  return 0;
}