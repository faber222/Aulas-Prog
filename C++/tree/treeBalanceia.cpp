#include <prglib.h>

#include <fstream>
#include <iostream>
#include <list>
#include <string>

using namespace std;
using prglib::arvore;

int main(int argc, char** argv[]) {
  arvore<string> arv;
  ifstream arq("numeros.txt");
  string palavra;
  while (getline(arq, palavra)) {
    arv.adiciona(palavra);
  }
  cout << arv.altura() << " | Antes" << endl;
  arv.balanceia(true);
  cout << arv.altura() << " | Depois" << endl;
}