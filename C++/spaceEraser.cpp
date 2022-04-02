#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  for (int j = 1; j < argc; j++) {
    string word = argv[j];

    int m = 1;
    int f = isspace(word[0]);

    if (f == 0) {
      cout << ' ';
    }

    for (int i = 0; i < word.size(); i++) {
      int x = isspace(word[i]);
      int z = isspace(word[m]);

      if (x == 0 || z == 0) {
        cout << word[i];
      }
      m++;
    }
  }
}