#include <cctype>
#include <fstream>
#include <iostream>
#include <list>
#include <string>
#include <unordered_map>

using namespace std;

bool comp(const pair<string, int>& s1, const pair<string, int>& s2) {
  if (s1.second == s2.second) return s1.first < s2.first;
  return s1.second > s2.second;
}

int main(int argc, char* argv[]) {
  ifstream arq(argv[1]);
  string x = argv[2];
  list<int> l;
  int count = 0;

  unordered_map<string, int> totais;

  string palavra;
  int w = stoi(x);

  while (arq >> palavra) {
    if (totais.count(palavra) > 0) {
      totais[palavra]++;
    } else {
      totais[palavra] = 1;
    }
  }

  list<pair<string, int>> l2(totais.begin(), totais.end());

  l2.sort(comp);

  for (auto& y : l2) {
    cout << y.first << " " << y.second << endl;
    count++;
    if (count == w) break;
  }
}
