#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
  // Uma tabela com chaves string, e valores float
  // Chave: nome de produto
  // Valor: preço desse produto
  unordered_map<string, float> tab;

  // Insere alguns produtos na tabela. Parece que a tabela funciona como um
  // vetor, cujas posições são acessadas por meio da chave ...
  tab.emplace("banana", 3.19);
  tab.emplace("laranja", 2.29);
  tab.emplace("tomate", 3.99);
  tab.emplace("batata", 2.99);

  // Itera a tabela, mostrando cada chave e respectivo valor
  // quando se usa um iterador de uma tabela hash, voce precisa usar o -> para
  // declarar os valores
  for (auto& it = tab.begin(); it != tab.end(); it++) {
    cout << "Chave=" << it->first << ", e valor=" << it->second;
  }
}