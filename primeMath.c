/*
AUTHOR: FABER BERNARDO JUNIOR
DATE: 11/30/2021
PROGRAM SYNOPSIS: Compute the input value to check if it is a prime number
ENTRY DATA: number
OUTPUT DATA: ans
*/

#include <stdio.h>

int main() {
  int number, iterar, ans = 0;

  printf("Enter a number ");
  scanf("%d", &number);

  for (iterar = 2; iterar <= number / 2; iterar++) {
    if (number % iterar == 0) {
      ans++;
      break;
    }
  }

  if (ans == 0)
    printf("%d is a prime number\n", number);
  else
    printf("%d it is no a prime number\n", number);

  return 0;
}