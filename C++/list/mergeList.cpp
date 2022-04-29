#include <iostream>
#include <list>

using namespace std;

list<int> mescla(const list<int>& l1, const list<int>& l2) {
  list<int> lista, lista2;
  int n;
  for (auto it = l1.begin(); it != l1.end(); it++) {
    lista.push_back(*it);
  }
  for (auto it = l2.begin(); it != l2.end(); it++) {
    lista2.push_back(*it);
  }

  while (!lista2.empty()) {
    n = lista2.front();
    lista2.pop_front();

    if (n > lista.back() || n == lista.back())
      lista.push_back(n);
    else {
      for (auto it = lista.begin(); it != lista.end(); it++) {
        if (*it > n) {
          lista.insert(it, n);
          break;
        }
      }
    }
  }
  return lista;
}

int main() {
  list<int> l = {1, 2, 6, 7, 9, 11};
  list<int> m = {1, 3, 4, 8, 10};
  list<int> o;

  o = mescla(l, m);
  while (!o.empty()) {
    cout << o.front() << ",";
    o.pop_front();
  }
}
