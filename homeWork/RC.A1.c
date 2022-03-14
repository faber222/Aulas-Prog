/*
AUTOR: Faber Bernardo júnior
DATA: 23/02/2022
SINOPSE DO PROGRAMA: Compute a function F(x) inside [a,b] and return a
comparison at overallAverage;
DADOS DE ENTRADA: a,b;
DADOS DE SAIDA: f(i);
*/

#include <math.h>
#include <stdio.h>

int A = 0;
int B = 9;
int C = 4;

float f(float x) {
  float z = (A * pow(x, 2)) + (B * x) + C;
  return z;
};

int main() {
  int a, b;
  float bigger, smaller = 0;
  float overallAverage, totalAverage = 0, average;
  int iterar = 0;

  do {
    printf("Enter the value at a\n");
    scanf("%d", &a);
  } while (a <= 0);

  do {
    printf("Enter the value at b\n");
    scanf("%d", &b);
  } while (b < a);

  for (float i = a; i <= b; i += 0.2) {
    float function = f(i);
    printf("This is the value at f(x) %f\n", function);

    totalAverage = totalAverage + function;

    if (function > bigger) {
      bigger = function;
      if (smaller == 0) {
        smaller = bigger;
      }
    }
    if (function < smaller) {
      smaller = function;
    }
    iterar++;
  }

  overallAverage = totalAverage / iterar;
  average = (bigger + smaller) / 2;
  printf("The bigger %f\n", bigger);
  printf("The smaller %f\n", smaller);
  printf("The overallAverage %f\n", overallAverage);
  printf("The average %f\n", average);
  printf("The iterar %d\n", iterar);

  if (average < overallAverage) {
    printf(
        "The overall average is bigger than the average at bigger to "
        "smaller\n");
  } else if (average > overallAverage) {
    printf(
        "The overall average is smaller than the average at bigger to "
        "smaller\n");
  } else if (average == overallAverage) {
    printf(
        "The overall average is equal than the average at bigger to "
        "smaller\n");
  };

  return 0;
}