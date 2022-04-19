#include <iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

int main() {
  // uma pilha para armazenar inteiros
  stack<int> numeros;
  queue<int> valores;

  numeros.push(6);
  numeros.push(8);
  numeros.push(10);
  numeros.push(12);
  valores.push(6);
  valores.push(8);
  valores.push(10);
  valores.push(12);

  cout << "Pilha de numeros tem comprimento=" << numeros.size() << endl;

  while (!numeros.empty()) {
    int x = numeros.top();
    numeros.pop();

    cout << "Topo da pilha: " << x << " e o desempilhou ..." << endl;
  }
  while (!valores.empty()) {
    int x = valores.front();
    valores.pop();

    cout << "Topo da pilha: " << x << " e o desempilhou ..." << endl;
  }
}