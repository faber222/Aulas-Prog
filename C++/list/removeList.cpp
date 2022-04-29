#include <iostream>
#include <list>
#include <string>

using namespace std;

list<string> separa(const string& texto, char sep) {
  list<string> q;
  int x = 0;
  string memoria;

  while (x != string::npos) {
    int z = texto.find_first_not_of(sep, x);
    if (z == string::npos) break;
    x = texto.find(sep, z);
    memoria = texto.substr(z, x - z);
    q.push_back(memoria);
  }
  return q;
}

  /*
  string junta(list<string>& l, const char& delim) {
    string aux, outputString;

    if (l.empty()) return outputString;

    aux = l.front();
    l.pop_front();
    outputString += aux;

    while (!l.empty()) {
      aux = l.front();
      l.pop_front();
      outputString += delim + aux;
    }
    return outputString;
  }
  */

  void unicos(list<string> & l) {
    list<string> m;
    while (!l.empty()) {
      m.push_back(l.front());
      l.pop_front();
    }

    while (!m.empty()) {
      l.push_back(m.front());
      m.remove(m.front());
    }
  }

  int main() {
    list<string> lista = {"banana",  "laranja", "laranja", "abacaxi",
                          "pitanga", "pitanga", "pitanga", "limao"};
    unicos(lista);

    while (!lista.empty()) {
      cout << lista.front();
      lista.pop_front();
    }
  }