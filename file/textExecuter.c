/* Testando a função fread - Lê um arquivo binário contendo
 2 vetores de 15 elementos cada um: O primeiro vetor é de
caracteres e o segundo é de variáveis inteiras */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char teste[20];
  char ch[15];
  int valor[15], i = 0;

  // ponteiro para o arquivo
  FILE *file;

  // abertura do arquivo
  file = fopen("faber.txt", "rb");

  // testando se o arquivo foi aberto com sucesso
  if (file != NULL)
    printf("\n\nArquivo faber.txt foi aberto com sucesso\n\n");
  else {
    printf("\n\nERRO: O arquivo faber.txt não foi aberto e criado\n");
    system("pause");
    exit(1);
  }

  // leitura do arquivo binário
  // Sintaxe: fread(&variavel, num_bytes, num_registros, arquivo);

  // retorna o conteúdo contido em uma ocorrência do tamanho da variável ch.
  fread(teste, sizeof(teste), 1, file);
  fread(ch, sizeof(ch), 1, file);

  // retorna o conteúdo contido em uma ocorrência do tamanho da variável valor.
  fread(valor, sizeof(valor), 1, file);

  printf("\nVetor de caracteres: \n");

  for (i = 0; i < 15; i++) {
    printf("%c", ch[i]);
  }

  printf("\nVetor de caracteres: \n");
  for (i = 0; i < 20; i++) {
    printf("%c", teste[i]);
  }

  printf("\nVetor de inteiros: ");

  for (i = 0; i < 15; i++) {
    printf("\n%d", valor[i]);
  }

  // fechando o arquivo
  fclose(file);

  printf("\n");
  system("pause");
  return (0);
}