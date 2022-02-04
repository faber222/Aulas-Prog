#include <stdio.h>

int compara_vetores(int vet1[], int vet2[], int tamanho) {
  int num_elementos = 0, i = 0;

  while (i < tamanho) {
    if (vet1[i] == vet2[i]) {
      printf("\nvet1=[%d], vet2=[%d]\n", vet1, vet2);
      num_elementos++;
    }
    i++;
  }

  return num_elementos;
}

int main() {
  int x[6] = {1, 2, 3, 4, 5, 6};
  int y[6] = {1, 3, 5, 4, 2, 3};
  int quant;
  quant = compara_vetores(x, y, 6);
  printf("\nThe value at quant is %d\n", quant);
}