#include <stdio.h>
#include <stdlib.h>

struct Estrutura {
  char foo[100];
  int bar;
} umaEstrutura;
typedef struct Estrutura vetor[100];

// funçao que limpa o buffer
void flush_in() {
  int ch;
  while ((ch = fgetc(stdin)) != EOF && ch != '\n') {
  }
}

// funçao que abre o arquivo, e si nao for possivel mostra qual foi o erro,
// funciona igual que fopen
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
  FILE* arquivo = fileOpen("Arquivo de provas.txt", "w");

  vetor v = {0};  // v é um vetor de 100 posiçoes que esta todo iniciado a nulos
  int contador =
      0;  // esse contador server para saber quantos registromes temos efetuado,
          // no maximo só pode ser 100, de v[0] a v[99]
  int i = 0;
  char op;

  do {
    printf("Escreva uma palavra para foo maximo 100 letras: ");
    scanf("%99s",
          v[contador]
              .foo);  // si a capacidade de foo é de 100 letras só podemos ler
                      // 99 ja que a ultima é o nulo e nao devemos usara ultima
                      // posiçao, si escrevemos mais de 100 letras o restante
                      // fica no buffer, a funçao flush_in se encarga de
                      // eliminar a "sobra", resultado é uma leitura segura a
                      // prova de transbordamentos de buffer.
    flush_in();
    printf("Escreva um volor inteiro: ");
    scanf("%d%*c", &v[contador].bar);

    // depois de leer uma estrutura devemos incrementar o contador
    contador++;

    printf("Deseja gravar mais alguma NF: ");
    scanf("%c%*c", &op);  // %*c evita que al pulsar a tecla enter, essa mesma
                          // tecla vaia parar no buffer(Leitura segura).
                          // repetimos até um maximo de 100 vezes
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