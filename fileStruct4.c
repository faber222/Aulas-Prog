#include <stdio.h>

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

struct TCidadao ler_struct() {
  struct TCidadao aux;

  printf("Entre com o nome\n");
  scanf("%s", aux.nome);

  printf("Entre com o cpf\n");
  scanf("%s", aux.cpf);

  printf("Entre a rua\n");
  scanf("%s", aux.endereco.rua);

  printf("Entre a numero\n");
  scanf("%s", aux.endereco.numero);

  printf("Entre com o número de filhos\n");
  scanf("%d", &aux.num_filhos);

  return aux;
}

void print_struct(struct TCidadao aux) {
  printf("nome=%s cpf=%s\n", aux.nome, aux.cpf);
  printf("endereço inicial do aux %p\n", &aux);
}

void main() {
  struct TCidadao Cidadao;

  Cidadao = ler_struct();

  print_struct(Cidadao);

  printf("endereço inicial do Cidadao %p\n", &Cidadao);
}
