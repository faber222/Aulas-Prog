#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "\x1b[2J";
  cout << "\x1b[H";
  string frase;
  getline(cin, frase);
  string teste;

  int x = 0;

  while (x != string::npos) {
    int z = frase.find_last_of(" \n\t.?:!;,", x);
    if (z == string::npos) break;
    cout << z << endl;
    teste = frase.substr(z);
    cout << teste << endl;

    x = frase.find_last_not_of(" \n\t.?:!;,", z);
  }
  cout << endl;
}