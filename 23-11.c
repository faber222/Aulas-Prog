#include <stdio.h>

int main() {
  float imputN, nCount, fatN, mCount, imputM, fatM, out;

  printf("Entre com o número N\n");
  scanf("%f", &nCount);
  printf("Entre com o número M\n");
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

  printf("Valor de saida é %f, o valor de N é %.1f e o valor de M é %.1f\n",
         out, fatN, fatM);
  return 0;
}
