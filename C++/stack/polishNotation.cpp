#include <iostream>
#include <sstream>
#include <stack>

using namespace std;

// ostringstream : possibilita escrever em uma string
// istringstream : possibilita ler de uma string
// stringstream : possibilita ler e escrever em uma string

int main(int argc, char* argv[]) {
  stack<char> p1;
  stack<int> p2;

  for (int i = 1; i < argc; i++) {
    istringstream palavra(argv[i]);

    int n;
    char c;

    // primeiro tentar ler um número

    if (palavra >> n) {
      p2.push(n);
    }
    if (palavra >> c) {
      p1.push(c);
    }
  }

  while (!p1.empty()) {
    cout << p1.top() << endl;
    p1.pop();
  }
  while (!p2.empty()) {
    cout << p2.top() << endl;
    p2.pop();
  }
}