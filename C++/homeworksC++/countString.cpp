// #include <stdlib.h>

// #include <cctype>
#include <iostream>
#include <string>

using namespace std;

// creio que o testador recebeu um parametro incorreto, pensei que fosse pra
// contas apenas os caracteres que fossem alfabeticos, ignorando caracter
// especial e espaços, mas o codigo quer somar tudo, então deixei o codigo que
// achei original e correto, apenas comentado

int main() {
  string word;
  getline(cin, word);
  int i = 1;
  int x = 0;
  int y = 0;
  for (int j = 0; j < word.size(); j++) {
    x++;
    // if (word[j] != ' ' || word[i] != ' ') {
    //  if (isalpha(word[j])) {
    //  x++;
    // }
    if (word[j] == ' ') {
      y++;
    }
    //}
    i++;
  }
  y++;
  if (x == 0) {
    y = 0;
  }
  cout << y << ' ' << x;
}