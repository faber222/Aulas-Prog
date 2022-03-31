#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main() {
  int compra, recebido, troco, lembratroco, um, dois, cinco, dez, vinte, cinque,
      cem;
  system("cls");
  printf("#### USE APENAS VALORES INTEIROS ####\n\n");
  printf("Valor da compra: ");
  scanf("%d", &compra);
  printf("Valor recebido: ");
  scanf("%d", &recebido);
  system("cls");

  if (compra > recebido) {
    printf(
        "VOCE NAO PODE ESPICIFICAR UM VALOR RECEBIDO MENOR QUE O VALOR DA "
        "COMPRA!\n\n");
  } else {
    troco = recebido - compra;
    lembratroco = troco;
    cem = 0;
    cinque = 0;
    vinte = 0;
    dez = 0;
    cinco = 0;
    dois = 0;
    um = 0;

    while (troco > 0) {
      if (troco == 1) {
        um = um + 1;
        troco = troco - 1;
      }
      if ((troco >= 2) && (troco < 5)) {
        dois = dois + 1;
        troco = troco - 2;
      }
      if ((troco >= 5) && (troco < 10)) {
        cinco = cinco + 1;
        troco = troco - 5;
      }
      if ((troco >= 10) && (troco < 20)) {
        dez = dez + 1;
        troco = troco - 10;
      }
      if ((troco >= 20) && (troco < 50)) {
        vinte = vinte + 1;
        troco = troco - 20;
      }
      if ((troco >= 50) && (troco < 100)) {
        cinque = cinque + 1;
        troco = troco - 50;
      }
      if (troco >= 100) {
        cem = cem + 1;
        troco = troco - 100;
      }
    }

    printf("+-----------------------------------------------+\n");
    printf("|                     TROCO                     |\n");
    printf("|                                               |\n");
    printf("| VALOR DA COMPRA: %-29d|\n", compra);
    printf("| VALOR RECEBIDO: %-30d|\n", recebido);
    printf("| VALOR DO TROCO: %-30d|\n", lembratroco);
    printf("+-----------------------------------------------+\n");
    printf("|           CEDULAS A SEREM ENTREGUES           |\n");
    printf("|                                               |\n");
    printf("|    VALOR  |    QUANTIDADE                     |\n");
    printf("|    R$1    |    %-10d                     |\n", um);
    printf("|    R$2    |    %-10d                     |\n", dois);
    printf("|    R$5    |    %-10d                     |\n", cinco);
    printf("|    R$10   |    %-10d                     |\n", dez);
    printf("|    R$20   |    %-10d                     |\n", vinte);
    printf("|    R$50   |    %-10d                     |\n", cinque);
    printf("|    R$100  |    %-10d                     |\n", cem);
    printf("|                                               |\n");
    printf("+-----------------------------------------------+\n");
  }
  getch();
  main();
}