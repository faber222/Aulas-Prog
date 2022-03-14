/*
AUTHOR: FABER BERNARDO JUNIOR
DATE: 08/02/2022
PROGRAM SYNOPSIS: Function Vector calc
ENTRY DATA: A, B, R
OUTPUT DATA: mult_mat
*/

#include <stdio.h>

#define DIM_1 3
#define DIM_2 2
#define DIM_3 3

void mult_mat(int matA[DIM_1][DIM_2], int matB[DIM_2][DIM_3],
              int matR[DIM_1][DIM_3]) {
  int i, j, k;
  for (i = 0; i < DIM_1; i++) {
    for (j = 0; j < DIM_3; j++) {
      matR[i][j] = 0;
    }
  }

  for (i = 0; i < DIM_1; i++)
    for (j = 0; j < DIM_3; j++) {
      for (k = 0; k < DIM_2; k++)
        matR[i][j] = matR[i][j] + matA[i][k] * matB[k][j];
      printf("MatR[%d][%d] => %d \n", i, j, matR[i][j]);
    }
}

int main() {
  int A[DIM_1][DIM_2] = {{2, 5}, {9, 2}, {4, 7}},
      B[DIM_2][DIM_3] = {{7, 5, 6}, {4, 6, 4}}, R[DIM_1][DIM_3];
  mult_mat(A, B, R);
  return 0;
}