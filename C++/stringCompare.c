#include <stdio.h>
#include <string.h>
#define NUM 100

typedef struct {
  char dados[NUM];
} barometro;

typedef struct {
  char valor[NUM];
} termometro;

int main(void) {
  int bar1, bar2, bar3;
  int ter1, ter2, ter3;
  char a[NUM] = "subindo";
  char b[NUM] = "estacionario";
  char c[NUM] = "baixando";

  barometro bar;
  termometro ter;

  printf("o barometro esta em qual posicao?\n");
  scanf("%s", bar.dados);
  printf("o termometro esta em qual posicao?\n");
  scanf("%s", ter.valor);

  bar1 = strcmp(bar.dados, a);  // barometro subindo
  bar2 = strcmp(bar.dados, b);  // barometro estacionario
  bar3 = strcmp(bar.dados, c);  // barometro baixando
  ter1 = strcmp(ter.valor, a);  // termometro subindo
  ter2 = strcmp(ter.valor, b);  // termometro estacionario
  ter3 = strcmp(ter.valor, c);  // termometro baixando

  if (bar1 == 0 && ter1 == 0) {
    printf("Tempo bom, ventos quentes e secos\n");
  } else if (bar1 == 0 && ter2 == 0) {
    printf("Tempo bom, ventos lestes frescos\n");
  } else if (bar1 == 0 && ter3 == 0) {
    printf("Tempo bom, ventos de sul e sudoeste\n");
  };

  if (bar2 == 0 && ter1 == 0) {
    printf("Tempo mudando para bom, ventos de leste\n");
  } else if (bar2 == 0 && ter2 == 0) {
    printf("Tempo incerto, ventos variaveis\n");
  } else if (bar2 == 0 && ter3 == 0) {
    printf("chuva provavel, ventos de sul e sudeste\n");
  };

  if (bar3 == 0 && ter1 == 0) {
    printf("Tempo instavel, aproximacao de frente\n");
  } else if (bar3 == 0 && ter2 == 0) {
    printf("Frente quente com chuvas provaveis\n");
  } else if (bar3 == 0 && ter3 == 0) {
    printf("Chuvas abundantes e ventos de sul a sudoeste fortes\n");
  };
};