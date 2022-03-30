#include <math.h>
#include <stdio.h>
#include <string.h>
#define NUM 10

int guess(int i, int j) {
  char resposta1[NUM], resposta2[NUM];
  char comp1[NUM] = "Sim";
  char comp2[NUM] = "Maior";
  char comp3[NUM] = "Menor";

  int x, y, z;
  int g = abs((i + j) / 2);

  printf("E o numero: %d ?(Sim, Nao)\n", g);
  scanf("%s", resposta1);

  x = strcmp(resposta1, comp1);

  if (x == 0) {
    return g;
  } else {
    printf("O numero eh maior ou menor que %d ?(Maior, Menor)\n", g);
    scanf("%s", resposta2);
    y = strcmp(resposta2, comp2);
    z = strcmp(resposta2, comp3);

    if (y == 0) {
      guess(g, j);
    }
    if (z == 0) {
      guess(i, g);
    }
  }
}
int main() {
  char pensamento;
  printf("Pense em um numero entre 0 e 100.\n");
  printf("Pensou?(S = Sim, N = nao)\n");
  scanf(" %c", &pensamento);
  if (pensamento == 'S') {
    guess(1, 100);
  }
}