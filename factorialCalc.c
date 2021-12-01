/*
AUTHOR: FABER BERNARDO JUNIOR
DATE: 11/30/2021
PROGRAM SYNOPSIS: Compute the imput at two values and make a factorial of them
ENTRY DATA: nCount, mCount
OUTPUT DATA: out
*/

#include <stdio.h>

int main() {
  float imputN, nCount, fatN, mCount, imputM, fatM, out;

  printf("Enter the imput N\n");
  scanf("%f", &nCount);
  printf("Enter the imput M\n");
  scanf("%f", &mCount);

  imputN = nCount;
  fatN = 1;
  imputM = mCount;
  fatM = 1;

  while (imputN > 1) {
    fatN = fatN * imputN;
    imputN = imputN - 1;
  }
  while (imputM > 1) {
    fatM = fatM * imputM;
    imputM = imputM - 1;
  }
  out = (fatN * 2) / (fatM + 1);

  printf(
      "The output value is %f, the N value is %.1f and the M value is %.1f\n",
      out, fatN, fatM);
  return 0;
}
