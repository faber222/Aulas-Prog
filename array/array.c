/*
AUTHOR: FABER BERNARDO JUNIOR
DATE: 11/30/2021
PROGRAM SYNOPSIS: Simple array task
ENTRY DATA: vet1
OUTPUT DATA: vat2 * 5
*/

#include <stdio.h>

int main() {
  /*O valor de vat1[x], o x indica o tamanho do valor, por exemplo 5, podemos
   * acessar 5 coisas ou armazenar 5 valores*/

  int vet1[5], vet2[5];
  int i;

  /* ler da entrada padrão e colocar dados no vetor 1. Multiplicar valor lido
   * por 5 e colocar no vetor 2*/
  for (i = 0; i < 6; i++) {
    printf("Entre com vet[%d] => ", i);
    scanf("%d", &vet1[i]);
    vet2[i] = vet1[i] * 5;
  }
  /* para conferir- vamos imprimir o conteúdo de vet2 */
  for (int j = 0; j < 6; j++) {
    printf("vet2[%d] => %d\n", j, vet2[j]);
  }
  return 0;
}