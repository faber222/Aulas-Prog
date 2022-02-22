//#include <conio.h>
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct horario {
  int horas;
  int minutos;
  int segundos;
  float teste;
  char palavra[1000];
} agora, proxima;

struct horario teste(struct horario x) {
  printf("%d:%d:%d\n", x.horas, x.minutos, x.segundos);
  x.horas = 100;
  x.minutos = 100;
  x.segundos = 100;
  return x;
};

int main(void) {
  int i;

  struct horario vetor[5] = {
      {10, 20, 30}, {20, 30, 40}, {30, 40, 50}, {40, 50, 60}, {50, 60, 70}};

  agora.horas = 17;
  agora.minutos = 18;
  agora.segundos = 30;

  scanf("%[^\n]s", agora.palavra);

  proxima = teste(agora);

  for (i = 0; i < 5; i++) {
    printf("%i:%i:%i\n", vetor[i].horas, vetor[i].minutos, vetor[i].segundos);
  };

  printf("%i:%i:%i\n", proxima.horas, proxima.minutos, proxima.segundos);
  printf("%s\n", agora.palavra);

  system("pause");
  return 0;
}
