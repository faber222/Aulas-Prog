#include <stdio.h>
#include <string.h>

#define TAM_ID 10
#define TAM_NOME 30
#define TAM_USERS 5

typedef struct {
  char userID[TAM_ID];
  char nome[30];
  int cont;
} tipo_usuario;

/* Variável Global - Tabela de Usuários do Sistema */
tipo_usuario usuarios[TAM_USERS] = {
    {"joaos", "joao da silva", 0},   {"marias", "maria da silva", 0},
    {"joses", "jose da silva", 0},   {"laras", "lara da silva", 0},
    {"eraldo", "eraldo e silva", 0},
};

/* Função que busca um usuário na tabela:
 * ENTRADA: string correspondente ao userID
 * SAIDA (retorno): retorna -1 se usuário não existe ou retorna o índice
 * do usuário na tabela
 */
int buscar_indice_usuario(char userID[]) {
  int i, flag = 1;

  for (i = 0; i < TAM_USERS && flag; i++) {
    if (strcmp(userID, usuarios[i].userID) == 0)
      flag = 0; /* encerra a busca - usuário encontrado */
  }
  printf("%d\n", flag);
  if (flag != 0)
    return -1;
  else
    return i - 1;
}

int main() {
  int i;
  char nome[30];
  printf("Nome a ser buscado\n");
  scanf("%s", nome);
  i = buscar_indice_usuario(nome);
  if (i > -1) printf("Nome completo = %s \n", usuarios[i].nome);
  return 0;
}