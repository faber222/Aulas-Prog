#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ofstream arq("numeros.txt");
  for (int i = 0; i <= 100; i++) {
    arq << i << endl;
  }
}