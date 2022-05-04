#include <errno.h>

#include <fstream>
#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
  ifstream arq(argv[1]);
  if (!arq.is_open()) {
    perror("arquivo invalido");
    return errno;
  }

  list<string> l, l2;
  list<int> vezes;

  string palavra;
  while (arq >> palavra) {
    l.push_back(palavra);
    l2.push_back(palavra);
  }
  l.sort();
  l.unique();

  for (auto& i : l) {
    int x = 0;
    for (auto& j : l2) {
      if (i == j) {
        x++;
      }
    }
    vezes.push_back(x);
  }

  for (auto it = l.begin(); it != l.end(); it++) {
    cout << *it << " " << vezes.front() << endl;
    vezes.pop_front();
  }
}