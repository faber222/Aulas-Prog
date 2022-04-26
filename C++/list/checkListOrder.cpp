#include <time.h>

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <list>

using namespace std;

bool ordenada(const list<int>& umaLista){};

int main() {
  srand(time(NULL));
  list<int> lista;
  string arquivo;
  int linha;
  int vetor[100];
  int aux;

  for (int i = 0; i < 100; i++) {
    vetor[i] = rand() % 100;
  }
  for (int i = 0; i < 100; i++) {
    for (int j = i + 1; j < 100; j++) {
      if (vetor[i] > vetor[j]) {
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
      }
    }
  }

  cin >> arquivo;
  ofstream arq(arquivo);

  for (int i = 0; i < 100; i++) {
    arq << vetor[i] << endl;
  }

  ifstream arq2(arquivo);

  while (arq2 >> linha) {  // le linha por linha
    lista.push_back(linha);
  }

  for (auto it = lista.begin(); it != lista.end(); it++) {
    cout << "Numero: " << *it << endl;
  }
  cout << endl;
}