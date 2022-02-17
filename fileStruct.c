#include <conio.h>
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
  char palavra;
};
struct horario teste(struct horario x) {
  printf("%d:%d:%d\n", x.horas, x.minutos, x.segundos);
  x.horas = 100;
  x.minutos = 100;
  x.segundos = 100;
  return x;
};

int main(void) {
  // struct horario teste(struct horario x);

  struct horario agora;
  agora.horas = 17;
  agora.minutos = 18;
  agora.segundos = 30;
  struct horario proxima;
  proxima = teste(agora);

  printf("%i:%i:%i\n", proxima.horas, proxima.minutos, proxima.segundos);

  system("pause");
  return 0;
}