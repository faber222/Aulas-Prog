#ifndef PRG2_H
#define PRG2_H

namespace prg2 {

// o tipo de vetor dinamico

struct vectorMemory {
  // area de armazenamento (o vetor de fato)
  int* area;
  // a capacidade atual do vetor
  unsigned int tamanho;
};

// operacoes do vetor
vectorMemory vetor_cria();

// destroi um vetor
void vetor_destroi(vectorMemory& v);

// limpar o vetor
void vetor_limpa(vectorMemory& v);

// obtem o valor de uma posicao do vetor
int vetor_obtem(const vectorMemory& v, unsigned int posicao);

// modifica o valor de uma posicao do vetor
void vetor_altera(vectorMemory& v, unsigned int posicao, int valor);

// anexar um valor
void vetor_anexa(vectorMemory& v, int valor);
}  // namespace prg2

#endif