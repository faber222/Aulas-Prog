#include <stdio.h>

int main() {
  int i, N;  // variaveis

  printf("Entre com o número\n");
  scanf("%d", &N);
  while (N <= 0) {
    printf("Entre com o número positivo\n");
    scanf("%d", &N);
  }
  for (i = N; i > 0; i--) {
    if (i % 2 == 0)
      printf("número é par ====> %d\n", i);
    else
      printf("número é ímpar ====> %d\n", i);
  }
  printf("FIM\n");  // finaliza código

  return 0;
}