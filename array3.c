/*
AUTHOR: FABER BERNARDO JUNIOR
DATE: 11/30/2021
PROGRAM SYNOPSIS: Simple array task
ENTRY DATA: vet1
OUTPUT DATA: vet1
*/

#include <stdio.h>

void ler_vet(int aux[5]) {
  int i;

  for (i = 0; i < 5; i++) {
    printf("aux[%d] <== ", i);
    scanf("%d", &aux[i]);
  }
}

int main() {
  int vet[5], i;

  ler_vet(vet);
  for (i = 0; i < 5; i++) printf("vet[%d]=%d\n", i, vet[i]);

  return 0;
}