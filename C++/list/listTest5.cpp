#include <iostream>
#include <list>

using namespace std;

void mostra(const list<int>& l) {
  for (auto& x : l) {
    cout << x << endl;
  }
}

int main() {
  list<int> l = {4, 8, 15, 16, 23, 42, 108};
  int n;

  cout << "Digite um número: ";
  cin >> n;

  if (n > l.back())
    l.push_back(n);
  else {
    for (auto it = l.begin(); it != l.end(); it++) {
      if (*it > n) {
        l.insert(it, n);
        break;
      }
    }
  }

  mostra(l);
}