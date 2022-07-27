#include "lista.h"

Lista cria_lista() {
  // cria uma lista vazia: primeiro=nullptr, e len=0
  Lista nova = {nullptr, 0};

  return nova;
}

void lista_anexa(Lista& l, const string& dado) {
  // cria um novo Nodo contendo o dado a ser anexado
  auto novo = new Nodo;
  novo->dado = dado;
  novo->sucessor = nullptr;

  if (l.len == 0) {
    // primeiro deve apontar novo nodo
    l.primeiro = novo;
  } else {
    // localizar o último nodo da lista
    Nodo* ptr = l.primeiro;

    while (ptr->sucessor != nullptr) {
      ptr = ptr->sucessor;
    }
    // conecta novo nodo à lista
    ptr->sucessor = novo;
  }

  // incrementa contador de nodos da lista
  l.len++;
}