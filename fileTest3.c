#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct lista {
  char ch;
  char filename[10];
} lista;

int main() {
  FILE *fp;

  scanf("%s", lista.filename);
  fp = fopen(lista.filename, "w");

  fclose(fp);

  return 0;
}