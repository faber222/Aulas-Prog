/*
AUTOR: Faber Bernardo júnior
DATA: 07/03/2022
SINOPSE DO PROGRAMA: calc the average speed between two cars
DADOS DE ENTRADA: cars
DADOS DE SAIDA: x, y, z
*/

#include <stdio.h>
#include <string.h>

float calcFaster(float aux[], float aux2[]) {
  float w = 0, z = 0;

  for (int i = 0; i < 10; i++) {
    if (aux[i] > w) {
      w = aux[i];
    }
  };
  for (int j = 0; j < 10; j++) {
    if (aux2[j] > z) {
      z = aux2[j];
    }
  };

  if (w > z) {
    printf("the first is the fastest\n");
    return w;
  }
  if (w < z) {
    printf("the second is the fastest\n");
    return z;
  }
  if (w == z) {
    printf("both have the same maximum speed\n");
    return -1;
  }
  return 0;
};

float calcMedia(float aux[]) {
  float division, sum = 0;

  for (int j = 0; j < 10; j++) {
    sum = sum + aux[j];
  }

  division = sum / 10;
  return division;
};

int main() {
  int x, y;
  float z;
  float cars[2][10] = {
      {10, 20, 30, 40, 50, 60, 70, 80, 200, 300},
      {20, 30, 290, 350, 60, 70, 80, 90, 150, 110},
  };
  x = calcMedia(cars[0]);
  y = calcMedia(cars[1]);

  printf("the first car %d\n", x);
  printf("the second car %d\n", y);

  z = calcFaster(cars[0], cars[1]);
  printf("value of the highest speed %.2f\n", z);

  return 0;
}