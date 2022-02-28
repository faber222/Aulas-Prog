/*
AUTOR: Faber Bernardo júnior
DATA: 28/02/2022
SINOPSE DO PROGRAMA: remove a comma and replace with a dash
DADOS DE ENTRADA: char x
DADOS DE SAIDA: removeVowels(x)
*/

#include <stdio.h>
#include <string.h>

int removeVowels(char string[]) {
  int i = 0, j = 0, cont = 0;
  char aux[256];
  while (string[i] != '\0') {
    if (string[i] == ',') {  // if the value is equal to ','
      string[i] = '-';       // put the position = '-'
      aux[j] = string[i];    // save to aux in position [j]
      j++;                   // sum j to be able to advance to the next string
    } else {
      aux[j] = string[i];  // if not equal,save to aux at position[j]
      j++;                 // sum j to be able to advance to
                           // the next string
      cont++;              // counter to be able at the end to close
    };
    i++;  // to be able to end the loop and select each logical position of the
          // string vector
  }
  aux[j] = 0;           // reset the aux position
  strcpy(string, aux);  // copy all aux values ​​into string
  return cont = 0;
};

int main() {
  char x[] = "faber,bernardo,junior";
  int cont;

  printf("string before; %s\n", x);
  cont = removeVowels(x);
  printf("string after: %s\n", x);
  return 0;
}
