/*
AUTOR: FABER BERNARDO JUNIOR
DATA: 30/11/2021
SINOPSE DO PROGRAMA: Computar valores de F(x) dado um intervalo.
DADOS DE ENTRADA: a, b
DADOS DE SAIDA: media
*/

#include <stdio.h>

int main() {
  int x, a, b;
  float imput, output, media;

  output = 0;

  printf("Para a função f(x)=7x-9, forneça um range de valores de a até b\n");
  printf("Os valores de entrada devem ser maiores que 0\n");

  do {
    printf("Entre com o valor de a\n");
    scanf("%d", &a);

    printf("Entre com o valor de b\n");
    scanf("%d", &b);

    if (a > b) printf("O valor de a não pode ser maior que b\n");

  } while (a > b);
  if (a <= 0 && b <= 0) {
    printf("O valor de A e B não podem ser negativos...\n");
    return 0;
  }

  for (x = a; x <= b; x++) {
    imput = ((7 * x) - 9);
    output = output + imput;
  }
  media = output / b;
  printf("%.2f\n", media);

  return 0;
}
