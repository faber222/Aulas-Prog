/*
AUTHOR: FABER BERNARDO JUNIOR
DATE: 11/30/2021
PROGRAM SYNOPSIS: Compute values ​​of F(x) given an interval.
ENTRY DATA: a, b
OUTPUT DATA: media
*/

#include <stdio.h>

int main() {
  int x, a, b;
  float imput, output, media;

  output = 0;

  printf(
      "For the function f(x)=7x-9, give a range of values ​​from a to b\n");
  printf("Input values ​​must be greater than 0\n");

  do {
    printf("Enter the value of a\n");
    scanf("%d", &a);

    printf("Enter the value of b\n");
    scanf("%d", &b);

    if (a > b) printf("The value of a cannot be greater than b\n");

  } while (a > b);
  if (a <= 0 && b <= 0) {
    printf("The value of A and B cannot be negative...\n");
    return 0;
  }

  for (x = a; x <= b; x++) {
    imput = ((7 * x) - 9);
    output = output + imput;
  }
  media = output / b;
  printf("%.2f\n", media);

  return 0;
}
