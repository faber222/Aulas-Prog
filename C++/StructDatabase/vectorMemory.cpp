#include "vectorMemory.h"

#include <iostream>

int main(int argc, char* argv[]) {
  auto v = prg2::vetor_cria();
  prg2::vetor_anexa(v, 555);

  std::cout << "Tamanho do vetor: " << v.tamanho << std::endl;

  prg2::vetor_destroi(v);
}