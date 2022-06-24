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
  int count = 0;

  unordered_map<string, int> totais;
  unordered_map<int, list<string>> tab;

  string palavra;
  int w = stoi(x);

  while (arq >> palavra) {
    if (totais.count(palavra) > 0) {
      totais[palavra]++;
    } else {
      totais[palavra] = 1;
    }
  }

  for (auto& i : totais) {
    tab[i.second].push_back(i.first);
  }

  for (auto& x : tab) {
    l.push_back(x.first);
  }
  l.sort();
  l.reverse();

  for (auto& y : l) {
    tab[y].sort();
    for (auto& z : tab[y]) {
      if (count >= w) {
        break;
      }
      cout << z << " " << y << " ";
      count++;
    }
  }
}
