#include <prglib.h>

#include <algorithm>
#include <fstream>
#include <iostream>
#include <list>
#include <string>
#include <vector>

using namespace std;
using prglib::arvore;

void reordena(const string& nome_arquivo) {
  arvore<string> arv;
  ifstream arq(nome_arquivo);
  string palavra;
  vector<string> nomes;

  while (getline(arq, palavra)) {
    nomes.push_back(palavra);
  }
  random_shuffle(nomes.begin(), nomes.end());

  for (auto& x : nomes) {
    arv.adiciona(x);
  }
  arv.balanceia(true);
  ofstream arq2(nome_arquivo);
  for (auto it = arv.preorder_begin(); it != arv.preorder_end(); it++) {
    arq2 << *it << endl;
  }
};

void grava_arvore(const string& nome, arvore<string> a) {
  ofstream out(nome);
  auto descricao = prglib::desenha_arvore(a);
  out << descricao << endl;
}

int main(int argc, char** argv[]) {
  arvore<string> arv;
  ifstream arq("numeros.txt");
  string palavra;
  vector<string> nomes;

  while (getline(arq, palavra)) {
    nomes.push_back(palavra);
  }
  // cout << arv.altura() << " | Antes" << endl;
  random_shuffle(nomes.begin(), nomes.end());
  // arv.balanceia();

  for (auto& x : nomes) {
    arv.adiciona(x);
  }
  arv.balanceia(true);
  grava_arvore("depois.dot", arv);
  ofstream arq2("numeros1.txt");
  ofstream arq3("numeros2.txt");
  for (auto& x : arv) {
    arq3 << x << endl;
  }

  for (auto it = arv.inorder_begin(); it != arv.inorder_end(); it++) {
    arq2 << *it << endl;
  }
}