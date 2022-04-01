//#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int um, dois, cinco, dez, vinte, cinquenta, cem;
} cedulas;

typedef struct {
  int cinquenta, vinteCinco, dez, cinco, um;
} moedas;

int main(void) {
  cedulas reais;
  moedas centavos;

  double compra, recebido, troco, lembratroco;

  system("cls");
  printf("#### USE APENAS VALORES INTEIROS ####\n\n");
  printf("Valor da compra: ");
  scanf("%lf", &compra);
  printf("Valor recebido: ");
  scanf("%lf", &recebido);
  system("cls");

  if (compra > recebido) {
    printf(
        "VOCE NAO PODE ESPICIFICAR UM VALOR RECEBIDO MENOR QUE O VALOR DA "
        "COMPRA!\n\n");
  } else {
    compra = compra * 100;
    recebido = recebido * 100;

    troco = recebido - compra;
    lembratroco = troco;

    // CONTADOR DE DINHEIRO
    reais.cem = 0;
    reais.cinquenta = 0;
    reais.vinte = 0;
    reais.dez = 0;
    reais.cinco = 0;
    reais.dois = 0;
    reais.um = 0;

    centavos.cinquenta = 0;
    centavos.vinteCinco = 0;
    centavos.dez = 0;
    centavos.cinco = 0;
    centavos.um = 0;

    while (troco > 0) {
      if ((troco >= 1) && (troco < 5)) {
        centavos.um = centavos.um + 1;
        troco = troco - 1;
      }
      if ((troco >= 5) && (troco < 10)) {
        centavos.cinco = centavos.cinco + 1;
        troco = troco - 5;
      }
      if ((troco >= 10) && (troco < 25)) {
        centavos.dez = centavos.dez + 1;
        troco = troco - 10;
      }
      if ((troco >= 25) && (troco < 50)) {
        centavos.vinteCinco = centavos.vinteCinco + 1;
        troco = troco - 25;
      }
      if ((troco >= 50) && (troco < 100)) {
        centavos.cinquenta = centavos.cinquenta + 1;
        troco = troco - 50;
      }

      if ((troco >= (1 * 100)) && (troco < (2 * 100))) {
        reais.um = reais.um + 1;
        troco = troco - (1 * 100);
      }
      if ((troco >= (2 * 100)) && (troco < (5 * 100))) {
        reais.dois = reais.dois + 1;
        troco = troco - (2 * 100);
      }
      if ((troco >= (5 * 100)) && (troco < (10 * 100))) {
        reais.cinco = reais.cinco + 1;
        troco = troco - (5 * 100);
      }
      if ((troco >= (10 * 100)) && (troco < (20 * 100))) {
        reais.dez = reais.dez + 1;
        troco = troco - (10 * 100);
      }
      if ((troco >= (20 * 100)) && (troco < (50 * 100))) {
        reais.vinte = reais.vinte + 1;
        troco = troco - (20 * 100);
      }
      if ((troco >= (50 * 100)) && (troco < (100 * 100))) {
        reais.cinquenta = reais.cinquenta + 1;
        troco = troco - (50 * 100);
      }
      if (troco >= (100 * 100)) {
        reais.cem = reais.cem + 1;
        troco = troco - (100 * 100);
      }
    }

    printf("+-----------------------------------------------+\n");
    printf("|                     TROCO                     |\n");
    printf("|                                               |\n");
    printf("| VALOR DA COMPRA: %-29lf|\n", compra / 100);
    printf("| VALOR RECEBIDO: %-30lf|\n", recebido / 100);
    printf("| VALOR DO TROCO: %-30lf|\n", lembratroco / 100);
    printf("+-----------------------------------------------+\n");
    printf("|           CEDULAS A SEREM ENTREGUES           |\n");
    printf("|                                               |\n");
    printf("|    VALOR  |    QUANTIDADE                     |\n");
    printf("|    R$0.01 |    %-10d                     |\n", centavos.um);
    printf("|    R$0.05 |    %-10d                     |\n", centavos.cinco);
    printf("|    R$0.10 |    %-10d                     |\n", centavos.dez);
    printf("|    R$0.25 |    %-10d                     |\n",
           centavos.vinteCinco);
    printf("|    R$0.50 |    %-10d                     |\n",
           centavos.cinquenta);
    printf("|    R$1    |    %-10d                     |\n", reais.um);
    printf("|    R$2    |    %-10d                     |\n", reais.dois);
    printf("|    R$5    |    %-10d                     |\n", reais.cinco);
    printf("|    R$10   |    %-10d                     |\n", reais.dez);
    printf("|    R$20   |    %-10d                     |\n", reais.vinte);
    printf("|    R$50   |    %-10d                     |\n", reais.cinquenta);
    printf("|    R$100  |    %-10d                     |\n", reais.cem);
    printf("|                                               |\n");
    printf("+-----------------------------------------------+\n");
  }
}
