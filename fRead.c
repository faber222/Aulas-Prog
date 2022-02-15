#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *file;
  file = fopen("faber.txt", "r");

  if (file != NULL)
    printf("\nArquivo faber.txt foi aberto com sucesso\n");
  else {
    printf("\n\nErro: O arquivo faber.txt não foi aberto\n");
    system("pause");
    exit(0);
  }
  char frase[100];
  while (fgets(frase, 100, file) != NULL) {
    printf("%s", frase);
  }

  fclose(file);

  printf("\n");
  system("pause");
  return 0;
}