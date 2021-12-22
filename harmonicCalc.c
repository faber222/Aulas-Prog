#include <math.h>
#include <stdio.h>

float media_vetor(int x[], int tam) {
  int i = 0;

  float soma, soma_harmonica;

  for (i == 0; i < tamanho; i++) {
    if (x[i] == 0)
      return 0;

    else
      soma = (float)1 / x[i] + soma;
  };

  soma_harmonica = (float)tamanho / soma;

  return soma_harmonica;
}
int compara_vetores(int x[], int y[], int tamanho) {}
int main() {
  int y[4] = {1, 5, 7, 11}, w[4] = {5, 9, 2, 3};
  printf("return %d\n", compara_vetores(y, w, 4));
}