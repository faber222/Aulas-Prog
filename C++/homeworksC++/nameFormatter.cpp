#include <iostream>
#include <string>

using namespace std;

string normaliza(string character) {
  string teste, nome, palavras;

  int x = character.size();
  int z;

  z = character.find_last_of(" \n\t.?:!;,", x);
  if (z == string::npos) {
    teste.erase();
    return teste;
  }

  teste = character.substr(z + 1);
  nome = character.substr(0, z);

  palavras += teste;
  palavras += ", ";
  palavras += nome;
  return palavras;
}

int main(void) {
  string frase, retorno;
  getline(cin, frase);
  retorno = normaliza(frase);
  cout << retorno << endl;
}