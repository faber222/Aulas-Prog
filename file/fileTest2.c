#include <stdio.h>
#include <stdlib.h>

struct Estrutura {
  char foo[100];
  int bar;
};
typedef struct Estrutura vetor[100];

// funçao que limpa o buffer
void flush_in() {
  int ch;
  while ((ch = fgetc(stdin)) != EOF && ch != '\n') {
  }
}

FILE* fileOpen(char* name, char* mode) {
  FILE* file = fopen(name, mode);
  if (file == NULL) {
    perror("Erro: ");
    exit(1);
  }
  return file;
}

// essa funçao salva um a um os dados ao arquivo
void salvarDatos(FILE* arquivo, struct Estrutura* e) {
  fprintf(arquivo, "%s;%d\n", e->foo, e->bar);
}

int main() {
  char name[64];
  printf("Enter the name of the file to be created: ");
  fgets(name, 64, stdin);

  FILE* arquivo = fileOpen(name, "w");

  vetor v = {0};  // v é um vetor de 100 posiçoes que esta todo iniciado a nulos
  int contador = 0;
  int i = 0;
  char op;

  do {
    printf("Escreva uma palavra para foo maximo 100 letras: ");
    scanf("%99s", v[contador].foo);
    flush_in();
    printf("Escreva um volor inteiro: ");
    scanf("%d%*c", &v[contador].bar);

    // depois de leer uma estrutura devemos incrementar o contador
    contador++;

    printf("Deseja gravar mais alguma NF: ");
    scanf("%c%*c", &op);
  } while ((op == 'S' || op == 's') && contador <= 100);

  // agora porcedemos a guardar...
  for (i = 0; i < contador; i++) {
    salvarDatos(arquivo, &v[i]);
  }

  // terminado salvamos arquivo
  fclose(arquivo);
  getchar();
  return 0;
}