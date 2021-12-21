// strcmp faz a comparação de duas strings, verificando se o valor na tabela
// ascii pe maior ou menor, se for igual é 0

#include <stdio.h>
#include <string.h>

int main() {
  char x[100] = "Ifsc-";
  char y[100];
  int ret;
  
  printf("Entre com o valor de Y\n");
  scanf("%s", y);

  ret = strcmp(x, y);
  if (ret == 0)
    printf("strings iguais\n");
  else
    printf("não são iguais\n");

  return 0;
}