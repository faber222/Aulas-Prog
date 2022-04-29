#include <fstream>
#include <iostream>
#include <list>

using namespace std;

list<string> separa(const string& texto, auto sep) {
  list<string> q;
  int x = 0;
  string memoria;

  while (x != string::npos) {
    int z = texto.find_first_not_of(sep, x);
    if (z == string::npos) break;
    x = texto.find(sep, z);
    memoria = texto.substr(z, x - z);
    q.push_back(memoria);
  }
  return q;
}

int main(int argc, char* argv[]) {
  ifstream arq(argv[1]);
  string aux;
  string c = argv[2];
  auto separatorString = c;
  list<string> output;

  while (getline(arq, aux)) {
    output = separa(aux, separatorString);
    while (!output.empty()) {
      cout << output.front() << endl;
      output.pop_front();
    }
  }
}