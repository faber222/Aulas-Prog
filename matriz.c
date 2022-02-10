/*
AUTHOR: FABER BERNARDO JUNIOR
DATE: 08/02/2022
PROGRAM SYNOPSIS: Vector calc
ENTRY DATA: matA, matB, matR
OUTPUT DATA: matR
*/

#include <stdio.h>

#define DIM_1 2
#define DIM_2 3
#define DIM_3 4

int main() {
  int matA[DIM_1][DIM_2] = {{2, 5, 7}, {4, 7, 5}},
      matB[DIM_2][DIM_3] = {{7, 5, 6, 4}, {4, 6, 4, 3}, {9, 2, 2, 1}},
      matR[DIM_1][DIM_3] = {{0, 0, 0, 0}, {0, 0, 0, 0}}, i, j, k;

  for (i = 0; i < DIM_1; i++)
    for (j = 0; j < DIM_3; j++) {
      for (k = 0; k < DIM_2; k++)
        matR[i][j] = matR[i][j] + matA[i][k] * matB[k][j];
      printf("MatR[%d][%d] => %d \n", i, j, matR[i][j]);
    }
  return 0;
}