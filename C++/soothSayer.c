#include <math.h>
#include <stdio.h>

int x = 1;

int guess(int i, int j) {
  char answer1, answer2;

  int g = abs((i + j) / 2);

  printf("Is the number: %d ?(Y, N)\n", g);
  scanf(" %c", &answer1);

  if (answer1 == 'Y') {
    printf("%d attempts\n", x);
    return g;
  } else {
    printf("Is the number bigger or smaller %d ?(>, <)\n", g);
    scanf(" %c", &answer2);

    if (answer2 == '>') {
      x++;
      guess(g, j);
    }
    if (answer2 == '<') {
      x++;
      guess(i, g);
    }
  }
}

int main() {
  system("cls");
  char thought;

  printf("Think of a number between 0 and 100.\n");
  printf("Did you think about the number?(Y, N)\n");
  scanf(" %c", &thought);
  if (thought == 'Y') {
    guess(1, 100);
  }
}
