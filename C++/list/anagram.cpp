#include <algorithm>
#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
  string palavra = argv[1];
  string palavra2 = argv[2];

  list<char> l1(palavra.begin(), palavra.end());
  list<char> l2(palavra2.begin(), palavra2.end());

  l1.sort();
  l2.sort();

  if (l1 == l2) {
    cout << "VERDADEIRO";
  } else {
    cout << "FALSO";
  }
  /*
    if (is_permutation(palavra.begin(), palavra.end(), palavra2.begin())) {
      cout << "VERDADEIRO";
    } else {
      cout << "FALSO";
    }*/
}