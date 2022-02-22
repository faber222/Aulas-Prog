#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_MAX 5

struct horario {
  int horas;
  int minutos;
  int segundos;
} listaHorarios[NUM_MAX];

int main(void) {
  void receberHorario(struct horario lista[NUM_MAX]);
  void mostrarHorario(struct horario lista[NUM_MAX]);

  receberHorario(listaHorarios);
  mostrarHorario(listaHorarios);
  system("pause");
  return 0;
}
void receberHorario(struct horario lista[NUM_MAX]) {
  int i;
  for (i = 0; i < NUM_MAX; i++) {
    printf("O %iº horario (hh:mm:ss): ", i + 1);
    scanf("%i:%i:%i", &lista[i].horas, &lista[i].minutos, &lista[i].segundos);
  };
};
void mostrarHorario(struct horario lista[NUM_MAX]) {
  int i;
  for (i = 0; i < NUM_MAX; i++) {
    printf("O %iº horario é %i:%i:%i\n", i + 1, lista[i].horas,
           lista[i].minutos, lista[i].segundos);
  };
};
