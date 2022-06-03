#include <prglib.h>

#include <iostream>
#include <list>
#include <string>

using namespace std;

using prglib::arvore;

// obtem(), captura um dado da arvore
// adiciona(), adiciona um valor na arvore
// existe(), retorna verdadeiro se tal valor existir na arvore

int main(int argc, char** argv) {
  // cria uma árvore vazia
  arvore<string> arv2;

  cout << "Árvore tem " << arv2.tamanho() << " dados armazenados" << endl;

  arv2.adiciona("coisa");
  arv2.adiciona("algo");

  cout << "Agora árvore tem " << arv2.tamanho() << " dados armazenados" << endl;

  // imagine uma lista com um conteúdo
  list<string> dados = {"coisa", "algo", "bagaça", "treco"};

  // cria uma árvore a partir da lista
  arvore<string> arv(dados);

  cout << "Árvore tem " << arv.tamanho() << " dados armazenados" << endl;

  for (auto& x : arv) {
    cout << "Dado armazenado: " << x << endl;
  }
}