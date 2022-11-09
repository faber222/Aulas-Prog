#include <math.h>

#include <cctype>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

long double functionA(int a) { return (exp(a) - pow(a, 3)); }

long double calcX(int a, int b) { return ((a + b) / 2); }

int main(int argc, char *argv[]) {
  long double a = 1;
  long double b = 2;
  long double x;
  long double E = pow(10, -15);
  long double k = 10;

  fstream arq(argv[1]);  // abertura de arquivos em modo leitura e escrita

  if (!arq.is_open()) {
    cerr << "Algum erro ao abrir o arquivo ..." << endl;
    return 0;
  }

  while (k > E) {
    x = calcX(a, b);
    if ((functionA(a) * functionA(x)) > 0) {
      a = x;
    } else {
      b = x;
    }
    k = b - a;

    arq << k << endl;
  }

  return 0;
}

