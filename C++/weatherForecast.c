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

  printf("What position is the barometer in? (rise, stationary or lower)\n");
  scanf("%s", bar.data);
  printf("What is the thermometer in? (rise, stationary or lower)\n");
  scanf("%s", ter.value);

  bar1 = strcmp(bar.data, a);   // barometer rise
  bar2 = strcmp(bar.data, b);   // barometer stationary
  bar3 = strcmp(bar.data, c);   // barometer lower
  ter1 = strcmp(ter.value, a);  // thermometer rise
  ter2 = strcmp(ter.value, b);  // thermometer stationary
  ter3 = strcmp(ter.value, c);  // thermometer lower

  if (bar1 == 0 && ter1 == 0) {
    printf("Good weather, warm and dry winds\n");
  } else if (bar1 == 0 && ter2 == 0) {
    printf("Good weather, fresh east winds\n");
  } else if (bar1 == 0 && ter3 == 0) {
    printf("Good weather, south to southwest winds\n");
  };

  if (bar2 == 0 && ter1 == 0) {
    printf("The weather is getting better, east winds\n");
  } else if (bar2 == 0 && ter2 == 0) {
    printf("Uncertain weather, variable winds\n");
  } else if (bar2 == 0 && ter3 == 0) {
    printf("Probable rain, south to southeast winds\n");
  };

  if (bar3 == 0 && ter1 == 0) {
    printf("Unstable weather, frontal approach\n");
  } else if (bar3 == 0 && ter2 == 0) {
    printf("Warm front with probable rains\n");
  } else if (bar3 == 0 && ter3 == 0) {
    printf("Plenty of rain and strong south-southwest winds\n");
  };
};