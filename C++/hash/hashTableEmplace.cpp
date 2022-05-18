#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
  string arquivo = "faber.txt";
  ofstream arq(arquivo);
  // Uma tabela com chaves string, e valores float
  // Chave: nome de produto
  // Valor: preço desse produto
  unordered_map<string, float> tab;

  // Insere alguns produtos na tabela. Isso deve ser feito sempre na forma de
  // um par formado por chave e valor. O primeiro parâmetro é a chave, e o
  // segundo é o valor
  tab.emplace("banana", 3.19);
  tab.emplace("laranja", 2.29);
  tab.emplace("tomate", 3.99);
  tab.emplace("batata", 2.99);

  for (auto& par : tab) {
    arq << par.first << ":" << par.second << endl;
  }

  // Neste laço, o usuário pode consultar o preço de produtos
  // conhecidos. Para sair do laço, basta teclar somente ENTER
  while (true) {
    string produto;

    cout << "Produto: ";
    getline(cin, produto);
    if (produto.empty())
      break;  // teclou somente ENTER ...
              // acessa o valor associado a chave
    cout << "Preço: " << tab[produto] << endl;
  }
}