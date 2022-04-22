#include <errno.h>

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int separa(const string& algo) {
  int x = 0;
  int i = 0;

  while (x != string::npos) {
    int z = algo.find_first_not_of(" ", x);
    if (z == string::npos) break;
    i++;
    x = algo.find_first_of(" ", z);
  }
  return i;
};

int main(int argc, char* argv[]) {
  string arquivo = argv[1];
  string frase, palavra, novoArquivo;
  int w = 0;
  int y = 0;

  ifstream arq(arquivo);

  if (!arq.is_open()) {
    cerr << "Algum erro ao abrir o arquivo ..." << endl;
    perror("erro");
    return 0;
  }

  while (getline(arq, frase)) {  // le linha por linha
    novoArquivo += frase;
    novoArquivo += " ";
    w++;
  }
  int k = novoArquivo.size();

  if (k != 0) {
    k + 1;
  }

  arq.clear();
  arq.seekg(0);

  while (arq >> frase) {  // le palavra por palavra
    palavra += frase;
    palavra += " ";
  }

  y = separa(palavra);

  cout << w << ' ' << y << ' ' << k << endl;
}