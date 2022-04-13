#include <errno.h>
#include <stdio.h>

#include <fstream>
#include <iostream>

using namespace std;

int main() {
  // system("cls");
  cout << "\x1b[2J";
  cout << "\x1b[H";
  string arquivo;
  string linha;
  string palavra;
  cin >> arquivo;
  ofstream arq(arquivo);  // acesso a arquivos em modo escrita
  int x = 0;

  if (!arq.is_open()) {
    cerr << "Algum erro ao abrir o arquivo ..." << endl;
    perror("erro");
    return errno;
  }

  // cout: saída padrão
  // cin: entrada padrão
  // cerr : saída de erros padrão
  // >> (leitura) << (escrita)

  arq << "Iniciando uma gravacao de varias linhas inuteis ..." << endl;
  arq << "Iniciando uma gravacao de varias linhas inuteis ..." << endl;
  arq << "Iniciando uma gravacao de varias linhas inuteis ..." << endl;
  arq << "Iniciando uma gravacao de varias linhas inuteis ..." << endl;
  arq << "Iniciando uma gravacao de varias linhas inuteis ..." << endl;
  arq << "Iniciando uma gravacao de varias linhas inuteis ..." << endl;
  arq << "Iniciando uma gravacao de varias linhas inuteis ..." << endl;

  for (int i = 0; i < 10; i++) {
    arq << "Linha " << i << endl;
  }
  ifstream arq2(arquivo);  // acesso a arquivos em modo leitura, sendo que o
                           // arq2 é um novo argumento

  while (getline(arq2, linha)) {  // le linha por linha
    cout << linha << endl;
    x++;
  }
  // arquivo por ser um stream, ele finaliza a leitura quando uso o arq2 de
  // leitura de linha por linha
  arq2.clear();
  arq2.seekg(0);

  while (arq2 >> linha) {  // le palavra por palavra
    cout << linha << endl;
  }
  cout << x << endl;
}