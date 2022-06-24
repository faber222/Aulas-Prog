// function template
#include <iostream>

using namespace std;

template <typename T>
struct Vetor {
  int capacidade;  // quantos dados cabem neste vetor atualmente
  int itens;       // quantos dados estão armazenados neste vetor
  T* mem;          // área de memória para guardar os dados de tipo T
};

template <class T>
T GetMax(T a, T b) {
  T result;
  result = (a > b) ? a : b;
  return (result);
}

int main() {
  int i = 5, j = 6, k;
  long l = 10, m = 5, n;
  k = GetMax<int>(i, j);
  n = GetMax<long>(l, m);
  cout << k << endl;
  cout << n << endl;
  return 0;
}
/*
int second() {
  // Um vetor capaz de guardar números inteiros
  Vetor<int> v1;

  // um vetor capaz de guardar string
  Vetor<string> v2;

  // adiciona-se o número 23 no vetor de inteiros
  adiciona(v1, 23);

  // adiciona-se a string "uma coisa" no vetor de strings
  string algo = "uma coisa";
  adiciona(v2, algo);

  // outras declarações da função main ...
}*/
