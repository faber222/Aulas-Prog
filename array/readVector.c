#include <stdio.h>

int N;
void ler_vet(int aux[N]) {
  int i, count;

  for (i = 0; i < N; i++) {
    printf("Enter the value at x [%d] <== ", i);
    scanf("%d", &aux[i]);
  }
}

int main() {
  printf("\nEnter the value at N\n");
  scanf("%d", &N);
  int vet[N], i;

  ler_vet(vet);
  for (i = 0; i < N; i++) printf("vet[%d]=%d\n", i, vet[i]);

  return 0;
}