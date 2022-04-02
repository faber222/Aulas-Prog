#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  char word[] = "FABER     BERNARDO           JUNIOR               ";
  int m = 1;

  for (int i = 0; i < strlen(word); i++) {
    int x = isspace(word[i]);
    int z = isspace(word[m]);

    if (x == 0 || z == 0) {
      printf("%c", word[i]);
    }
    m++;
  }
}