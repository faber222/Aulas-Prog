//teste de string e leitura, usando o strlen
//strlen mede o tamanho da string


#include <stdio.h>
#include <string.h>

int main() {
  char x[100] = "Faber";
  char y[100] = "Bernardo Júnior"; //usando o ', ele soma o acento também
  int tam;

  tam = strlen(x);
  printf("x - > %s com tamanho %d\n", x, tam);

  printf("y - > %s com tamanho %ld\n", y, strlen(y));

  return 0;
}