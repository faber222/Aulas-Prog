/*
AUTHOR: Faber Bernardo júnior
DATE: 10/03/2022
PROGRAM SYNOPSIS: receives some strings on the command line and prints the
amount of string and the total
ENTRY DATA: *argv
OUTPUT DATA: x and amount
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int amount = 0;
  for (int i = 1; argv[i] != NULL; i++) {
    int x;
    char *string;
    string = argv[i];
    x = strlen(argv[i]);
    printf("string %s - %d\n", string, x);
    *string++;
    amount = amount + x;
  }
  if (amount == 0) {
    printf(
        "Enter some parameter after executing, example: %s xxxx yyyy "
        "zzzz\n",
        argv[0]);
  } else {
    printf("Total characters %d\n", amount);
  }

  return 0;
}