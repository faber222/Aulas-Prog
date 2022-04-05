#include <iostream>
#include <string>

using namespace std;

// cria um vetor de inteiros com tamanho "size" e preenche
// todas suas posições com "valor_inicial"
int* cria_vetor(int size, int valor_inicial) {
  if (size <= 0) return nullptr;

  // cria um vetor com o tamanho dado por "size"
  auto v = new int[size];

  // preenche o vetor com o valor inicial
  for (int i = 0; i < size; i++) v[i] = valor_inicial;
  return v;
}

int main() {
  int size;

  cout << "Qual o tamanho do vetor: ";
  cin >> size;

  // v é um ponteiro para int
  auto v = cria_vetor(size, 9999);

  cout << "Endereço do vetor: " << (void*)v << endl;
  cout << "Conteúdo do vetor: ";
  for (int x = 0; x < size; x++) cout << v[x] << ',';
  cout << endl;

  // libera a memória do vetor
  delete[] v;
}