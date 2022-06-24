#include "vectorMemory.h"

namespace prg2 {

vectorMemory vetor_cria(unsigned int capacidade) {
  vectorMemory v = {nullptr, capacidade};
  if (capacidade > 0) {
    v.area = new int[capacidade];
  }
  return v;
}

void vetor_expande(vectorMemory& v, unsigned int novo_tamanho) {
  if (novo_tamanho <= v.tamanho) return;

  int* nova = new int[novo_tamanho];

  // copia os dados para a nova area de memoria
  for (int i = 0; i < v.tamanho; i++) {
    nova[i] = v.area[i];
  }

  // zera as posicoes remanescentes da nova area
  for (int i = v.tamanho; i < novo_tamanho; i++) {
    nova[i] = 0;
  }

  // destruir a antiga area de memoria
  // usando delete[], serve para especificar um vetor
  delete[] v.area;

  // atualiza a nova area de memoria
  v.area = nova;
  v.tamanho = novo_tamanho;
}

// Obtem o valor de uma posicao do vetor
int vetor_obtem(vectorMemory& v, unsigned int posicao) {
  // se posicao >= capacidade, expande o vetor
  if (posicao >= v.tamanho) {
    // expande o vetor
    int novo_tamanho = posicao + 1;
    vetor_expande(v, novo_tamanho);
  }

  return v.area[posicao];
}

void vetor_altera(vectorMemory& v, unsigned int posicao, int valor) {
  if (posicao >= v.tamanho) {
    // expande o vetor
    vetor_expande(v, posicao + 1);
  }
  v.area[posicao] = valor;
}

void vetor_destroi(vectorMemory& v) {
  if (v.tamanho > 0) {
    delete[] v.area;
    v.tamanho = 0;
    v.area = nullptr;
  }
}
}  // namespace prg2