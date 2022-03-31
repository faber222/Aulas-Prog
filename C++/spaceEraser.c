#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  char palavra[] = "FABER     BERNARDO           JUNIOR               ";
  int m = 1;

  for (int i = 0; i < strlen(palavra); i++) {
    int x = isspace(palavra[i]);
    int z = isspace(palavra[m]);

    if (x == 0 || z == 0) {
      printf("%c", palavra[i]);
    }
    m++;
  }
}