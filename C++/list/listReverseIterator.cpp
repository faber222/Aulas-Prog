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

  // Itera do fim até o início da lista
  // A variável "it" é o iterador, que será usado para acessar os dados da lista
  // Note como ao final de cada repetição do laço o iterador é incrementado ...
  // isso faz com que se retroceda para o dado anterior da lista

  for (auto it = numeros.rbegin(); it != numeros.rend(); it++) {
    // acessa o dado atual da iteração: ele é referenciado pelo iterador,
    // como se este fosse um ponteiro

    cout << "Numero: " << *it << endl;
  }
}