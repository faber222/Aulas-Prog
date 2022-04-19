#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() {
  char separador = ' ';
  string frase, palavra, palavra2;
  stack<string> leitura;
  queue<string> leitura2;
  getline(cin, frase);

  int x = 0;
  string memoria;

  while (x != string::npos) {
    int z = frase.find_first_not_of(separador, x);
    if (z == string::npos) break;
    x = frase.find(separador, z);
    memoria = frase.substr(z, (x - z));
    leitura.push(memoria);
    leitura2.push(memoria);
  }
  while (!leitura.empty()) {
    palavra += leitura.top();
    leitura.pop();
  }
  while (!leitura2.empty()) {
    palavra2 += leitura2.front();
    leitura2.pop();
  }

  if (palavra2 == palavra) {
    cout << "VERDADEIRO";
  } else {
    cout << "FALSO";
  }
}