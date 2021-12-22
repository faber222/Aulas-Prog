#include <stdio.h>

int contagem = 1;

float media_vetor(int x[], int tamanho) {
  int i = 0;

  float soma = 0, soma_harmonica = 0;

  for (i == 0; i < tamanho; i++) {
    soma = (float)1 / x[i] + soma;
  };

  soma_harmonica = (float)tamanho / soma;

  return soma_harmonica;
};

int compara_vetores(int x[], int y[], int tamanhoVetor) {
  float x1, x2;

  x1 = media_vetor(x, tamanhoVetor);
  x2 = media_vetor(y, tamanhoVetor);

  switch (contagem) {
    case 1:

      if (x1 == 0 || x2 == 0)
        return -2;
      else
        return 2;

      break;

    case 2:
      if (x1 == x2)
        return 0;
      else
        return 2;
      break;

    case 3:
      if (x1 > x2)
        return 1;
      else
        return 2;
      break;

    case 4:
      if (x1 < x2)
        return -1;
      else
        return 2;
      break;
  };
};

int main() {
  int output;

  int z[5] = {4, 8, 5, 7, 2}, w[5] = {4, 8, 5, 7, 2};

  for (contagem = 1; contagem <= 4; contagem++) {
    output = compara_vetores(z, w, 5);

    if (output != 2) {
      printf(
          "Retorno da comparação das médias dos vetores 'Z' e 'W' = "
          "%d\n",
          output);
      break;
    };
    output = 0;
  }
}