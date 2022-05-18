#include <list>
#include <string>
#include <unordered_set>

using namespace std;

// unique_clone: elimina dados duplicados da lista "l"
void unique_clone(list<string>& l) {
  // cria um conjunto de string
  unordered_set<string> conj;

  // adiciona cada dado da lista ao conjunto
  // Note que o conjunto contem somente dados únicos,
  for (auto& x : l) {
    conj.insert(x);
  }

  // limpa a lista
  l.clear();

  // agora copia os valores de volta para a lista
  // o conjunto eliminou os valores duplicado,
  for (auto& x : conj) {
    l.push_back(x);
  }
}