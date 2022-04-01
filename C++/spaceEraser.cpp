#include <ctype.h>

#include <iostream>
#include <string>

using namespace std;

int main(void) {
  string palavra[] = "FABER     BERNARDO           JUNIOR               ";
  int m = 0;

  for (int i = 1; i < strlen(palavra); i++) {
    int x = isspace(palavra[m]);
    int z = isspace(palavra[i]);

    if (x == 0 || z == 0) {
      cout << palavra[i];
    }
    m++;
  }
}