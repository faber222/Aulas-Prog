#include <iostream>
#include <list>

using namespace std;

void mostra(const list<int>& l) {
  for (auto& x : l) {
    cout << x << endl;
  }
}

int second() {
  list<int> l;

  cout << "Digite números para armazenar na lista" << endl;
  cout << "Quando terminar, tecle somente ENTER" << endl;
  while (true) {
    string n;

    cout << "Número: ";
    getline(cin, n);
    if (n.empty()) break;
    l.push_back(stoi(n));
  }

  l.reverse();
  l.sort();
  cout << endl;
  mostra(l);
}

int main() {
  list<int> l;

  cout << "Digite números para armazenar na lista" << endl;
  cout << "Quando terminar, tecle somente ENTER" << endl;

  while (true) {
    string n;

    cout << "Número: ";
    getline(cin, n);
    if (n.empty()) break;
    l.push_back(stoi(n));
  }

  // remove os numeros repetidos
  if (l.size() > 1) {
    l.sort();

    list<int>::iterator it1 = l.begin();
    list<int>::iterator it2 = it1;
    it2++;

    while (it2 != l.end()) {
      if (*it1 == *it2) l.erase(it1);
      it1 = it2;
      it2++;
    }
  }

  cout << endl;
  mostra(l);
}