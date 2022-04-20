#include <stdlib.h>

#include <fstream>
#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char* argv[]) {
  string file = argv[1];
  string linha, prioridade;
  int x;
  queue<string> p[5];

  ifstream arq(file);

  while (getline(arq, linha)) {
    prioridade = linha[0];
    x = stoi(prioridade);
    for (int i = 1; i < 5; i++) {
      if (x == i) {
        p[i].push(linha);
      }
    }
  }
  for (int j = 1; j < 5; j++) {
    while (!p[j].empty()) {
      cout << p[j].front() << endl;
      p[j].pop();
    }
  }
}