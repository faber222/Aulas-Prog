#include <fstream>
#include <iostream>

using namespace std;

int main() {
  string produto;
  int estocado, vendido;

  ifstream inp("estoque.txt");

  while (inp >> produto >> estocado >> vendido) {
    cout << produto << " tem " << estocado << " unidades em estoque ";
    cout << ", e " << vendido << " unidades vendidas" << endl;
  }
  // Os valores precisam estar separados por espaço
  // Se qualquer valor não puder ser lido, o laço irá terminar.Então isso
  // somente pode ser usado em arquivos bem comportados,
  // em que seu conteúdo com certeza estará consistente

  // sabonete 12 4
  // presunto 20 7
  // macarrao 15 12
}