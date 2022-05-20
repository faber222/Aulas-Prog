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

  // agora itera o conjunto, mostrado seus valores na tela
  // note que a ordem em que são apresentados não necessariamente
  // é a mesma com que foram inseridos !
  for (auto& valor : conjunto) {
    cout << "Valor: " << valor << endl;
  }
  // seguindo o mesmo parametro de fila, pode se usar o *it para capturar o
  // valor da lista
  // o conjunto pode também ser iterador com iteradores
  // explícitos
  for (auto it = conjunto.begin(); it != conjunto.end(); it++) {
    cout << "Valor: " << *it << endl;
  }