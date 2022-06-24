#include "vectorMemory.h"

#include <iostream>

int main(int argc, char* argv[]) {
  auto v = prg2::vetor_cria(4);

  prg2::vetor_altera(v, 10, 555);
  prg2::vetor_altera(v, 5, 123);

  std::cout << "Tamanho do vetor: " << v.tamanho << std::endl;

  for (int i = 0; i < v.tamanho; i++) {
    std::cout << "v[" << i << "]";
    std::cout << vetor_obtem(v, i) << std::endl;
  }

  // verifica qual o valor da posicao 100
  int x = prg2::vetor_obtem(v, 100);
  // mostra o tamanho
  std::cout << "Tamanho do vetor: " << v.tamanho << std::endl;
  // mostra o valor de x
  std::cout << "x=" << x << std::endl;

  // itera a posicao
  for (int i = 0; i < v.tamanho; i++) {
    std::cout << "v[" << i << "]";
    std::cout << vetor_obtem(v, i) << std::endl;
  }
  
  prg2::vetor_destroi(v);
}