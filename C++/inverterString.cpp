#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  string s;

  cout << "Digite uma palavra: ";
  cin >> s;

  int p1, p2;
  for (p1=0, p2=s.size()-1; p1 < p2; p1++, p2--) {
    char c = s[p1];
    s[p1] = s[p2];
    s[p2] = c;
  }

  cout << s << endl;
}