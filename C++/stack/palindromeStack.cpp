#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char* argv[]) {
  string s = argv[1], z, v;
  stack<string> palavra;

  for (int i = 0; i < s.size(); i++) {
    v = s[i];
    palavra.push(v);
  }
  while (!palavra.empty()) {
    z += palavra.top();
    palavra.pop();
  }

  if (z == s) {
    cout << "VERDADEIRO";
  } else {
    cout << "FALSO";
  }
}