#include <cctype>
#include <fstream>
#include <iostream>
#include <list>
#include <string>
#include <unordered_map>

using namespace std;

int main(int argc, char* argv[]) {
  ifstream arq(argv[1]);
  string x = argv[2];
  list<int> l;
  list<string> l2;
  string palavraCapturada;
  int count = 0;

  unordered_map<string, int> totais;
  unordered_map<int, list<string>> tab;

  string produto;
  int y = stoi(x);

  while (arq >> produto) {
    int qtde = 0;
    if (totais.count(produto) > 0) {
      totais[produto]++;
    } else {
      qtde++;
      totais[produto] = qtde;
    }
  }

  for (auto& i : totais) {
    tab[i.second].push_back(i.first);
  }

  for (auto& x : tab) {
    l.push_back(x.first);
  }
  l.sort();
  for (auto& y : l) {
    for (auto& z : tab[y]) {
      cout << z << " " << y << " ";
      count++;
      if (count >= y) {
        break;
      }
    }
  }
  /*
    for (auto& par : totais) {
      cout << par.first << " " << par.second << endl;
      count++;
      if (count >= y) {
        break;
      }
    }*/
}
