#include <fstream>
#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
  ifstream arq(argv[1]);
  list<int> lista;
  float media = 0;
  float porcentagem = 0;
  int soma = 0, x = 0, n;

  while (arq >> n) {
    lista.push_back(n);
  }

  for (auto& i : lista) {
    soma = soma + i;
    x++;
  }

  media = soma / x;
  porcentagem = 0.2 * media;
  media = media + porcentagem;

  for (auto z = lista.begin(); z != lista.end();) {
    if (*z >= media) {
      z = lista.erase(z);
    } else {
      z++;
    }
  }

  while (!lista.empty()) {
    cout << lista.front() << endl;
    lista.pop_front();
  }
}