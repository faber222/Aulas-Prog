#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
  for (int j = 1; j < argc; j++) {
    string word = argv[j];

    cout << ' ';

    for (auto& i : word) {
      if (i != ' ' || word[j] != ' ') {
        cout << i;
      }
    }
  }
}