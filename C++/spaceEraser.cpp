#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string palavra;
  string palavraFinal;
  getline(cin, palavra);
  int m = 1;
  int f = isspace(palavra[0]);

  if (f == 0) {
    cout << ' ';
  }

  for (int i = 0; i < palavra.size(); i++) {
    int x = isspace(palavra[i]);
    int z = isspace(palavra[m]);

    if (x == 0 || z == 0) {
      palavraFinal = palavraFinal + palavra[i];
    }
    m++;
  }
  cout << palavraFinal;
}