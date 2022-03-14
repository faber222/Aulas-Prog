/*
AUTHOR: FABER BERNARDO JUNIOR
DATE: 11/30/2021
PROGRAM SYNOPSIS: Print various shapes of objects on the terminal.
ENTRY DATA: imput
OUTPUT DATA: retangles, triangles or finish the program
*/

#include <stdio.h>

int main() {
  int imput, retangleCollums, retangleLines, retangleCollums1, retangleLines1,
      trianglesVar1, sizeValue, trianglesVar2;

  imput = 0;
  trianglesVar1 = 0;

  do {
    printf("\nPlease, input the value of printing!");
    printf("\n(1) for retangles");
    printf("\n(2) for squared triangles");
    printf("\n(3) for finishing the program\n");

    scanf("%d", &imput);

    switch (imput) {
      case 1:

        printf("Please input the collum value = \n");
        scanf("%d", &retangleCollums);

        printf("Please input the lines value = \n");
        scanf("%d", &retangleLines);

        for (retangleLines1 = 1; retangleLines1 <= retangleLines;
             retangleLines1++) {
          for (retangleCollums1 = 1; retangleCollums1 <= retangleCollums;
               retangleCollums1++) {
            printf("&");
          };

          printf("\n");
        };

        break;

      case 2:

        printf("\nPlease input the size of the triangle = ");
        scanf("%d", &sizeValue);

        while (trianglesVar1 < sizeValue) {
          trianglesVar2 = 0;

          while (trianglesVar2 <= trianglesVar1) {
            printf("$");

            trianglesVar2++;
          }

          printf("\n");

          trianglesVar1++;
        }

        break;

      case 3:
        printf("\n\nPrograma finalizado!\n\n");
        return 0;
        break;
    };
  } while (imput <= 3);

  return 0;
}