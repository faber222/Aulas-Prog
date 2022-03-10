#include <stdio.h>

int main(int argc, char *argv[]) {
  char *p1;
  char vogal;
  int count = 0;
  p1 = argv[1];
  vogal = *argv[2];

  while (*p1 != '\0') {
    if (*p1 == vogal) {
      count++;
    }
    *p1++;
  }
  printf("O valor de count %d", count);

  return 0;
}