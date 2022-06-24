#include <fstream>
#include <iostream>
#include <list>
#include <string>
#include <unordered_set>

using namespace std;

int main(int argc, char* argv[]) {
  ifstream arq(argv[1]);
  list<string> l;
  string n;
  while (arq >> n) {
    l.push_back(n);
  }

  unordered_set<string> conj;

  for (auto& x : l) {
    conj.insert(x);
  }

  l.clear();
  for (auto& x : conj) {
    l.push_back(x);
  }
  l.sort();
  for (auto& j : l) {
    cout << j << endl;
  }
}