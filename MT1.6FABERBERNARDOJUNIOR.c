/*
AUTHOR: FABER BERNARDO JUNIOR
DATE: 11/30/2021
PROGRAM SYNOPSIS: Compute the imput to make a series of triangles even and odd
ENTRY DATA: shapeValue, amountValue
OUTPUT DATA: triangle
*/

#include <stdio.h>

int main() {
  int shapeValue, amountValue;

  int processValue = 1;
  int lines;
  int columns;

  char even;
  char odd;
  char triangle;

  do {
    printf("\nInput the size of individual shapes (Number)\n");
    scanf("%i", &shapeValue);
  } while (shapeValue < 2);
  printf("\nThe size inputed is = %d\n", shapeValue);

  do {
    printf("\nInput the number of triangles that will be printed \n");
    scanf("%i", &amountValue);
  } while (amountValue <= 0);
  printf("\nInput the first character of printing (Number or Letter)\n");
  scanf(" %c", &even);
  printf("\nInput the second character of printing (Number or Letter)\n");
  scanf(" %c", &odd);

  while (processValue <= amountValue) {
    printf("\nPrinting triangle Number = %d\n", processValue);

    lines = 0;

    if (processValue % 2 == 0) {
      triangle = even;
    } else {
      triangle = odd;
    }

    while (lines < shapeValue) {
      columns = 0;

      while (columns <= lines) {
        printf("%c", triangle);

        columns++;
      }

      printf("\n");

      lines++;
    }

    processValue++;
  }

  return 0;
}