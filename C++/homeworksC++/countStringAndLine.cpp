#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
  string arquivo = argv[1];
  string frase, palavra;
  int w = 0;
  int x = 0;
  int y = 0;

  ifstream arq(arquivo);

  while (getline(arq, frase)) {  // le linha por linha
    w++;
  }
  arq.clear();
  arq.seekg(0);

  while (arq >> frase) {  // le palavra por palavra
    palavra += frase;
    palavra += " ";
  }

  while (x != string::npos) {
    int z = palavra.find_first_not_of(" \n\t.?:!;,", x);
    if (z == string::npos) break;
    y++;
    x = palavra.find_first_of(" \n\t.?:!;,", z);
  }
  cout << w << ' ' << y << ' ' << palavra.size() - 1 << endl;
}