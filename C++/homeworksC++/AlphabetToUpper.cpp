#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

int main() {
  list<string> list = {"a", "b", "c", "d", "e", "f", "g", "h", "i",
                       "j", "k", "l", "m", "n", "o", "p", "q", "r",
                       "s", "t", "u", "v", "w", "x", "y", "z"};

  for (auto& x : list) {
    transform(x.begin(), x.end(), x.begin(), ::toupper);
    cout << x << endl;
  }
}