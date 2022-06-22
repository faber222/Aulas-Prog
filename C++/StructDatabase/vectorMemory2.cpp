#include "vectorMemory.h"

using namespace prg2;

vectorMemory vetor_cria() {
  vectorMemory v = {nullptr, 0};
  // v.tamanho = 0;
  // v.area = nullptr;
  return v;
}

int vetor_obtem(const vectorMemory& v, unsigned int posicao) {
  if (v.tamanho > posicao) {
    return v.area[posicao];
  } else {
  }
}