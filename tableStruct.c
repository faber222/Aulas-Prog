#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#define NUM_MAX 1
int j;

struct t_aluno {
  char nome[30];
  char matricula[11];
  float b1, b2, b3, b4;
  float media;
};

void teste(struct t_aluno x) {
  x.media = (x.b1 + x.b2 + x.b3 + x.b4) / 4;
  printf("%f\n", x.media);
};

int main() {
  struct t_aluno Turma;
  int i;

  for (i = 0; i < 1; i++) {
    printf("Entre com o nome do aluno\n");
    scanf("%s", Turma.nome);
    printf("Entre com a matrícula do aluno\n");
    scanf("%s", Turma.matricula);
    printf("Entre com a nota do bimestre 1\n");
    scanf("%f", &Turma.b1);
    printf("Entre com a nota do bimestre 2\n");
    scanf("%f", &Turma.b2);
    printf("Entre com a nota do bimestre 3\n");
    scanf("%f", &Turma.b3);
    printf("Entre com a nota do bimestre 4\n");
    scanf("%f", &Turma.b4);
    teste(Turma);
  }

  return 0;
}