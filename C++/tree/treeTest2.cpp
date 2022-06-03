#include <prglib.h>

#include <fstream>
#include <iostream>
#include <list>
#include <string>

using namespace std;
using prglib::arvore;

int main(int argc, char* argv[]) {
  ifstream arq("dados.txt");
  arvore<string> a(arq);

  while (true) {
    string prefixo;

    cout << '>';
    getline(cin, prefixo);

    if (prefixo.empty()) break;

    string fim = prefixo;
    fim.back()++;

    list<string> r;
    a.obtemIntervalo(r, prefixo, fim);

    if (!r.empty()) {
      if (r.back() == fim) r.pop_back();
      r.sort();
      for (auto& palavra : r) {
        cout << palavra << ' ';
      }
      cout << endl;
    }
  }
}