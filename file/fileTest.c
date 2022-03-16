#include <stdio.h>
#include <string.h>

#include "person.h"

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