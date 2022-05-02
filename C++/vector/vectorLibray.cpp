#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
push_back: Adicionar um dado ao final
insert: Inserir um dado em uma determinada posição
erase: Remover um ou mais dados a partir de uma determinada posição
front: Acessar o dado que está no início
operador []: Acessar um dado em uma posição qualquer
back: Acessar o dado que está no final
size: Obter a quantidade de dados armazenados
clear: Remover todos os dados (esvaziar)
*/

void mostra_vetor(vector<string>& v) {
  // itera o vetor
  for (auto& dado : v) {
    cout << dado << ",";
  }
  cout << endl;
}

int main(int argc, char** argv) {
  // cria um vector de string
  vector<string> nomes;

  // anexa três dados ao final do vector
  nomes.push_back("manuel");
  nomes.push_back("maria");
  nomes.push_back("bilica");

  // mostra comprimento e conteúdo do vector
  cout << "Comprimento: " << nomes.size() << ", dados: ";
  mostra_vetor(nomes);

  // Acessa um dado por sua posição
  for (int i = 0; i < nomes.size(); i++) {
    cout << "Dado na posição " << i << ": " << nomes[i] << endl;
  }

  // remove dado do final do vector
  nomes.pop_back();
  cout << "Comprimento: " << nomes.size() << ", dados: ";
  mostra_vetor(nomes);

  // ao final, vector é automaticamente destruído, e a memória utilizada
  // é liberada
  return 0;
}