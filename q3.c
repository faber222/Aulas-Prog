#include <stdio.h>
#include <string.h>

int alternar_chars(char str1[], char str2[], char str3[]) {
  int x, y, z, add = 0;
  x = strlen(str1);
  y = strlen(str2);
  if (x == y) {
    for (int i = 0; i < x; i++) {
      if (str1[i] % 2 == 0) {
        str3[i] = str1[i];
      }
      if (str2[i] % 2 != 0) {
        str3[i] = str2[i];
      }
    }
    z = x + y;

    printf("%s\n", str1);
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