#include <iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

void separa(const string& algo, string sep, queue<string>& q) {
  int x = 0;
  string memoria;

  while (x != string::npos) {
    int z = algo.find_first_not_of(sep, x);
    if (z == string::npos) break;
    x = algo.find(sep, z);
    memoria = algo.substr(z, x - z);
    q.push(memoria);
  }
};

// reduz o "caminho", retornando como resultado o caminho reduzido
string reduz_caminho(const string& caminho) {
  stack<string> p1;
  stack<string> p2;
  queue<string> q1;
  string separador = "/";
  string z = "";
  string memoria, palavra;

  if (caminho.size() == 0) {
    return z;
  }

  separa(caminho, separador, q1);

  while (!q1.empty()) {
    memoria = q1.front();
    q1.pop();
    if (memoria.size() == 0) {
      return separador;
    }

    if (memoria != ".." && memoria != ".") {
      p1.push(memoria);
    } else if (memoria == "..") {
      if (!p1.empty()) {
        p1.pop();
      }
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

  if (palavra != z) {
    return palavra;
  } else {
    return separador;
  }
}

int main() {
  string entrada;
  getline(cin, entrada);
  entrada = reduz_caminho(entrada);
  cout << entrada << endl;
}