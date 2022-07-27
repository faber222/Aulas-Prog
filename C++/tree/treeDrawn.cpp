#include <prglib.h>

#include <fstream>
#include <iostream>
#include <list>
#include <string>

using namespace std;

using prglib::arvore;

void grava_arvore(const string& nome, arvore<int> a) {
  ofstream out(nome);
  auto descricao = prglib::desenha_arvore(a);
  out << descricao << endl;
}

int main(int argc, char** argv[]) {
  list<int> dados = {1, 2, 3, 4, 5, 6, 7, 8};
  arvore<int> arv(dados);
  cout << "altura: " << arv.altura() << endl;
  grava_arvore("antes.dot", arv);

  arv.balanceia(true);
  cout << "altura: " << arv.altura() << endl;
  grava_arvore("depois.dot", arv);
}