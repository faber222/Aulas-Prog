#include <fstream>
#include <iostream>

using namespace std;

#define MAX_LINE 10240

int main() {
  string x;
  cin >> x;
  fstream arq(x);  // abertura de arquivos em modo leitura e escrita

  if (not arq.is_open()) {
    cerr << "Algum erro ao abrir o arquivo ..." << endl;
    return 0;
  }

  for (int i = 0; i < 10; i++) {
    arq << "Linha " << i << endl;
  }
  arq.flush();

  arq.seekg(0);

  while (not arq.eof()) {
    char linha[MAX_LINE];

    arq.getline(linha, MAX_LINE);
    cout << "Leu: " << linha << endl;
  }
}