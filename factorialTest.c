#include <stdio.h>

int factorial(i) {
  // Função que calcula, recursivamente, o fatorial de i.
  if ((i == 1) || (i == 0))
    return 1;
  else
    return factorial(i - 1) * i;
}
int main() {
  // Declaração de n, o número informado que gera o fatorial.
  int n;
  printf("Enter the number you want to get the factorial: \n");
  scanf("%d", &n);
  printf("The factorial %d is %d \n", n, factorial(n));
}