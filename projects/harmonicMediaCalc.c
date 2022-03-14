#include <math.h>
#include <stdio.h>

int main() {
  float numA, numB, numC;

  printf("Digite o primeiro numero inteiro positivo: \n");
  scanf("%f", &numA);
  printf("Digite o segundo numero inteiro positivo: \n");
  scanf("%f", &numB);
  printf("Digite o terceiro numero inteiro positivo: \n");
  scanf("%f", &numC);

  if (numA <= 0 || numB <= 0 || numC <= 0) {
    printf("voce digitou algum numero invalido. \n");
  } else {
    int escolha;
    float media;

    printf("Digite o tipo de media que voce quer calcular: \n");
    printf("1 - Geometrica\n");
    printf("2 - Ponderada\n");
    printf("3 - Harmonica\n");
    printf("4 - Aritmetica\n");
    scanf("%d", &escolha);

    switch (escolha) {
      case 1:
        media = cbrt(numA * numB * numC);
        printf("A media geometrica desses numeros e: %f\n", media);
        break;
      case 2:
        media = (numA + (numB * 2) + (numC * 3)) / 6;
        printf("A media ponderada desses numeros e: %f\n", media);
        break;
      case 3:
        media = 1 / (1 / numA + 1 / numB + 1 / numC);
        printf("A media harmonica desses numeros e: %f\n", media);
        break;
      case 4:
        media = (numA + numB + numC) / 3;
        printf("A media aritmetica desses numeros e: %f\n", media);
        break;
      default:
        printf("Opção invalida.\n");
    }
  }

  return 0;
}