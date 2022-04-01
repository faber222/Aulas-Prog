// função que possibilita concatenar uma string dentro da outra, sendo assim,
// juntando as duas, preservando o espaço da memoria de cada uma

#include <stdio.h>
#include <string.h>

int main() {
  char x[20] = "IFSC";
  char y[20] = "-SJ";

  strcat(x, y);
  printf("%s\n", x);
  return 0;
}

