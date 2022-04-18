#include <cctype>
#include <fstream>
#include <iostream>
#include <queue>

using namespace std;

// push: enfileira um dado
// pop : desenfileira um dado(descarta - o)
// front: retorna o dado que está na frente da fila
// empty: retorna true se fila estiver vazia, e false caso contrário

int main(int argc, char* argv[]) {
  string leitura;
  queue<string> upper;
  queue<string> lower;
  ifstream arq(argv[1]);

  while (arq >> leitura) {
    if (isupper(leitura[0]) != 0) {
      upper.push(leitura);
    } else {
      lower.push(leitura);
    }
  }
  while (!upper.empty()) {
    cout << upper.front() << ' ';
    upper.pop();
  }
  cout << endl;

  while (!lower.empty()) {
    cout << lower.front() << ' ';
    lower.pop();
  }
}
