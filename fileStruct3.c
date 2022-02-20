#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct TEndereco {
  char rua[50];
  char numero[10];
};

struct TCidadao {
  char nome[50];
  char cpf[20];
  struct TEndereco endereco;
  int num_filhos;
};

void print_cidadao(struct TCidadao aux) {
  printf("Nome: %s - CPF: %s\n", aux.nome, aux.cpf);
  printf("Rua %s Número %s\n", aux.endereco.rua, aux.endereco.numero);
  printf("Numero de filhos %d\n", aux.num_filhos);
}

int main(void) {
  struct TCidadao Cidadao;

  printf("Entre com o nome\n");
  scanf("%[^\n]s", Cidadao.nome);
  getchar();

  printf("Entre com o cpf\n");
  scanf("%[^\n]s", Cidadao.cpf);
  getchar();

  printf("Entre a rua\n");
  scanf("%[^\n]s", Cidadao.endereco.rua);
  getchar();

  printf("Entre a numero\n");
  scanf("%[^\n]s", Cidadao.endereco.numero);
  getchar();

  printf("Entre com o número de filhos\n");
  scanf("%d", &Cidadao.num_filhos);

  print_cidadao(Cidadao);
  return 0;
}