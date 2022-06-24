#include <iostream>
#include <string>

using namespace std;

// g++ -std=c++11

template <typename T>
void mostra(const string& varname, T* val) {
  cout << "######################################################" << endl;
  cout << "Dado apontado por " << varname << " = " << *val << endl;
  cout << "Endereço da área de memória usada por " << varname << ": "
       << (void*)val << endl;
  cout << "Memória alocada: " << sizeof(*val) << " bytes" << endl;
}

int main() {
  // algumas variáveis
  // a memória para elas é alocada automaticamente
  int* x;
  double* h;

  // aloca dinamicamente memória para um valor do tipo int
  x = new int;
  // new is like malloc

  // aloca dinamicamente memória para um valor do tipo double
  h = new double;

  // armazena valores nas áreas de memória alocadas, usando-se
  // os ponteiros
  *x = 35;
  *h = 6.6260715e-34;

  // ou

  /*
  // aloca dinamicamente memória para um valor do tipo int e depois para um
  double
  // e armazena valores nas áreas de memória alocadas
  x = new int(35);

  // aloca dinamicamente memória para um valor do tipo double
  h = new double(6.6260715e-34);

  mostra("x", x);
  mostra("h", h);
  */

  mostra("x", x);
  mostra("h", h);

  // libera as áreas de memória
  delete x;
  delete h;
}