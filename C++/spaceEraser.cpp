#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  for (int j = 1; j < argc; j++) {
    string word = argv[j];
    int m = 1;

    if (word[0] != ' ') {
      cout << ' ';
    }

    for (int i = 0; i < word.size(); i++) {
      if (word[i] != ' ' || word[m] != ' ') {
        cout << word[i];
      }
      m++;
    }
  }
  cout << endl;
}