/*
AUTHOR: FABER BERNARDO JUNIOR
DATE: 11/30/2021
PROGRAM SYNOPSIS: Compute the imput of a parallel series of resistors
ENTRY DATA: pararellelSeries
OUTPUT DATA: result
*/

#include <math.h>
#include <stdio.h>

int main(void) {
  float resistor1, resistor2, parallelSeries, iterar;
  double result, parallelResult;

  printf("Enter the number at series that you want\n");
  scanf("%f", &parallelSeries);

  printf("\nEnter the first resistor value\n");
  scanf("%f", &resistor1);

  for (iterar = 1; iterar <= parallelSeries; iterar++) {
    printf("\nEnter the second resistor value\n");
    scanf("%f", &resistor2);
    parallelResult = (resistor1 + resistor2) / (resistor1 * resistor2);
    printf("\nThe value at parallel until now is %f\n", parallelResult);
    resistor1 = parallelResult;
    printf("\nThe new value at the resistor is %f\n", resistor1);
  }
  result = parallelResult;
  printf("\nThe result is %f\n", result);
  return 0;
}