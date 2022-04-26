#include <cstdlib>
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

void mostra_lista(list<string>& lista) {
  // itera a lista
  for (auto& dado : lista) {
    cout << dado << ",";
  }
  cout << endl;
}

int main(int argc, char** argv) {
  // cria uma lista de string
  list<string> nomes;

  // anexa três dados ao final da lista
  nomes.push_back("manuel");
  nomes.push_back("maria");
  nomes.push_back("bilica");

  // mostra comprimento e conteúdo da lista
  cout << "Comprimento: " << nomes.size() << ", dados: ";
  mostra_lista(nomes);

  // insere dado no início da lista
  nomes.push_front("maneca");
  cout << "Comprimento: " << nomes.size() << ", dados: ";
  mostra_lista(nomes);

  // remove dado do início da lista
  nomes.pop_front();
  cout << "Comprimento: " << nomes.size() << ", dados: ";
  mostra_lista(nomes);

  // ao final, lista é automaticamente destruída, e a memória utilizada
  // é liberada
  return 0;
}