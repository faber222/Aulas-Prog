#include <fstream>
#include <iostream>
#include <list>
#include <string>
#include <unordered_map>

using namespace std;

int main(int argc, char* argv[]) {
  ifstream arq(argv[1]);

  unordered_map<int, list<string>> tab;

  list<int> l;
  list<string> l2;
  string palavraCapturada;

  if (!arq.is_open()) {
    cout << "Arquivo invalido " << endl;
    return 0;
  }
  while (arq >> palavraCapturada) {
    tab[palavraCapturada.size()].push_back(palavraCapturada);
  }

  for (auto& x : tab) {
    l.push_back(x.first);
  }
  l.sort();
  for (auto& y : l) {
    for (auto& z : tab[y]) {
      cout << z << " " << y;
    }
    cout << endl;
  }
}