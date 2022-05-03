#include <errno.h>

#include <cctype>
#include <fstream>
#include <iostream>
#include <list>
#include <string>

using namespace std;

bool contem(const list<string>& l, const string& algo) {
  for (auto& w : l) {
    if (algo == w) {
      return true;
    }
  }
  return false;
}

int main(int argc, char* argv[]) {
  ifstream arq(argv[1]);
  if (!arq.is_open()) {
    perror("arquivo invalido");
    return errno;
  }

  list<string> lidas;

  string palavra;
  while (arq >> palavra) {
    int x = 0;
    x++;
    if (!contem(lidas, palavra)) {
      lidas.push_back(palavra);

    } else {
      x++;
    }
    lidas.push_back(to_string(x));
  }

  for (auto it = lidas.begin(); it != lidas.end();) {
    cout << *it;
    it++;
    cout << " " << *it;
    cout << endl;
  }
}