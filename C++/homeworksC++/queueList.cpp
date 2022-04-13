#include <iostream>
#include <queue>

using namespace std;

int main() {
  queue<string> nome;
  string nomePessoa;

  while (nomePessoa != "sair") {
    cout << ">";
    getline(cin, nomePessoa);

    if (nomePessoa == "?") {
      if (!nome.empty()) {
        cout << nome.front() << endl;
        nome.pop();
      }
    } else if (nomePessoa != "sair") {
      nome.push(nomePessoa);
      cout << nome.size() - 1 << endl;
    }
  }
}