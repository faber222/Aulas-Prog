#include <math.h>
#include <stdio.h>

int main() {
  int hypotenuse, collared1, collared2;
  int powCollared1, powCollared2, powhypotenuse;
  int imput = 0;

  float result;

  printf("Calculadora de triangulo retângulo\n");
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
      printf("\n%d o valor digitado² \n", powCollared1);
      powCollared2 = pow(collared2, 2);
      printf("\n%d o valor digitado² \n", powCollared2);

      result = sqrt(powCollared1 + powCollared2);
      printf("\n%f o resultado \n", result);

      break;
    case 2:
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
  return 0;
}