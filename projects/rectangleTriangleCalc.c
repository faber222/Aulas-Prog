/*
AUTHOR: FABER BERNARDO JUNIOR
DATE: 11/30/2021
PROGRAM SYNOPSIS: Compute the imput at two value for calc the rectangle triangle
ENTRY DATA: imput
OUTPUT DATA: result
*/

#include <math.h>
#include <stdio.h>
#define PI 3.14159265

float angle, sinValue, cosValue, tgValue;

void Sin() {
  printf("\nEnter the angle value\n");
  scanf("%f", &angle);
  sinValue = sin(angle * PI / 180);
  printf("\nThe sin value is %f = %f\n", angle, sinValue);
}

void Coss() {
  printf("\nEnter the angle value\n");
  scanf("%f", &angle);
  cosValue = cos(angle * PI / 180);
  printf("\nThe cos value is %f = %f\n", angle, cosValue);
}

void Tg() {
  printf("\nEnter the angle value\n");
  scanf("%f", &angle);
  tgValue = tan(angle * PI / 180);
  printf("\nThe tg value is %f = %f\n", angle, tgValue);
}

int main() {
  float hypotenuse, collared1, collared2;
  float powCollared1, powCollared2, powhypotenuse;
  float oppositeCollared, adjacentCollared;

  int imput = 0, imputOpposite = 0, imputAdjacent = 0, imputHypotenuse = 0;

  float result;

  do {
    printf("\n\nRectangle Triangle Calculator\n");
    printf("\nPlease, input the value of printing!");
    printf("\n(1) for calculate the hypotenuse");
    printf("\n(2) for calculate the collared");
    printf(
        "\n(3) for calculate opposite collared using the trigonometric "
        "reasons");
    printf(
        "\n(4) for calculate adjacent collared using the trigonometric "
        "reasons");
    printf("\n(5) for calculate hypotenuse using the trigonometric reasons");
    printf("\n(6) for finishing the program\n");
    scanf("%d", &imput);

    switch (imput) {
      case 1:
        printf("Enter the first value at collared\n");
        scanf("%f", &collared1);
        printf("Enter the second value at collared\n");
        scanf("%f", &collared2);

        powCollared1 = pow(collared1, 2);
        printf("\nThe value output² %f\n", powCollared1);
        powCollared2 = pow(collared2, 2);
        printf("\nThe value output² %f\n", powCollared2);

        result = sqrt(powCollared1 + powCollared2);
        printf("\n\nThe result is %f\n", result);
        printf("\n/-----------------------------------------------------/\n\n");

        break;
      case 2:
        printf("Enter the value at hypotenuse\n");
        scanf("%f", &hypotenuse);
        printf("Enter the value at collared\n");
        scanf("%f", &collared1);

        powhypotenuse = pow(hypotenuse, 2);
        printf("\nThe value output² %f\n", powhypotenuse);
        powCollared1 = pow(collared1, 2);
        printf("\nThe value output² %f\n", powCollared1);

        result = sqrt(powhypotenuse - powCollared1);
        printf("\n\nThe result is %f\n", result);
        printf("\n/-----------------------------------------------------/\n\n");
        break;
      case 3:
        do {
          printf("\nPlease, input the method to calc opposite collared!");
          printf("\n(1) for calculate using sin");
          printf("\n(2) for calculate using tg");
          printf("\n(3) Stop!\n");
          scanf("%d", &imputOpposite);

          switch (imputOpposite) {
            case 1:
              Sin();
              printf("\nEnter the value at hypotenuse\n");
              scanf("%f", &hypotenuse);

              result = sinValue * hypotenuse;
              printf("\nThe value at opposite Collared is %.2f\n\n", result);
              imputOpposite = 4;

              break;
            case 2:
              Tg();
              printf("\nEnter the value at adjacent collared\n");
              scanf("%f", &adjacentCollared);

              result = tgValue * adjacentCollared;
              printf("\nThe value at adjacent Collared is %.2f\n\n", result);
              imputOpposite = 4;

              break;
            case 3:
              imputOpposite = 4;
              break;

            default:
              break;
          }

        } while (imputOpposite <= 3);

        break;
      case 4:
        do {
          printf("\nPlease, input the method to calc adjacent collared!");
          printf("\n(1) for calculate using cos");
          printf("\n(2) for calculate using tg");
          printf("\n(3) Stop!\n");
          scanf("%d", &imputAdjacent);

          switch (imputAdjacent) {
            case 1:
              Coss();
              printf("\nEnter the value at hypotenuse\n");
              scanf("%f", &hypotenuse);

              result = cosValue * hypotenuse;
              printf("\nThe value at adjacent Collared is %.2f\n\n", result);
              imputAdjacent = 4;

              break;
            case 2:
              Tg();
              printf("\nEnter the value at opposite collared\n");
              scanf("%f", &oppositeCollared);

              result = (oppositeCollared / tgValue);
              printf("\nThe value at adjacent Collared is %.2f\n\n", result);
              imputAdjacent = 4;

              break;
            case 3:
              imputAdjacent = 4;
              break;

            default:
              break;
          }

        } while (imputAdjacent <= 3);

        break;

      case 5:
        do {
          printf("\nPlease, input the method to calc hypotenuse!");
          printf("\n(1) for calculate using sin");
          printf("\n(2) for calculate using cos");
          printf("\n(3) Stop!\n");
          scanf("%d", &imputHypotenuse);

          switch (imputHypotenuse) {
            case 1:
              Sin();
              printf("\nEnter the value at opposite Collared\n");
              scanf("%f", &oppositeCollared);

              result = (oppositeCollared / sinValue);
              printf("\nThe value at hypotenuse is %.2f\n\n", result);
              imputHypotenuse = 4;

              break;
            case 2:
              Coss();
              printf("\nEnter the value at adjacent collared\n");
              scanf("%f", &adjacentCollared);

              result = (adjacentCollared / cosValue);
              printf("\nThe value at hypotenuse is %.2f\n\n", result);
              imputHypotenuse = 4;

              break;
            case 3:
              imputHypotenuse = 4;
              break;

            default:
              break;
          }

        } while (imputHypotenuse <= 3);

        break;

      case 6:
        printf("\n\nFinish program!\n\n");
        return 0;
        break;
      default:
        printf("Wrong imput!\n");
        printf("Error!\n");
        printf("Close Calc!\n ");
    }
  } while (imput <= 6);

  return 0;
}