#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string word;
  getline(cin, word);
  int i = word.size();
  int y = 1;
  for (auto& f : word) {
    if (f == ' ' && isalpha(f + 1)) {
      y++;
    }
  }
  if (i == 0) {
    y = 0;
  }

  cout << y << ' ' << i;
}