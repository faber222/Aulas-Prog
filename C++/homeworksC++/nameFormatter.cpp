#include <iostream>
#include <string>

using namespace std;

string normaliza(string nome) {
  string teste, str, palavras;

  int x = nome.size();
  int z;

  z = nome.find_last_of(" \n\t.?:!;,", x);
  if (z == string::npos) {
    teste.erase();
    return teste;
  }

  teste = nome.substr(z + 1);
  str = nome.substr(0, z);

  palavras += teste;
  palavras += ", ";
  palavras += str;
  return palavras;
}

int main() {
  string frase, retorno;
  getline(cin, frase);
  retorno = normaliza(frase);
  cout << retorno << endl;
}