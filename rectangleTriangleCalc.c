/*
AUTHOR: FABER BERNARDO JUNIOR
DATE: 11/30/2021
PROGRAM SYNOPSIS: Compute the imput at two value for calc the rectangle triangle 
ENTRY DATA: imput
OUTPUT DATA: result
*/

#include <math.h>
#include <stdio.h>

int main() {
  int hypotenuse, collared1, collared2;
  int powCollared1, powCollared2, powhypotenuse;
  int imput = 0;

  float result;

  do {
    printf("Rectangle Triangle Calculator\n");
    printf("\nPlease, input the value of printing!");
    printf("\n(1) for calculate the hypotenuse");
    printf("\n(2) for calculate the collared");
    printf("\n(3) for finishing the program\n");
    scanf("%d", &imput);

    switch (imput) {
      case 1:
        printf("Enter the first value at collared\n");
        scanf("%d", &collared1);
        printf("Enter the second value at collared\n");
        scanf("%d", &collared2);

        powCollared1 = pow(collared1, 2);
        printf("\nThe value output² %d\n", powCollared1);
        powCollared2 = pow(collared2, 2);
        printf("\nThe value output² %d\n", powCollared2);

        result = sqrt(powCollared1 + powCollared2);
        printf("\n\nThe result is %f\n", result);
        printf("\n/-----------------------------------------------------/\n\n");

        break;
      case 2:
        printf("Enter the value at hypotenuse\n");
        scanf("%d", &hypotenuse);
        printf("Enter the value at collared\n");
        scanf("%d", &collared1);

        powhypotenuse = pow(hypotenuse, 2);
        printf("\nThe value output² %d\n", powhypotenuse);
        powCollared1 = pow(collared1, 2);
        printf("\nThe value output² %d\n", powCollared1);

        result = sqrt(powhypotenuse - powCollared1);
        printf("\n\nThe result is %f\n", result);
        printf("\n/-----------------------------------------------------/\n\n");
        break;
      case 3:
        printf("\n\nFinish program!\n\n");
        return 0;
        break;
      default:
        printf("Wrong imput!\n");
        printf("Error!\n");
        printf("Close Calc!\n ");
    }

  } while (imput <= 3);

  return 0;
}