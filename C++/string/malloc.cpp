#include <iostream>
#include <string>

using namespace std;

void mostra(const string& varname, double* val) {
  cout << "######################################################" << endl;
  cout << "Dado apontado por " << varname << " = " << *val << endl;
  cout << "Endereco da area de memoria usada por " << varname << ": "
       << (void*)val << endl;
  cout << "Memoria alocada: " << sizeof(*val) << " bytes" << endl;
}

int main() {
  // a memória para esta variável será alocada dinamicamente
  double* h;

  // aloca dinamicamente memória para um valor do tipo double
  h = new double;
  // h = new double(6.6260715e-34);

  // armazena valores na área de memória alocada, usando-se
  // o ponteiro
  *h = 6.6260715e-34;

  mostra("h", h);

  // libera a área de memória
  delete h;
}