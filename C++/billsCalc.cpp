#include <iostream>
#include <string>

using namespace std;

typedef struct {
  int um, dois, cinco, dez, vinte, cinquenta, cem, duzentos;
} cedulas;

typedef struct {
  int cinquenta, vinteCinco, dez, cinco, um;
} moedas;

double troco;
cedulas reais;
moedas centavos;

int result(void) {
  if (reais.duzentos != 0) {
    cout << " R\\$ 200: " << reais.duzentos;
  }
  if (reais.cem != 0) {
    cout << " R\\$ 100: " << reais.cem;
  }
  if (reais.cinquenta != 0) {
    cout << " R\\$ 50: " << reais.cinquenta;
  }
  if (reais.vinte != 0) {
    cout << " R\\$ 20: " << reais.vinte;
  }
  if (reais.dez != 0) {
    cout << " R\\$ 10: " << reais.dez;
  }
  if (reais.cinco != 0) {
    cout << " R\\$ 5: " << reais.cinco;
  }
  if (reais.dois != 0) {
    cout << " R\\$ 2: " << reais.dois;
  }
  if (reais.um != 0) {
    cout << " R\\$ 1: " << reais.um;
  }
  if (centavos.cinquenta != 0) {
    cout << " R\\$ 0,50: " << centavos.cinquenta;
  }
  if (centavos.vinteCinco != 0) {
    cout << " R\\$ 0,25: " << centavos.vinteCinco;
  }
  if (centavos.dez != 0) {
    cout << " R\\$ 0,10: " << centavos.dez;
  }
  if (centavos.cinco != 0) {
    cout << " R\\$ 0,05: " << centavos.cinco;
  }
  if (centavos.um != 0) {
    cout << " R\\$ 0,01: " << centavos.um;
  }
}

int main() {
  cout << "R$ ";
  cin >> troco;

  troco = troco * 100;

  // CONTADOR DE DINHEIRO
  reais.duzentos = 0;
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
      centavos.um++;
      troco = troco - 1;
    }
    if ((troco >= 5) && (troco < 10)) {
      centavos.cinco++;
      troco = troco - 5;
    }
    if ((troco >= 10) && (troco < 25)) {
      centavos.dez++;
      troco = troco - 10;
    }
    if ((troco >= 25) && (troco < 50)) {
      centavos.vinteCinco++;
      troco = troco - 25;
    }
    if ((troco >= 50) && (troco < 100)) {
      centavos.cinquenta++;
      troco = troco - 50;
    }

    if ((troco >= (1 * 100)) && (troco < (2 * 100))) {
      reais.um++;
      troco = troco - (1 * 100);
    }
    if ((troco >= (2 * 100)) && (troco < (5 * 100))) {
      reais.dois++;
      troco = troco - (2 * 100);
    }
    if ((troco >= (5 * 100)) && (troco < (10 * 100))) {
      reais.cinco++;
      troco = troco - (5 * 100);
    }
    if ((troco >= (10 * 100)) && (troco < (20 * 100))) {
      reais.dez++;
      troco = troco - (10 * 100);
    }
    if ((troco >= (20 * 100)) && (troco < (50 * 100))) {
      reais.vinte++;
      troco = troco - (20 * 100);
    }
    if ((troco >= (50 * 100)) && (troco < (100 * 100))) {
      reais.cinquenta++;
      troco = troco - (50 * 100);
    }
    if (troco >= (100 * 100) && (troco < (200 * 100))) {
      reais.cem++;
      troco = troco - (100 * 100);
    }
    if (troco >= (200 * 100)) {
      reais.duzentos++;
      troco = troco - (200 * 100);
    }
  }
  result();
}
