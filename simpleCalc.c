#include <stdio.h>

int main(void) {
  float number1, number2;
  char operator;

  printf("available operations\n");
  printf("'+' : addition\n");
  printf("'-' : subtraction\n");
  printf("'*' : multiplication\n");
  printf("'/' : division\n");
  printf("'%%' : rest of division\n");

  printf("\nEnter the expression of the form: number1 operator number2!\n");
  printf("Example: 1 + 1 ,  2.1 * 3.1.\n");

  scanf("%f", &number1);
  scanf(" %c", &operator);
  scanf("%f", &number2);

  printf("Calculating: %.2f %c %.2f = ", number1, operator, number2);

  switch (operator) {
    case '+':
      printf("%.2f\n\n", number1 + number2);
      break;

    case '-':
      printf("%.2f\n\n", number1 - number2);
      break;

    case '*':
      printf("%.2f\n\n", number1 * number2);
      break;

    case '/':
      if (number2 != 0)
        printf("%.2f\n\n", number1 / number2);
      else
        printf("There is no division by 0\n\n");
      break;

    case '%':
      printf("%d\n\n", (int)number1 % (int)number2);
      break;

    default:
      printf("Wrong imput!\n");
      printf("Error!\n");
      printf("Close Calc!\n ");
  }
  return 0;
}