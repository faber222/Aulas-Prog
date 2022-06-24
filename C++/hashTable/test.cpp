#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(int argc, char* argv[]) {
  ifstream arq(argv[1]);

  unordered_map<int, string> tab;
  int cadastro;
  string nome;
  while (arq >> nome >> cadastro) {
    tab[cadastro] = nome;
  }

  for (auto& par : tab) {
    cout << par.second << ": " << par.first << endl;
  }
}