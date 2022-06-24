#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(int argc, char* argv[]) {
  // cria uma tabela hash: a chave é um string (nome do produto), e o valor um
  // int (sua quantidade)
  unordered_map<string, int> totais;

  // abre o arquivo de dados
  ifstream arq(argv[1]);

  if (!arq.is_open()) {
    cout << "Uso: " << argv[0] << " arq_dados" << endl;
    return 0;
  }

  string produto;
  int qtde;

  // lê um par de valores por vez do arquivo
  // esse par é composto pelo nome do produto e de sua quantidade
  while (arq >> produto >> qtde) {
    // se chave (nome do produto) já existe na tabela ...
    if (totais.count(produto) > 0) {
      // ... acessa o valor a ela associado, e a ele soma o número lido do
      // arquivo
      totais[produto] += qtde;
    } else {
      // ... senão armazena o número lido, associando-o ao produto
      totais[produto] = qtde;
    }
  }

  // ao final, itera a tabela para mostrar os valores totais de cada produto
  // para cada par formado por chave e valor ...
  for (auto& par : totais) {
    // mostra a chave (par.first) seguido do valor (par.second)
    cout << par.first << ": " << par.second << endl;
  }
}