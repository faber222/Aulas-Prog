#include <iostream>
#include <list>

using namespace std;

void insere_ordenado(list<int>& l, const int& algo) {
  if (algo > l.back())
    l.push_back(algo);
  else {
    for (auto it = l.begin(); it != l.end(); it++) {
      if (*it > algo) {
        l.insert(it, algo);
        break;
      }
    }
  }
}

int main() {
  list<int> l = {4, 8, 15, 16, 23, 42, 108};
  int n;

  for (auto& x : l) {
    cout << x << " ";
  }
  cout << endl;

  cout << "Digite um número: ";
  cin >> n;

  insere_ordenado(l, n);
  for (auto& x : l) {
    cout << x << " ";
  }
}