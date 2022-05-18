#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
  // Um conjunto com valores string
  unordered_set<string> conjunto;

  // Armazena algumas palavras no conjunto.
  conjunto.insert("banana");
  conjunto.insert("laranja");
  conjunto.insert("tomate");
  conjunto.insert("batata");
  conjunto.insert("jambu");
  conjunto.insert("banana");

  // mostra o conteúdo do conjunto
  // note que se usa iteração de forma parecida com o que se faz com lista !
  for (auto& palavra : conjunto) {
    cout << "Palavra: " << palavra << endl;
  }
}