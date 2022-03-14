/*
AUTHOR: FABER BERNARDO JUNIOR
DATE: 22/12/2021
PROGRAM SYNOPSIS: Compute the imput at two values and make a harmonic media calc
ENTRY DATA: z, w
OUTPUT DATA: output
*/

#include <stdio.h>

int count = 1;

float media_vetor(int x[], int tam) {
  int i;

  float summation = 0, harmonicSummation = 0;

  for (i = 0; i < tam; i++) {
    summation = (float)1 / x[i] + summation;
  };

  harmonicSummation = (float)tam / summation;

  return harmonicSummation;
};

int compara_vetores(int x[], int y[], int tamanho) {
  float z1, w1;

  z1 = media_vetor(x, tamanho);
  w1 = media_vetor(y, tamanho);

  switch (count) {
    case 1:

      if (z1 == 0 || w1 == 0)
        return -2;
      else
        return 2;

      break;

    case 2:
      if (z1 == w1)
        return 0;
      else
        return 2;
      break;

    case 3:
      if (z1 > w1)
        return 1;
      else
        return 2;
      break;

    case 4:
      if (z1 < w1)
        return -1;
      else
        return 2;
      break;
  };
};

int main() {
  int output;

  int z[5] = {4, 5, 2, 10, 5}, w[5] = {2, 2, 5, 7, 2};

  for (count = 1; count <= 4; count++) {
    output = compara_vetores(z, w, 5);

    if (output != 2) {
      printf(
          "Return of the comparison of the means of vectors 'Z' and 'W' = "
          "%d\n",
          output);
      break;
    };
    output = 0;
  }
}