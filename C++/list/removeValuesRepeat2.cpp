#include <fstream>
#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
  ifstream arq(argv[1]);
  list<string> l;
  string n;

  while (arq >> n) {
    l.push_back(n);
  }

  if (l.size() > 1) {
    l.sort();
    while (!l.empty()) {
      cout << l.front() << " ";
      l.remove(l.front());
    }
  }
}