#include <algorithm>
#include <cctype>
#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
  list<string> arq;
  list<string> list = {"a", "b", "c", "d", "e", "f", "g", "h", "i",
                       "j", "k", "l", "m", "n", "o", "p", "q", "r",
                       "s", "t", "u", "v", "w", "x", "y", "z"};

  for (auto& x : list) {
    transform(x.begin(), x.end(), x.begin(), ::toupper);
    arq.push_back(x);
  }
  for (auto& x : arq) {
    cout << x << endl;
  }
}