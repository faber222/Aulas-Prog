#include <iostream>
#include <string>

using namespace std;

void maiusculas(string& palavra) {
  if (palavra.size() == 0) {
    throw 1;
  }
  for (int i = 0; i < palavra.size(); i++) {
    palavra[i] = toupper(palavra[i]);
    cout << palavra[i];
  }
}
int main(void) {
  string faber;
  maiusculas(faber);
}