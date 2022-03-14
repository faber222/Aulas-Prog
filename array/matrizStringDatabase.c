/*
AUTHOR: FABER BERNARDO JUNIOR
DATE: 08/02/2022
PROGRAM SYNOPSIS: String matriz data
ENTRY DATA: A, B, R
OUTPUT DATA: mult_mat
*/

#include <stdio.h>

int main() {
  char userTable[4][10] = {
      "Eraldo",
      "Silvana",
      "Vica",
      "Lara",
  };
  int Notas[4][3] = {
      {4, 5, 9},
      {10, 9, 10},
      {6, 7, 10},
      {10, 7, 9},
  };
  int i, j;

  for (i = 0; i < 4; i++) {
    printf("%s\n", &userTable[i][0]);
    printf("Notas do Semestre\n");
    for (j = 0; j < 3; j++) {
      printf("%d\t", Notas[i][j]);
    }
    printf("\n");
  }
  return 0;
}