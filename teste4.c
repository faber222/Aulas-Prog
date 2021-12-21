//strcpy faz a copia de uma string para outra, onde o x,y, o y é quem vai ser copiado para dentrod o x

#include <stdio.h>
#include <string.h>

int main() {
  char x[20] = "IFSC-SJ";
  char y[20];

  strcpy(y, x);
  printf("%s\n", y);
  return 0;
}