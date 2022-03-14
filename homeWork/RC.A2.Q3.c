/*
AUTOR: Faber Bernardo júnior
DATA: 07/03/2022
SINOPSE DO PROGRAMA: toggles the variables test1 and test2
DADOS DE ENTRADA: test1 and test2
DADOS DE SAIDA: aux
*/
#include <stdio.h>
#include <string.h>

int switchChar(char str1[], char str2[], char str3[]) {
  int x, y, z, add = 0;
  x = strlen(str1);
  y = strlen(str2);
  z = x + y;
  if (x == y) {
    for (int i = 0; i <= z; i++) {
      if (i % 2 == 0) {
        str3[i] = str1[add];
      } else {
        str3[i] = str2[add];
        add++;
      }
    }
  } else {
    return -1;
  }
  return z;
}

int main() {
  char test1[10] = "ABCD";
  char test2[10] = "XYZW";
  char aux[20];
  int tam;
  tam = switchChar(test1, test2, aux);
  if (tam != -1) {
    printf("%s %d", aux, tam);
  } else {
    printf("Strings are not the same\n");
  }
  return 0;
}