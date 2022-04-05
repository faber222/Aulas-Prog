#include <math.h>

#include <iostream>
#include <string>

using namespace std;

int x = 1;

int guess(int i, int j) {
  string z;
  int g = abs((i + j) / 2);

  cout << g << endl;
  cin >> z;

  if (z == "=") {
    cout << x << " attempts" << endl;
  }
  if (z == ">") {
    x++;
    guess(g, j);
  }
  if (z == "<") {
    x++;
    guess(i, g);
  }
}

int main() {
  system("cls");

  guess(1, 100);
}