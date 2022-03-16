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
/* write a struct to the file */
void WritePersonFixedLength(struct person* input, FILE* target) {
  // use fprintf to write input->firstname '%-20s'
  fprintf(target, "%-20s", input->firstname);

  // use fprintf to write input->middlename '%-20s'
  fprintf(target, "%-20s", input->middlename);
  // use fprintf to write input->lastname '%-20s'
  fprintf(target, "%-20s", input->lastname);
  // use fprintf to write input->age '%8d'
  fprintf(target, "%8d", input->age);

  /* add a newline to the file so that it is a whole lot more readable,
   we need to remember to skip this when we read it out			*/
  fprintf(target, "\n");
}