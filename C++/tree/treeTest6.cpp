#include <prglib.h>

#include <fstream>
#include <iostream>
#include <list>
#include <queue>
#include <string>
#include <unordered_map>

using namespace std;

using prglib::arvore;

struct teste {
  string x;
  int y;
};

void separa(const string& algo, char sep, arvore<string>& q) {
  int x = 0;
  string memoria;
  teste lista;
  unordered_map<int, string> tab;
  list<string> l;

  while (x != string::npos) {
    int z = algo.find_first_not_of(sep, x);
    if (z == string::npos) break;
    x = algo.find(sep, z);
    memoria = algo.substr(z, x - z);
    l.push_back(memoria);
    cout << memoria << endl;
  }

  lista.x = l.begin();
  lista.y = l.end();
};

int main(int argc, char** argv) {
  ifstream arq("nomes.txt");
  string x;
  arvore<string> a;
  while (getline(arq, x)) {
    separa(x, ',', a);
  }

  string y;
  while (true) {
    cout << "Consultar>";
    getline(cin, y);
    if (y == "") {
      return false;
    }
    try {
      auto& x = a.obtem(y);
      cout << y << ": EXISTE ";
    } catch (...) {
      cout << y << ": INEXISTENTE ";
    }
    cout << endl;
  }
}