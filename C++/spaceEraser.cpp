#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  for (int j = 1; j < argc; j++) {
    string word = argv[j];
    int m = 1;
    int f = isspace(word[0]);

<<<<<<< HEAD
    cout << ' ';
=======
    if (f == 0) {
      cout << ' ';
    }
>>>>>>> 72eebfa57b20d33dbc47d377774c07ad64ce3ba2

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