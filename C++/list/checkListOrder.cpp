#include <time.h>

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <list>

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

bool ordenada(const list<int>& umaLista) {
  int menor = 0;

  for (auto& compara : umaLista) {
    if (compara < menor) {
      return false;
    } else {
      menor = compara;
    }
  }
  return true;
};

int main() {
  srand(time(NULL));
  list<int> lista;
  string arquivo;
  int vetor[100];
  int aux, linha;

  for (int i = 0; i < 100; i++) {
    vetor[i] = rand() % 100;
  }

  for (int i = 0; i < 100; i++) {
    for (int j = i + 1; j < 100; j++) {
      if (vetor[i] > vetor[j]) {
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
      }
    }
  }

  cin >> arquivo;
  ofstream arq(arquivo);

  for (int i = 0; i < 100; i++) {
    arq << vetor[i] << endl;
  }

  ifstream arq2(arquivo);

  while (arq2 >> linha) {  // le linha por linha
    lista.push_back(linha);
  }
  bool teste = ordenada(lista);
  cout << teste << endl;

  for (auto it = lista.begin(); it != lista.end(); it++) {
    cout << "Numero: " << *it << endl;
  }
  cout << endl;
}