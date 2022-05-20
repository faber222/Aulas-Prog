#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
  // Um conjunto com valores string
  unordered_set<string> conjunto;

  // Insere algumas palavras no conjunto.
  conjunto.insert("banana");
  conjunto.insert("laranja");
  conjunto.insert("tomate");
  conjunto.insert("batata");
  conjunto.insert("jambu");

  // Neste laço, o usuário pode procurar se uma palavra existe
  // no conjunto. Para sair do laço, basta teclar somente ENTER
  while (true) {
    string palavra;

    cout << "Palavra: ";
    getline(cin, palavra);
    if (palavra.empty()) break;  // teclou somente ENTER ...

    // procura a palavra, e obtém um iterador para a palavra armazenada
    auto it = conjunto.find(palavra);

    // se iterador aponta o fim do conjunto, então palavra não existe
    if (it == conjunto.end()) {
      cout << palavra << " não existe" << endl;
    } else {
      // caso contrário, palavra existe, então a mostra
      cout << "Palavra armazenada: " << *it << endl;
    }
  }
}