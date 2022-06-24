#include <iostream>
#include <string>

using namespace std;

// Esta função mostra informações sobre uma variável
// Ela é uma função template para funcionar com qualquer tipo de variável
// Parâmetros:
//  varname: nome da variável
//  val: uma referência à variável a ser mostrada

// g++ -std=c++11

template <typename T>

void mostra(const string& varname, T& val) {
  cout << "######################################################" << endl;

  // mostra o valor da variável
  cout << varname << " = " << val << endl;

  // mostra o endereço da variável
  T* ptr = &val;
  cout << "Endereço de " << varname << ": " << (void*)ptr << endl;

  // Mostra a quantidade de memória alocada à variável
  cout << "Memória alocada: " << sizeof(T) << " bytes" << endl;
}

int main() {
  // algumas variáveis
  // a memória para elas é alocada automaticamente
  int x = 35;
  float y = 3.1416;
  double h = 6.62607015e-34;
  char c = 'A';
  char v[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 0};

  mostra("x", x);
  mostra("y", y);
  mostra("h", h);
  mostra("c", c);
  mostra("v", v);
}