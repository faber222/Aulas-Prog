#include <fstream>
#include <iostream>
#include <list>
#include <string>

using namespace std;

void mostra(const list<int>& l) {
  for (auto& x : l) {
    cout << x << " ";
  }
}

int main(int argc, char* argv[]) {
  ifstream arq(argv[1]);
  string palavra;

  list<int> l;

  int n;
  while (arq >> n) {
    l.push_back(n);
  }

  // remove os numeros repetidos
  if (l.size() > 1) {
    l.sort();

    list<int>::iterator it1 = l.begin();
    list<int>::iterator it2 = it1;
    it2++;

    while (it2 != l.end()) {
      if (*it1 == *it2) {
        l.erase(it1);
      }
      it1 = it2;
      it2++;
    }
  }
  mostra(l);
}
