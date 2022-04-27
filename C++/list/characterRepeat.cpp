#include <fstream>
#include <iostream>
#include <list>
#include <string>

using namespace std;

/*
push_back: Adicionar um dado ao final
push_front: Adicionar um dado no início
pop_front: Remover um dado do início
pop_back: Remover um dado do final
insert: Inserir um dado em uma determinada posição
erase: Remover um ou mais dados a partir de uma determinada posição
front: Acessar o dado que está no início
back: Acessar o dado que está no final
size: Obter a quantidade de dados armazenados
clear: Remover todos os dados (esvaziar)
declarar lista com lint<parametro> nome;
*/

int main(int argc, char* argv[]) {
  ifstream arq(argv[1]);
  string palavra;
  list<string> lista, lista2, lista3;
  int x = 0;

  while (arq >> palavra) {
    lista.push_back(palavra);
    lista2.push_back(palavra);
  }

  for (auto it = lista.begin(); it != lista.end(); it++) {
    for (auto t = it; t != lista.end(); t++) {
      if (*t == *it) {
        lista3.push_back(*t);
      }
    }
  }
  while (!lista3.empty()) {
    cout << lista3.front() << endl;
    lista3.pop_front();
  }
}