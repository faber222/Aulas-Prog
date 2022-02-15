#include <conio.h>
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int number, imput = 0;
char character[100];
FILE *file;

void write() {
  file = fopen("faber.txt", "w");  // if not exist, will create
  if (file != NULL)                // if anything is wrong, will alarm
    printf("\nfaber.txt file was opened successfully\n");
  else {
    printf("\n\nError: The faber.txt file was not opened\n");
    system("pause");
    exit(0);
  }
  printf("How many items do you want to add?\n");
  scanf("%d", &number);
  for (int i = 1; i < number + 1; i++) {
    printf("Item - %d\n", i);
    scanf("%s", &character);  // scan the item for add in the file
    fprintf(file, "%d - %s\n", i, character);  // print into the file
  }
  fclose(file);  // close the file
};

void read() {
  file = fopen("faber.txt", "r");  // will open the file *.txt
  if (file != NULL)                // if anything is wrong, will alarm
    printf("\nfaber.txt file was opened successfully\n");
  else {
    printf("\n\nError: The faber.txt file was not opened\n");
    system("pause");
    exit(0);
  }
  char word[100];  // char to storage the word
  while (fgets(word, 100, file) !=
         NULL)  // fgets will capture the word to repeat while !n NULL
  {
    printf("%s", word);  // print the read word while looping
  }
  fclose(file);  // close the file
};

void alter() {
  file = fopen("faber.txt", "a");  // will open the file *.txt
  if (file != NULL)                // if anything is wrong, will alarm
    printf("\nfaber.txt file was opened successfully\n");
  else {
    printf("\n\nError: The faber.txt file was not opened\n");
    system("pause");
    exit(0);
  }
  printf("How many items do you want to add?\n");
  scanf("%d", &number);
  for (int i = 1; i < number + 1; i++) {
    printf("Item - %d\n", i);
    scanf("%s", &character);  // scan the item for add in the file
    fprintf(file, "\n%d - %s\n", i, character);  // print into the file
  }
  fclose(file);  // close the file
};

int main(void) {
  setlocale(LC_ALL, "pt_BR.URF-8");  // set language to pt-BR
  do {
    printf("\nSelect one of the options below");
    printf("\n(1) to create a list");
    printf("\n(2) to read an existing list");
    printf("\n(3) to edit an existing list");
    printf("\n(4) to exit the program\n");
    scanf("%d", &imput);  // scan the type valye
    switch (imput) {
      case 1:                              //
        setlocale(LC_ALL, "pt_BR.URF-8");  // set language to pt-BR
        write();                           // execute the function write
        break;
      case 2:
        setlocale(LC_ALL, "pt_BR.URF-8");  // set language to pt-BR
        read();                            // execute the function read
        break;
      case 3:
        setlocale(LC_ALL, "pt_BR.URF-8");  // set language to pt-BR
        alter();                           // execute the function alter
        break;
      case 4:
        setlocale(LC_ALL, "pt_BR.URF-8");  // set language to pt-BR
        printf("\n\nFinish program!\n\n");
        return 0;
        break;

      default:
        printf("Invalid value\n");
        printf("Error!\n");
        printf("Finish program!\n ");
        break;
    }

  } while (imput <= 3);

  printf("\n");
  system("pause");
  return 0;
}