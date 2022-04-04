#include <stdio.h>
#include <string.h>

int main(void) {
  char word[] = "FABER     BERNARDO           JUNIOR               ";
  int m = 1;
  if (word[0] != ' ') {
    printf(" ");
  }

  for (int i = 0; i < strlen(word); i++) {
    if (word[i] != ' ' || word[m] != ' ') {
      printf("%c", word[i]);
    }
    m++;
  }
  printf("\n");
}