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
    if (produto.empty())
      break;  // teclou somente ENTER ...
              // acessa o valor associado à chave k
    // se essa chave não existir ainda na tabela, ela
    // é adicionada e mapeada a uma valor default
    cout << "Preço: " << tab[produto] << endl;
  }
}