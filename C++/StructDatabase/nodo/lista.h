#ifndef LISTASIMPLES_LISTA_H
#define LISTASIMPLES_LISTA_H

//    void lista_anexa(Lista & l, const string & dado): acrescenta um dado ao
//    final da lista void lista_insere(Lista & l, const string & dado):
//    acrescenta um dado ao início da lista void lista_insere(Lista & l, const
//    string & dado, int pos): acrescenta um dado na posição pos da lista

#include <string>

using std::string;

// a declaração do tipo Nodo
struct Nodo {
  string dado;
  Nodo* sucessor;
};

// a declaração do tipo Lista
struct Lista {
  Nodo* primeiro;
  int len;  // comprimento atual
};

// Operações da lista

// cria uma lista vazia
Lista lista_cria();

// destroi uma lista
void lista_destroi(Lista& l);

// anexa um dado
void lista_anexa(Lista& l, const string& dado);

// insere um dado no início
void lista_insere(Lista& l, const string& dado);

// insere um dado em uma posição específica
void lista_insere(Lista& l, const string& dado, int pos);

// remove um dado de uma posição específica
void lista_remove(Lista& l, const string& dado, int pos);

// obtém um dado de uma posição
string& lista_obtem(Lista& l, int pos);

// ordena uma lista
void lista_ordena(Lista& l);

// inverte uma lista
void lista_inverte(Lista& l);

// esvazia uma lista
void lista_limpa(Lista& l);

#endif  // LISTASIMPLES_LISTA_H