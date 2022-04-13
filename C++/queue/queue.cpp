#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
  // push: enfileira um dado
  // pop : desenfileira um dado(descarta - o)
  // front: retorna o dado que está na frente da fila
  // back: retorna o dado que está no fim da fila(último dado enfileirado)
  // size: retorna o comprimento da fila(quantos dados estão armazenados)
  // empty: retorna true se fila estiver vazia, e false caso contrário

  // uma fila que armazena números inteiros
  queue<int> numeros;

  // uma fila que armazena string
  queue<string> coisas;

  // push_back adiciona um dado no fim da fila
  numeros.push(6);
  numeros.push(8);
  numeros.push(10);
  numeros.push(12);

  coisas.push("banana");
  coisas.push("graviola");
  coisas.push("sapoti");
  coisas.push("siriguela");
  coisas.push("caju");

  cout << "Fila de numeros tem comprimento=" << numeros.size() << endl;
  cout << "Fila de string tem comprimento=" << coisas.size() << endl;

  while (!numeros.empty()) {
    cout << "Numero: " << numeros.front() << endl;
    numeros.pop();  // desenfileira um número
  }

  while (!coisas.empty()) {
    cout << "String: " << coisas.front() << endl;
    coisas.pop();  // desenfileira uma string
  }
}