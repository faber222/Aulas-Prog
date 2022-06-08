#include <prglib.h>

#include <fstream>
#include <iostream>
#include <list>
#include <string>

using namespace std;

using prglib::arvore;

int main(int argc, char** argv) {
  ifstream arq("nomes.txt");
  string x;
  arvore<string> a;
  while (getline(arq, x)) {
    a.adiciona(x);
  }

  string y;
  while (true) {
    cout << "Consultar>";
    getline(cin, y);
    if (y == "") {
      return false;
    }
    try {
      auto& x = a.obtem(y);
      cout << y << ": EXISTE ";
    } catch (...) {
      cout << y << ": INEXISTENTE ";
    }
    cout << endl;
  }
}