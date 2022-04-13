#include <iostream>
#include <string>

using namespace std;

string normaliza(string character) {
  string teste, nome;

  int x = character.size();
  int z;

  z = character.find_last_of(" \n\t.?:!;,", x);
  if (z == string::npos) {
    return teste;
  }

  teste = character.substr(z + 1);
  nome = character.substr(0, z);

  cout << teste << ", " << nome << endl;
}

int main(void) {
  string frase;
  getline(cin, frase);
  normaliza(frase);
}