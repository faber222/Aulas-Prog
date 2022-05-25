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
  int w = stoi(x);

  while (arq >> produto) {
    l2.push_back(produto);
  }

  for (auto& palavra : l2) {
    int qtde = 0;
    if (totais.count(palavra) > 0) {
      qtde++;
      totais[palavra] += qtde;
    } else {
      qtde++;
      totais[palavra] = qtde;
    }
  }

  for (auto& i : totais) {
    tab[i.second].push_back(i.first);
  }

  for (auto& x : tab) {
    l.push_back(x.first);
  }

  for (auto& y : l) {
    for (auto& z : tab[y]) {
      if (count >= w) {
        break;
      }
      cout << z << " " << y << " ";
      count++;
    }
  }
}
