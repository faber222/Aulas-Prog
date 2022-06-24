#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(int argc, char* argv[]) {
  ifstream arq(argv[1]);
  unordered_map<int, int> tab;

  int x;
  while (arq >> x) {
    int k = x % 10;
    if (tab.count(k))
      tab[k]++;
    else
      tab[k] = 1;
  }

  for (auto& i : tab) {
    cout << i.second << " ";
  }
}