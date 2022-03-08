#include <stdio.h>
#include <string.h>

int alternar_chars(char str1[], char str2[], char str3[]) {
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
  char teste1[10] = "ABCD";
  char teste2[10] = "XYZW";
  char aux[20];
  int tam;
  tam = alternar_chars(teste1, teste2, aux);
  if (tam != -1) {
    printf("%s %d", aux, tam);
  } else {
    printf("As strings não são iguais\n");
  }
  return 0;
}