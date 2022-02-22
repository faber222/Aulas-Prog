#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  struct TUsuario /* struct TUsuario é o nome do tipo que está sendo criado */
  {
    char userID[20];
    char senha[20];
    int num_acessos;
  } Usuario, TabelaUsuario[20];

  /* acessando os campos da estrutura Usuario */
  scanf("%s", Usuario.userID);
  scanf("%s", Usuario.senha);
  Usuario.num_acessos = 0;

  /* acessando o campo 10 da tabela de estruturas */
  scanf("%s", TabelaUsuario[10].userID);
  scanf("%s", TabelaUsuario[10].senha);
  TabelaUsuario[10].num_acessos = 0;

  printf("%s\n", Usuario.userID);
  printf("%s\n", Usuario.senha);
  printf("%s\n", TabelaUsuario[10].userID);
  printf("%s\n", TabelaUsuario[10].senha);

  return 0;
}