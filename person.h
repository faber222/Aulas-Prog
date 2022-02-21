#include <stdio.h>
#include <string.h>

struct person {
  char firstname[20];
  char middlename[20];
  char lastname[20];
  int age;
};

void PrintPerson(struct person input) {
  printf("First Name: %s\n", input.firstname);
  printf("Middle Name: %s\n", input.middlename);
  printf("Last Name: %s\n", input.lastname);
  printf("Age: %d\n\n", input.age);
}