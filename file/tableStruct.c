#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_MAX 2

struct t_aluno {
  char nome[30];
  char matricula[11];
  float b1, b2, b3, b4;
  float media;
} Turma[NUM_MAX];

void teste(struct t_aluno x[NUM_MAX]) {
  int i;
  for (i = 0; i < NUM_MAX; i++) {
    x[i].media = (x[i].b1 + x[i].b2 + x[i].b3 + x[i].b4) / 4;
    printf("%f\n", x[i].media);
  }
};

int main() {
  int i;

  for (i = 0; i < NUM_MAX; i++) {
    printf("Entre com o nome do aluno\n");
    scanf("%s", Turma[i].nome);
    printf("Entre com a matrícula do aluno\n");
    scanf("%s", Turma[i].matricula);
    printf("Entre com a nota do bimestre 1\n");
    scanf("%f", &Turma[i].b1);
    printf("Entre com a nota do bimestre 2\n");
    scanf("%f", &Turma[i].b2);
    printf("Entre com a nota do bimestre 3\n");
    scanf("%f", &Turma[i].b3);
    printf("Entre com a nota do bimestre 4\n");
    scanf("%f", &Turma[i].b4);
  }
  teste(Turma);

  return 0;
}