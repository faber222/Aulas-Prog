#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string str;
  getline(cin, str);

  for (auto& j : str) {
    j = toupper(j);
    cout << j;
  }
}