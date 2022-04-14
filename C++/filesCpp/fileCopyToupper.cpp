#include <cctype>
#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  ifstream inp(argv[1]);
  ofstream out(argv[2]);

  string s;
  while (getline(inp, s)) {
    // for (int j = 0; j < s.size(); j++)
    //  s[j] = toupper(s[j]);

    out << s << endl;
  }
}