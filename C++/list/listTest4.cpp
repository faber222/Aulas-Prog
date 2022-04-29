#include <iostream>
#include <list>

using namespace std;

int main() {
  list<int> l;

  l.push_back(23);
  l.push_back(42);
  l.push_back(108);
  l.push_front(16);
  l.push_front(15);
  l.push_front(8);
  l.push_front(4);

  cout << l.back() << " " << l.front() << endl;

  int n = (l.back() - l.front()) / 3;
  for (auto it = l.begin(); it != l.end();) {
    if (*it <= n) {
      auto jt = it;
      it++;
      l.erase(jt);
    } else {
      it++;
    }
  }

  for (auto& x : l) {
    cout << x << endl;
  }
}