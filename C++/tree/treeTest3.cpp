#include <prglib.h>

#include <iostream>
#include <list>
#include <string>

using namespace std;

using prglib::arvore;

void cria_arvore(arvore<string>& arv, list<string> palavra) {
  for (auto& x : palavra) {
    arv.adiciona(x);
  }
};

int main() {
  arvore<string> arv2;
  list<string> dados = {"mar", "ferias", "praia", "areia",
                        "luz", "onda",   "sol",   "mar"};
  cria_arvore(arv2, dados);

  for (auto& x : arv2) {
    cout << x << endl;
  }
}