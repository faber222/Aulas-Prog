/*
AUTOR: Faber Bernardo júnior
DATA: 07/03/2022
SINOPSE DO PROGRAMA: encrypt and decrypt a passed string
DADOS DE ENTRADA: char x
DADOS DE SAIDA: removeVowels and replaceVowels
*/

#include <stdio.h>
#include <string.h>

char a[] = {'A', '#'};
char e[] = {'E', '@'};
char i[] = {'I', '$'};
char o[] = {'O', '!'};
char u[] = {'U', '?'};

int removeVowels(char string[], char stringBuffer1[]) {
  strcpy(stringBuffer1, string);
  int cont = 0;
  for (int j = 0; string[j] != '\0'; j++) {
    if (string[j] == a[0]) {
      stringBuffer1[j] = a[1];
      cont++;
    };
    if (string[j] == e[0]) {
      stringBuffer1[j] = e[1];
      cont++;
    };
    if (string[j] == i[0]) {
      stringBuffer1[j] = i[1];
      cont++;
    };
    if (string[j] == o[0]) {
      stringBuffer1[j] = o[1];
      cont++;
    };
    if (string[j] == u[0]) {
      stringBuffer1[j] = u[1];
      cont++;
    };
  }

  return cont;
};

int replaceVowels(char string[], char stringBuffer2[]) {
  strcpy(stringBuffer2, string);
  int cont = 0;
  for (int j = 0; string[j] != '\0'; j++) {
    if (string[j] == a[1]) {
      stringBuffer2[j] = a[0];
      cont++;
    };
    if (string[j] == e[1]) {
      stringBuffer2[j] = e[0];
      cont++;
    };
    if (string[j] == i[1]) {
      stringBuffer2[j] = i[0];
      cont++;
    };
    if (string[j] == o[1]) {
      stringBuffer2[j] = o[0];
      cont++;
    };
    if (string[j] == u[1]) {
      stringBuffer2[j] = u[0];
      cont++;
    };
  }
  return cont;
};

int main() {
  char x[] = "FABER,BERNARDO,JUNIOR", buffer1[51], buffer2[51];
  int tam;

  tam = removeVowels(x, buffer1);
  printf("string after: %s - %d - %s\n", x, tam, buffer1);

  tam = replaceVowels(buffer1, buffer2);
  printf("string after: %s - %d - %s\n", buffer1, tam, buffer2);

  return 0;
}
