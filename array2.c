/*
AUTHOR: FABER BERNARDO JUNIOR
DATE: 11/30/2021
PROGRAM SYNOPSIS: Compute the imput to make a media calc using arrays
ENTRY DATA: 10 number to enter in code
OUTPUT DATA: Amount media value
*/

#include <stdio.h>

int main() {
  int vet[10], i;
  float averageCalc, media;
  int count = 0;

  for (i = 0; i < 10; i++) {
    printf("Enter the value at x[%d] ", i);
    scanf("%d", &vet[i]);
    media = media + vet[i];
  }
  averageCalc = media / 10;
  for (i = 0; i < 10; i++) {
    if (vet[i] > averageCalc) {
      count++;
    }
  }
  printf("\nThe media value is %f\n", averageCalc);
  printf("\nNumber of numbers above average = %d\n", count);

  return 0;
}