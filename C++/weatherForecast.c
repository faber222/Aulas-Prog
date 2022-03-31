#include <stdio.h>
#include <string.h>
#define NUM 100

typedef struct {
  char data[NUM];
} barometer;

typedef struct {
  char value[NUM];
} thermometer;

int main(void) {
  int bar1, bar2, bar3;
  int ter1, ter2, ter3;
  char a[NUM] = "rise";
  char b[NUM] = "stationary";
  char c[NUM] = "lower";

  barometer bar;
  thermometer ter;

  printf("What position is the barometer in?\n");
  scanf("%s", bar.data);
  printf("What is the thermometer in??\n");
  scanf("%s", ter.value);

  bar1 = strcmp(bar.data, a);   // barometer rise
  bar2 = strcmp(bar.data, b);   // barometer stationary
  bar3 = strcmp(bar.data, c);   // barometer lower
  ter1 = strcmp(ter.value, a);  // thermometer rise
  ter2 = strcmp(ter.value, b);  // thermometer stationary
  ter3 = strcmp(ter.value, c);  // thermometer lower

  if (bar1 == 0 && ter1 == 0) {
    printf("Good weather, hot, dry winds\n");
  } else if (bar1 == 0 && ter2 == 0) {
    printf("Good weather, fresh east winds\n");
  } else if (bar1 == 0 && ter3 == 0) {
    printf("Good weather, south and southwest winds\n");
  };

  if (bar2 == 0 && ter1 == 0) {
    printf("The weather is getting better, east winds\n");
  } else if (bar2 == 0 && ter2 == 0) {
    printf("Tempo incerto, ventos variaveis\n");
  } else if (bar2 == 0 && ter3 == 0) {
    printf("chuva provavel, ventos de sul e sudeste\n");
  };

  if (bar3 == 0 && ter1 == 0) {
    printf("Tempo instavel, aproximacao de frente\n");
  } else if (bar3 == 0 && ter2 == 0) {
    printf("Frente quente com chuvas provaveis\n");
  } else if (bar3 == 0 && ter3 == 0) {
    printf("Chuvas abundantes e ventos de sul a sudoeste fortes\n");
  };
};