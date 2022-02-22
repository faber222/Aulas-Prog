#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "person.h"

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

int main() {
  struct person person1, person2, person3, person4, person5;
  /* create a FILE pointer myfile */
  FILE* myfile;

  strcpy(person1.firstname, "Bartholomew");
  strcpy(person1.middlename, "");
  strcpy(person1.lastname, "Simpson");
  person1.age = 10;

  strcpy(person2.firstname, "Homer");
  strcpy(person2.middlename, "Jay");
  strcpy(person2.lastname, "Simpson");
  person2.age = 36;

  strcpy(person3.firstname, "Lisa");
  strcpy(person3.middlename, "");
  strcpy(person3.lastname, "Simpson");
  person3.age = 8;

  strcpy(person4.firstname, "Marjorie");
  strcpy(person4.middlename, "");
  strcpy(person4.lastname, "Simpson");
  person4.age = 34;

  strcpy(person5.firstname, "Margaret");
  strcpy(person5.middlename, "");
  strcpy(person5.lastname, "Simpson");
  person5.age = 1;

  /* use fopen to open the file data.dat in
     WRITE mode and set the pointer myfile */
  myfile = fopen("data.txt", "w");
  /* if the fopen operation was not successful print a message saying
     the file couldn't be opened then quit the program 'exit(1);' */
  if (myfile == NULL) {
    printf("the file couldn't be opened");
    exit(1);
  }

  printf("\n\nWrite the 5 structs to file\n\n");
  WritePersonFixedLength(&person1, myfile);
  WritePersonFixedLength(&person2, myfile);
  WritePersonFixedLength(&person3, myfile);
  WritePersonFixedLength(&person4, myfile);
  WritePersonFixedLength(&person5, myfile);

  /* use close to close the File pointer myfile */
  fclose(myfile);
}