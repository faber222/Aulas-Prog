/*
AUTOR: Faber Bernardo júnior
DATA: 27/02/2022
SINOPSE DO PROGRAMA: Set two pointer in the plane and compare with each other
DADOS DE ENTRADA: x, y;
DADOS DE SAIDA: distance, fistValue, secondValue;
*/

#include <math.h>
#include <stdio.h>

typedef struct {
  float x;
  float y;
} coordinate;

float distanceCalc(coordinate pointer1, coordinate pointer2) {
  float dx, dy;
  float dist, powX, powY;

  dx = pointer2.x - pointer1.x;
  dy = pointer2.y - pointer1.y;
  powX = pow(dx, 2);
  powY = pow(dy, 2);

  dist = sqrt(powX + powY);

  return dist;
}

int quadrant(coordinate p) {
  if (p.x == 0 || p.y == 0) {
    return 0;
  }
  if (p.x < 0) {
    if (p.y < 0) {
      return 3;
    }
    return 2;
  }
  if (p.x > 0) {
    if (p.y < 0) {
      return 4;
    }
    return 1;
  }
}

int main() {
  int firstValue, secondValue;
  int number;
  float distance;
  coordinate pointer1, pointer2;

  printf("How many times?\n");
  scanf("%d", &number);

  for (int i = 0; i < number; i++) {
    printf("%dº time\n", i + 1);
    printf("Enter the value at first X \n");
    scanf("%f", &pointer1.x);
    printf("Enter the value at first Y\n");
    scanf("%f", &pointer1.y);
    printf("Enter the value at second X\n");
    scanf("%f", &pointer2.x);
    printf("Enter the value at second Y\n");
    scanf("%f", &pointer2.y);

    firstValue = quadrant(pointer1);
    secondValue = quadrant(pointer2);
    distance = distanceCalc(pointer1, pointer2);

    printf("The distance between the first pointer to second pointer is %f\n",
           distance);
    printf("The first pointer is on the %dº quadrant\n", firstValue);
    printf("The second pointer is on the %dº quadrant\n\n", secondValue);
  }

  return 0;
}