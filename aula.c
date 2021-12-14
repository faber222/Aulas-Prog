// Autor: Victor Cesconetto De Pieri

#include <stdio.h>

int main() {
  float x[10];
  int i, count;
  float media = 0, averageCalc;

  for (i = 0; i < 10; i++) {
    printf("Enter the value at x [%d] -> ", i);
    scanf("%f", &x[i]);
    media = media + x[i];
    printf("\n%.2f\n", media);
  }

  averageCalc = media / 10;
  printf("\nThe media is %.2f\n", averageCalc);
  count = 0;

  for (i = 0; i < 10; i++) {
    if (x[i] > averageCalc) count++;
  }

  printf("\nNumber of numbers above average = %d\n", count);
  return 0;
}