#include <conio.h>
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copiarConteudo(FILE *file1, FILE *file2) {
  char leitor[1000];
  while (fgets(leitor, 1000, file1) != NULL) {
    fputs(leitor, file2);
  }
};

int main(void) {
  FILE *file1 = fopen("faber.txt", "r");
  if (file1 != NULL) {  // if anything is wrong, will alarm
    printf("\nfaber.txt file was opened successfully\n");
  } else {
    printf("\n\nError: The faber.txt file was not opened\n");
    system("pause");
    exit(0);
  }

  FILE *file2 = fopen("lucas.txt", "w");

  copiarConteudo(file1, file2);
  fclose(file1);
  fclose(file2);
  system("pause");
  return 0;
}
