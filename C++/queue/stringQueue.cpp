//#include <characterSep.h>

#include <stdlib.h>

#include <iostream>
#include <queue>
#include <string>

using namespace std;

// push: enfileira um dado
// pop : desenfileira um dado(descarta - o)
// front: retorna o dado que está na frente da fila
// back: retorna o dado que está no fim da fila(último dado enfileirado)
// size: retorna o comprimento da fila(quantos dados estão armazenados)
// empty: retorna true se fila estiver vazia, e false caso contrário

void separa(const string& algo, char sep, queue<string>& q) {
  int x = 0;
  string memoria;

  while (x != string::npos) {
    int z = algo.find_first_not_of(sep, x);
    if (z == string::npos) break;
    x = algo.find(sep, z);
    memoria = algo.substr(z, x - z);
    q.push(memoria);
  }
  while (!q.empty()) {
    cout << q.front() << endl;
    q.pop();
  }
};

int main() {
  char separador = ' ';
  string palavraTeste = "faber e uma pessoa muito legal";
  queue<string> teste;

  separa(palavraTeste, separador, teste);
}