#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
  unordered_map<string, int> tab;
  string k;

  // imagine que aqui se adicionaram valores a essa tabela

  // agora tenta-se remover um dado, supondo que sua chave esteja na variável
  // "k" primeiro procura-se a chave, e obtém-se um iterador para o par
  // (chave,valor)
  auto it = tab.find(k);

  // se o iterador apontar um dado válido, então usa-se erase para removê-lo
  if (it != tab.end()) tab.erase(it);
}