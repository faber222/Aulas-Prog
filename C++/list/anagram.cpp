#include <algorithm>
#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
  string palavra = argv[1];
  string palavra2 = argv[2];

  if (is_permutation(palavra.begin(), palavra.end(), palavra2.begin())) {
    cout << "VERDADEIRO";
  } else {
    cout << "FALSO";
  }
}