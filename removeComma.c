/*
AUTOR: Faber Bernardo júnior
DATA: 28/02/2022
SINOPSE DO PROGRAMA: remove a comma and vowels replace with a space null
DADOS DE ENTRADA: char x
DADOS DE SAIDA: removeVowels(x)
*/

#include <stdio.h>
#include <string.h>

void removeVowels(char string[]) {
  for (int i = 0; string[i] != '\0'; i++) {
    if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' ||
        string[i] == 'o' || string[i] == 'u' || string[i] == ',') {
      string[i] = ' ';
    }
  }
};

int main() {
  char x[] = "faber,bernardo,junior";

  printf("string before; %s\n", x);
  removeVowels(x);
  printf("string after: %s\n", x);
  return 0;
}
