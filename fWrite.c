#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int number, imput = 0;
  char i[100];
  FILE *file;

  do {
    printf("\nSelecione uma das opcoes abaixo");
    printf("\n(1) para criar uma lista");
    printf("\n(2) para ler uma lista ja existente");
    printf("\n(3) para sair do programa\n");
    scanf("%d", &imput);
    switch (imput) {
      case 1:
        file = fopen("faber.txt", "w");

        if (file != NULL)
          printf("\nArquivo faber.txt foi aberto com sucesso\n");
        else {
          printf("\n\nErro: O arquivo faber.txt nao foi aberto\n");
          system("pause");
          exit(0);
        }
        printf("Quantos itens voce deseja adicionar?\n");
        scanf("%d", &number);

        for (int j = 1; j < number + 1; j++) {
          printf("Item - %d\n", j);
          scanf("%s", &i);

          fprintf(file, "%d - %s\n", j, i);
        }

        fclose(file);
        break;
      case 2:
        file = fopen("faber.txt", "r");

        if (file != NULL)
          printf("\nArquivo faber.txt foi aberto com sucesso\n");
        else {
          printf("\n\nErro: O arquivo faber.txt nao foi aberto\n");
          system("pause");
          exit(0);
        }
        char frase[100];
        while (fgets(frase, 100, file) != NULL) {
          printf("%s", frase);
        }

        fclose(file);
        break;
      case 3:
        printf("\n\nFinish program!\n\n");
        return 0;
        break;

      default:
        printf("Valor invalido\n");
        printf("Error!\n");
        printf("Fechando lista\n ");
        break;
    }

  } while (imput <= 3);

  printf("\n");
  system("pause");
  return 0;
}