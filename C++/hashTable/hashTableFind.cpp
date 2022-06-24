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

  // Neste laço, o usuário pode consultar o preço de produtos
  // conhecidos. Para sair do laço, basta teclar somente ENTER
  while (true) {
    string produto;

    cout << "Produto: ";
    getline(cin, produto);
    if (produto.empty()) break;  // teclou somente ENTER ...

    // procura a chave, e obtém um iterador para o par chave e valor
    auto it = tab.find(produto);

    // se iterador aponta o fim da tabela, então chave não existe
    if (it == tab.end()) {
      cout << produto << " desconhecido" << endl;
    } else {
      // caso contrário, chave existe, então mostra o respectivo
      cout << "Preço: " << it->second << endl;
    }
  }
}