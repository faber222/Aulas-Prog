#include <math.h>
#include <stdio.h>

typedef struct {
  int x;
  int y;
} coordinate;

float distanceCalc(coordinate pointer1, coordinate pointer2) {
  int dx, dy;
  float dist, powX, powY;

  dx = pointer2.x - pointer1.x;
  dy = pointer2.y - pointer1.y;
  powX = pow(dx, 2);
  powY = pow(dy, 2);

  dist = sqrt(powX + powY);

  return dist;
}

int quadrant(coordinate p) {
  if (p.x == 0 || p.y == 0) {
    return 0;
  }
  if (p.x < 0) {
    if (p.y < 0) {
      return 3;
    }
    return 2;
  }
  if (p.x > 0) {
    if (p.y < 0) {
      return 4;
    }
    return 1;
  }
}

int main() {
  int firstValue, secondValue, number;
  float distance;
  coordinate pointer1, pointer2;

  printf("How many times?\n");
  scanf("%d", &number);

  for (int i = 0; i < number; i++) {
    printf("%dº time\n", i + 1);
    printf("Enter the value at first X \n");
    scanf("%d", &pointer1.x);
    printf("Enter the value at first Y\n");
    scanf("%d", &pointer1.y);
    printf("Enter the value at second X\n");
    scanf("%d", &pointer2.x);
    printf("Enter the value at second Y\n");
    scanf("%d", &pointer2.y);

    firstValue = quadrant(pointer1);
    secondValue = quadrant(pointer2);
    distance = distanceCalc(pointer1, pointer2);

    printf("The distance between the first pointer to second pointer is %f\n",
           distance);
    printf("The first pointer is on the %dº quadrant\n", firstValue);
    printf("The second pointer is on the %dº quadrant\n\n", secondValue);
  }

  return 0;
}