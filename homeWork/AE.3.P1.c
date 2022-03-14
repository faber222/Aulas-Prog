#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int amount = 0;
  float x = 0, y = 0, z;
  int count = 0;

  for (int i = 1; argv[i] != '\0'; i++) {
    char *number;
    number = argv[i];
    z = atoi(number);

    if (z >= 0) {
      x = x + z;
      printf("number %f\n", z);
      count++;
    }
  }
  y = x / count;

  if (y >= 0 || y == 0) {
    printf("valor da media %f\n", y);
  } else {
    printf("Enter some parameter after executing, example: %s x y z\n",
           argv[0]);
  }

  return 0;
}