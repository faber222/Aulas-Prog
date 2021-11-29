#include <conio.h>
#include <math.h>
#include <stdio.h>

main() {
  float number1, number2, result;
  char operator;

  printf("\n Enter the first number:");
  scanf("%f", &number1);
  printf("\n Enter the second number:");
  scanf("%f", &number2);
  printf("\n Enter the operator:");
  scanf("%s", &operator);

  // getch() espera que o usuário digite uma tecla e retorna este caractere
  getch();
  if (operator == '+') {
    result = number1 + number2;
    printf("\n the result is: %f", result);

  }

  else if (operator == '-') {
    result = number1 - number2;
    printf("\n the result is: %f", result);

  }

  else if (operator == '/') {
    result = number1 / number2;
    printf("\n the result is: %f", result);

  }

  else if (operator == '*') {
    result = number1 * number2;
    printf("\n the result is: %f", result);
  }
  getch();
}