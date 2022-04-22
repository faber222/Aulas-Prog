#include <cstring>
#include <iostream>
#include <stack>
#include <string>

using namespace std;

// reduz o "caminho", retornando como resultado o caminho reduzido
string reduz_caminho(const string& caminho) {
  stack<string> p1;
  stack<string> p2;
  int x = 0;
  string separador = "/";
  string memoria, palavra;
  if (caminho.size() == 0) {
    return "/";
  }

  while (x != string::npos) {
    int z = caminho.find_first_not_of(separador, x);
    if (z == string::npos) break;
    x = caminho.find(separador, z);
    memoria = caminho.substr(z, (x - z));
    if (memoria.size() == 0) {
      return "/";
    }

    if (memoria != ".." && memoria != ".") {
      p1.push(memoria);
    } else if (memoria == "..") {
      p1.pop();
    }
  }

  while (!p1.empty()) {
    p2.push(p1.top());
    p1.pop();
  }
  while (!p2.empty()) {
    palavra += '/';
    palavra += p2.top();
    p2.pop();
  }
  return palavra;
}

int main() {
  string entrada;
  getline(cin, entrada);
  entrada = reduz_caminho(entrada);
  cout << entrada << endl;
}