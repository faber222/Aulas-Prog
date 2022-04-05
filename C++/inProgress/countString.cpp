#include <stdlib.h>

#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  int x;
  string g;
  for (int i = 1; i < argc; i++) {
    g = argv[i];
    cout << g << " ";
    for (int j = 0; j < g.size(); j++) {
      if (isalpha(g[j])) {
        x++;
      }
    }
  }
  cout << argc - 1 << " " << x;
}