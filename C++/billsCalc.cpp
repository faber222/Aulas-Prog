#include <stdlib.h>

#include <iostream>
#include <string>

using namespace std;

typedef struct {
  int one, two, five, ten, twenty, fifty, hundred, twoHundred;
} banknotes;

typedef struct {
  int fifty, twentyFive, ten, five, one;
} coins;

banknotes real;
coins cents;

int main(int argc, char *argv[]) {
  double moneyChange = atof(argv[1]);

  moneyChange = moneyChange * 100;

  real.twoHundred = 0;
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
      cents.one++;
      moneyChange = moneyChange - 1;
      if (cents.one != 0) {
        cout << " R$ 0,01: " << cents.one;
      }
    }
    if ((moneyChange >= 5) && (moneyChange < 10)) {
      cents.five++;
      moneyChange = moneyChange - 5;
      if (cents.five != 0) {
        cout << " R$ 0,05: " << cents.five;
      }
    }
    if ((moneyChange >= 10) && (moneyChange < 25)) {
      cents.ten++;
      moneyChange = moneyChange - 10;
      if (cents.ten != 0) {
        cout << " R$ 0,10: " << cents.ten;
      }
    }
    if ((moneyChange >= 25) && (moneyChange < 50)) {
      cents.twentyFive++;
      moneyChange = moneyChange - 25;
      if (cents.twentyFive != 0) {
        cout << " R$ 0,25: " << cents.twentyFive;
      }
    }
    if ((moneyChange >= 50) && (moneyChange < 100)) {
      cents.fifty++;
      moneyChange = moneyChange - 50;
      if (cents.fifty != 0) {
        cout << " R$ 0,50: " << cents.fifty;
      }
    }

    if ((moneyChange >= (1 * 100)) && (moneyChange < (2 * 100))) {
      real.one++;
      moneyChange = moneyChange - (1 * 100);
      if (real.one != 0) {
        cout << " R$ 1: " << real.one;
      }
    }
    if ((moneyChange >= (2 * 100)) && (moneyChange < (5 * 100))) {
      real.two++;
      moneyChange = moneyChange - (2 * 100);
      if (real.two != 0) {
        cout << " R$ 2: " << real.two;
      }
    }
    if ((moneyChange >= (5 * 100)) && (moneyChange < (10 * 100))) {
      real.five++;
      moneyChange = moneyChange - (5 * 100);
      if (real.five != 0) {
        cout << " R$ 5: " << real.five;
      }
    }
    if ((moneyChange >= (10 * 100)) && (moneyChange < (20 * 100))) {
      real.ten++;
      moneyChange = moneyChange - (10 * 100);
      if (real.ten != 0) {
        cout << " R$ 10: " << real.ten;
      }
    }
    if ((moneyChange >= (20 * 100)) && (moneyChange < (50 * 100))) {
      real.twenty++;
      moneyChange = moneyChange - (20 * 100);
      if (real.twenty != 0) {
        cout << " R$ 20: " << real.twenty;
      }
    }
    if ((moneyChange >= (50 * 100)) && (moneyChange < (100 * 100))) {
      real.fifty++;
      moneyChange = moneyChange - (50 * 100);
      if (real.fifty != 0) {
        cout << " R$ 50: " << real.fifty;
      }
    }
    if ((moneyChange >= (100 * 100)) && (moneyChange < (200 * 100))) {
      real.hundred++;
      moneyChange = moneyChange - (100 * 100);
      if (real.hundred != 0) {
        cout << " R$ 100: " << real.hundred;
      }
    }
    if (moneyChange >= (200 * 100)) {
      real.twoHundred++;
      moneyChange = moneyChange - (200 * 100);
      if (real.twoHundred != 0) {
        cout << " R$ 200: " << real.twoHundred;
      }
    }
  }

  cout << endl;
}
