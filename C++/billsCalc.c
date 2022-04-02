//#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int one, two, five, ten, twenty, fifty, hundred;
} banknotes;

typedef struct {
  int fifty, twentyFive, ten, five, one;
} coins;

int main(void) {
  banknotes real;
  coins cents;

  double purchase, received, moneyChange, storage;

  system("cls");
  printf("Purchase value: ");
  scanf("%lf", &purchase);
  printf("Received value: ");
  scanf("%lf", &received);
  system("cls");

  if (purchase < received) {
    purchase = purchase * 100;
    received = received * 100;

    moneyChange = received - purchase;
    storage = moneyChange;

    // CONTADOR DE DINHEIRO
    real.hundred = 0;
    real.fifty = 0;
    real.twenty = 0;
    real.ten = 0;
    real.five = 0;
    real.two = 0;
    real.one = 0;

    cents.fifty = 0;
    cents.twentyFive = 0;
    cents.ten = 0;
    cents.five = 0;
    cents.one = 0;

    while (moneyChange > 0) {
      if ((moneyChange >= 1) && (moneyChange < 5)) {
        cents.one = cents.one + 1;
        moneyChange = moneyChange - 1;
      }
      if ((moneyChange >= 5) && (moneyChange < 10)) {
        cents.five = cents.five + 1;
        moneyChange = moneyChange - 5;
      }
      if ((moneyChange >= 10) && (moneyChange < 25)) {
        cents.ten = cents.ten + 1;
        moneyChange = moneyChange - 10;
      }
      if ((moneyChange >= 25) && (moneyChange < 50)) {
        cents.twentyFive = cents.twentyFive + 1;
        moneyChange = moneyChange - 25;
      }
      if ((moneyChange >= 50) && (moneyChange < 100)) {
        cents.fifty = cents.fifty + 1;
        moneyChange = moneyChange - 50;
      }

      if ((moneyChange >= (1 * 100)) && (moneyChange < (2 * 100))) {
        real.one = real.one + 1;
        moneyChange = moneyChange - (1 * 100);
      }
      if ((moneyChange >= (2 * 100)) && (moneyChange < (5 * 100))) {
        real.two = real.two + 1;
        moneyChange = moneyChange - (2 * 100);
      }
      if ((moneyChange >= (5 * 100)) && (moneyChange < (10 * 100))) {
        real.five = real.five + 1;
        moneyChange = moneyChange - (5 * 100);
      }
      if ((moneyChange >= (10 * 100)) && (moneyChange < (20 * 100))) {
        real.ten = real.ten + 1;
        moneyChange = moneyChange - (10 * 100);
      }
      if ((moneyChange >= (20 * 100)) && (moneyChange < (50 * 100))) {
        real.twenty = real.twenty + 1;
        moneyChange = moneyChange - (20 * 100);
      }
      if ((moneyChange >= (50 * 100)) && (moneyChange < (100 * 100))) {
        real.fifty = real.fifty + 1;
        moneyChange = moneyChange - (50 * 100);
      }
      if (moneyChange >= (100 * 100)) {
        real.hundred = real.hundred + 1;
        moneyChange = moneyChange - (100 * 100);
      }
    }

    printf("+-----------------------------------------------+\n");
    printf("| PURCHASE VALUE: %-30lf|\n", purchase / 100);
    printf("| RECEIVED VALUE: %-30lf|\n", received / 100);
    printf("| MONEY CHANGE VALUE: %-26lf|\n", storage / 100);
    printf("+-----------------------------------------------+\n");
    printf("|                                               |\n");
    printf("|    VALUE  |    AMOUNT                         |\n");
    printf("|    R$0.01 |    %-10d                     |\n", cents.one);
    printf("|    R$0.05 |    %-10d                     |\n", cents.five);
    printf("|    R$0.10 |    %-10d                     |\n", cents.ten);
    printf("|    R$0.25 |    %-10d                     |\n", cents.twentyFive);
    printf("|    R$0.50 |    %-10d                     |\n", cents.fifty);
    printf("|    R$1    |    %-10d                     |\n", real.one);
    printf("|    R$2    |    %-10d                     |\n", real.two);
    printf("|    R$5    |    %-10d                     |\n", real.five);
    printf("|    R$10   |    %-10d                     |\n", real.ten);
    printf("|    R$20   |    %-10d                     |\n", real.twenty);
    printf("|    R$50   |    %-10d                     |\n", real.fifty);
    printf("|    R$100  |    %-10d                     |\n", real.hundred);
    printf("|                                               |\n");
    printf("+-----------------------------------------------+\n");
  }
}
