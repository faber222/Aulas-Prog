#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define maxSize 10
#define maxShots 15
#define maxName 30

#define free 0
#define aircraftCarrier 1
#define frigate 2
#define submarine 3

int warZone[maxSize][maxSize];
int shotCounter = 0;
int score = 0;
char name[maxName];
int x_chosen;
int y_chosen;

void resetMatrix() {
  int i, j;

  for (i = 0; i < maxSize; i++)
    for (j = 0; j < maxSize; j++) warZone[i][j] = free;
}

void randHouse() {
  do {
    /* generate secret number: */
    x_chosen = rand() % maxSize;
    y_chosen = rand() % maxSize;
  } while (warZone[x_chosen][y_chosen] != free);
}

void positionFrigates() {
  int i;
  for (i = 0; i < 5; i++) {
    randHouse();
    warZone[x_chosen][y_chosen] = frigate;
  }
}

void positionSubmarines() {
  int i;
  for (i = 0; i < 3; i++) {
    randHouse();
    warZone[x_chosen][y_chosen] = submarine;
  }
}

void positionAircraftCarrier() {
  int i;
  for (i = 0; i < 2; i++) {
    randHouse();
    warZone[x_chosen][y_chosen] = aircraftCarrier;
  }
}

void positionShips() {
  srand(time(NULL));

  positionAircraftCarrier();
  positionFrigates();
  positionSubmarines();
}

void printLine(int line) {
  int j;

  printf(" ");
  for (j = 0; j < maxSize; j++) {
    printf(" | %2d", warZone[line][j]);
  }
  printf(" |\n ");
  printf("    +----+----+----+----+----+----+----+----+----+----+\n");
}

void printLineHidden(int line) {
  int j;

  printf(" ");
  for (j = 0; j < maxSize; j++) {
    if (warZone[line][j] >= 0 && warZone[line][j] <= 3)
      printf(" |   ");
    else
      printf(" | %2d", warZone[line][j]);
  }
  printf(" |\n ");
  printf("    +----+----+----+----+----+----+----+----+----+----+\n");
}

void printMatrixAll() {
  int i;
  printf("\n\n");
  printf("        0    1    2    3    4    5    6    7    8    9  \n");
  printf(" ");
  printf("    +----+----+----+----+----+----+----+----+----+----+\n");
  for (i = 0; i < maxSize; i++) {
    printf(" %d ", i);
    printLine(i);
  }
}

void printMatrixHidden() {
  int i;
  printf("\n\n");
  printf("        0    1    2    3    4    5    6    7    8    9  \n");
  printf(" ");
  printf("    +----+----+----+----+----+----+----+----+----+----+\n");
  for (i = 0; i < maxSize; i++) {
    printf(" %d ", i);
    printLineHidden(i);
  }
}

int Tiro() {
  printMatrixHidden();
  int i, j;

  do {
    printf("\nEnter the position of X(horizontal)\n");
    scanf("%d", &j);
  } while (j > 9 || j < 0);
  do {
    printf("\nEnter the position of y(vertical)\n");
    scanf("%d", &i);
  } while (i < 0 || i > 9);

  if (warZone[i][j] == free) {
    printf("\nMiss, try again\n");
    shotCounter++;
    warZone[i][j] = 10;
  } else if (warZone[i][j] == frigate) {
    printf("\nYou hit a frigate\n");
    shotCounter++;
    score = score + 3;
    warZone[i][j] = 10;
  } else if (warZone[i][j] == submarine) {
    printf("\nYou hit a submarine\n");
    shotCounter++;
    score = score + 5;
    warZone[i][j] = 10;
  } else if (warZone[i][j] == aircraftCarrier) {
    printf("\nYou hit a aircraft carrier\n");
    shotCounter++;
    score = score + 10;
    warZone[i][j] = 10;
  } else if (warZone[i][j] == 10) {
    printf("\nYou already hit this location\n");
  }

  printf("\n\nFires = %d", shotCounter);
  printf("\n\nScore = %d", score);

  if (shotCounter == maxShots) {
    return 2;
  } else if (score == 50) {
    return 1;
  }
  return 0;
}

int main() {
  int situation;
  resetMatrix();
  positionShips();

  printf("\n\nPlease input your name: ");
  scanf("%s", name);

  printf("\nHi %s, is time to make a BOOM!", name);

  do {
    situation = Tiro();
  } while (situation == 0);
  if (situation == 2) {
    printf("\n--------------------------------------------------------");
    printf("\n--------------------------------------------------------");
    printf("\n\n Game over!\n");
    printf("\n--------------------------------------------------------");
    printf("\n Player: %s", name);
    printf("\n\nSeus tiros acabaram e sua pontuacao final foi de %d\n", score);
    printMatrixAll();
  } else if (situation == 1) {
    printf("\n--------------------------------------------------------");
    printf("\n--------------------------------------------------------");
    printf("\n\n Game over!\n");
    printf("\n--------------------------------------------------------");
    printf("\n Player: %s", name);
    printf("\n\nVoce destruiu todos os navios e sua pontuacao foi de %d\n",
           score);
    printMatrixAll();
  }

  return 0;
}