#include <errno.h>

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
    if (!contem(lidas, palavra)) {
      cout << palavra << endl;
      lidas.push_back(palavra);
    }
  }
}