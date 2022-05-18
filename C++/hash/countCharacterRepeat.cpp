#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(int argc, char* argv[]) {
  ifstream arq(argv[1]);
  unordered_map<string, int> totais;

  string produto;

  while (arq >> produto) {
    int qtde = 0;
    if (totais.count(produto) > 0) {
      qtde++;
      totais[produto] += qtde;
    } else {
      qtde++;
      totais[produto] = qtde;
    }
  }

  for (auto& par : totais) {
    cout << par.first << " " << par.second << endl;
  }
}
