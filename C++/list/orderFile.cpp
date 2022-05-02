// compara duas strings de acordo com seus comprimentos
#include <fstream>
#include <iostream>
#include <list>

using namespace std;

bool comp_comprimento(const string& s1, const string& s2) {
  return s1.size() < s2.size();
}

int main(int argc, char* argv[]) {
  list<string> l;
  ifstream arq(argv[1]);
  string n;

  while (getline(arq, n)) {
    l.push_back(n);
  }

  l.sort();

  for (auto& w : l) {
    cout << w << " ";
  }
}