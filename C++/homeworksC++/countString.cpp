#include <ctype.h>

#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string word;
  getline(cin, word);
  int i = word.size();
  int x = 1;
  int m = 1;
  for (auto& j : word) {
    if (j == ' ' && isalpha(word[m])) {
      x++;
    }
    m++;
  }
  if (i == 0) {
    x = 0;
  }
  cout << x << ' ' << i;
}