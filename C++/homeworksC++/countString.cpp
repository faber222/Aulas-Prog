#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "\x1b[2J";
  cout << "\x1b[H";
  string frase;
  bool space = true;
  getline(cin, frase);

  int x = 0;
  int y = 0;

  while (x != string::npos) {
    int z = frase.find_first_not_of(" \n\t.?:!;,", x);
    if (z == string::npos) break;
    y++;
    x = frase.find_first_of(" \n\t.?:!;,", z);
  }
  cout << y << ' ' << frase.size() << endl;
}