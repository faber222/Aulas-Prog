#include <iostream>
#include <list>

using namespace std;

int main() {
  list<int> numeros;

  numeros.push_back(34);
  numeros.push_back(7);
  numeros.push_back(21);
  numeros.push_back(8);
  numeros.push_back(12);
  numeros.push_back(17);

  // ordena a lista
  numeros.sort();

  // ... e agora a inverte, para obter um ordenamento decrescente
  numeros.reverse();

  // apresenta a lista
  for (auto& x : numeros) {
    cout << x << endl;
  }
}