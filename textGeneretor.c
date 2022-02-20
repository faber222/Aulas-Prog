
#include <stdio.h>
#include <stdlib.h>
int main(void) {
  char teste[20] = "FABER LINDO";
  char ch[15] = "Teste geral";
  int valor[15] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30};
  FILE *file;

  file = fopen("faber.txt", "wb");  // Se não abriu, cria.

  if (file != NULL)
    printf("\nArquivo faber.txt foi aberto com sucesso\n");
  else {
    printf("\n\nErro: O arquivo faber.txt não foi aberto\n");
    system("pause");
    exit(0);
  }

  // Gravando os dados no arquivo usando a função fwrite
  fwrite(teste, sizeof(char), 20, file);
  fwrite(ch, sizeof(char), 15, file);
  fwrite(valor, sizeof(int), 15, file);

  // Fechando o arquivo
  fclose(file);

  system("pause");  // pausa na tela, somente para Windows
  return (0);
}