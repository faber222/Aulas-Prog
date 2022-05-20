#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
  // usa-se o count para fazer uma verificação se a palavra existe no codigo
  unordered_map<string, int> tab;

  tab["uma"] = 111;
  tab["duas"] = 222;
  tab["tres"] = 333;

  cout << "Digite uma chave por vez para testar a tabela" << endl;
  cout << "Quando quiser encerrar, apenas tecle ENTER" << endl;
  while (true) {
    string k;

    cout << "Chave: ";
    getline(cin, k);
    if (k.empty()) break;

    if (tab.count(k)) {
      cout << "Chave " << k << " existe na tabela .. valor associado é "
           << tab[k] << endl;
    } else {
      cout << "Chave " << k << " NÃO existe na tabela !" << endl;
    }
  }
}