#include <iostream>
#include <list>

using namespace std;

int main() {
  list<int> l = {4, 8, 15, 16, 23, 42, 108};
  int x = 27;

  list<int>::iterator it = l.begin();
  for (; it != l.end(); it++) {
    if (*it >= x) break;
    cout << *it << endl;
  }
}