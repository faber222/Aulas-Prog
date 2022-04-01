#include <math.h>

#include <iostream>
#include <string>

using namespace std;

int x = 1;

int guess(int i, int j) {
  string resposta1;

  int g = abs((i + j) / 2);

  cout << g << endl;
  cin >> resposta1;

  if (resposta1 == "=") {
    cout << x << " tentativas" << endl;
  }
  if (resposta1 == ">") {
    x = x + 1;
    guess(g, j);
  }
  if (resposta1 == "<") {
    x = x + 1;
    guess(i, g);
  }
}

int main() {
  system("cls");

  guess(1, 100);
}