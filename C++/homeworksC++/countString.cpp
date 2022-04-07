#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
  system("cls");
  string word;
  getline(cin, word);
  int i = word.size();
  int x = 1;
  int m = 0;
  for (auto& j : word) {
    if (j == ' ' && isalpha(word[m - 1]) && isalpha(word[m + 1])) {
      x++;
    }

    m++;
  }
  if (i == 0) {
    x = 0;
  }
  cout << x << ' ' << i;
}