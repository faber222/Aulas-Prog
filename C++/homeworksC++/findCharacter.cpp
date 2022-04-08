#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  string texto;
  ifstream x(argv[1]);
  string palavra = argv[2];

  while (getline(x, texto)) {
    if (texto.find(palavra) != string::npos) {
      cout << texto << endl;
    }
  }
}