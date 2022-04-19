#include <errno.h>

#include <fstream>
#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char* argv[]) {
  string arquivo = argv[1];
  ifstream arq(arquivo);
  string linha;
  stack<string> file;
  if (!arq.is_open()) {
    cout << "arquivo invalido";
    return 0;
  }
  while (getline(arq, linha)) {  // le linha por linha
    file.push(linha);
  }
  while (!file.empty()) {
    cout << file.top() << endl;
    file.pop();
  }
}