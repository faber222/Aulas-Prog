#include <stdio.h>

int main() {
  int number, iterar, ans = 0;

  printf("Digite um número: ");
  scanf("%d", &number);

  for (iterar = 2; iterar <= number / 2; iterar++) {
    if (number % iterar == 0) {
      ans++;
      break;
    }
  }

  if (ans == 0)
    printf("%d é um número primo\n", number);
  else
    printf("%d não é um número primo\n", number);

  return 0;
}