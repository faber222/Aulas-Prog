#include <stdio.h>

int main() {
  int sizeValue, amountValue;

  int processValue = 1;
  int variable1;
  int variable2;

  char even;
  char odd;
  char triangle;

  do {
    printf("\nInput the size of individual shapes (Number)\n");
    scanf("%i", &sizeValue);
  } while (sizeValue < 2);
  printf("\nThe size inputed is = %d\n", sizeValue);

  do {
    printf("\nInput the number of triangles that will be printed \n");
    scanf("%i", &amountValue);
  } while (amountValue <= 0);
  printf("\nInput the first character of printing (Number or Letter)\n");
  scanf(" %c", &even);
  printf("\nInput the second character of printing (Number or Letter)\n");
  scanf(" %c", &odd);

  while (processValue <= amountValue) {
    printf("\nPrinting triangle Number = %d\n", processValue);

    variable1 = 0;

    if (processValue % 2 == 0) {
      triangle = even;
    } else {
      triangle = odd;
    }

    while (variable1 < sizeValue) {
      variable2 = 0;

      while (variable2 <= variable1) {
        printf("%c", triangle);

        variable2++;
      }

      printf("\n");

      variable1++;
    }

    processValue++;
  }

  printf("\nOperationg Finished!\n");

  return 0;
}