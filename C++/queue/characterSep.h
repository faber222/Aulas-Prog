#include <iostream>
#include <queue>
#include <string>

using namespace std;

void separa(const string& algo, char sep, queue<string>& q) {
  int x = 0;
  string memoria;

  while (x != string::npos) {
    int z = algo.find_first_not_of(sep, x);
    if (z == string::npos) break;
    x = algo.find(sep, z);
    memoria = algo.substr(z, x - z);
    q.push(memoria);
  }
};
