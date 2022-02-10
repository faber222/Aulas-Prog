#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**********************************/
/***** DEFINIÇÕES DESTE MÓDULO  ****/
/**********************************/

#define TAM_MAT 10
#define MAX_TIROS 30
#define MAX_NOME 30

#define LIVRE 0
#define PORTA_AVIOES 1
#define FRAGATA 2
#define SUBMARINO 3

/**********************************/
/***** VARIÁVEIS GLOBAIS **********/
/**********************************/

int ZonaDeGuerra[TAM_MAT][TAM_MAT]; /* Matriz do espaço de batalha */
int ContadorTiros = 0;
int PontuacaoFinal; /* acumula a pontuação do jogador */
char nome[MAX_NOME];
int x_sorteado;
int y_sorteado;

/***********************************/
/****  FUNÇÕES DESTE MÓDULO ********/
/***********************************/

/***** FUNÇÕES DE INICIALIZAÇÃO ****/

void ZerarMatriz() {
  int i, j;

  for (i = 0; i < TAM_MAT; i++)
    for (j = 0; j < TAM_MAT; j++) ZonaDeGuerra[i][j] = LIVRE;
}

void SortearCasa() {
  do {
    /* generate secret number: */
    x_sorteado = rand() % TAM_MAT;
    y_sorteado = rand() % TAM_MAT;
  } while (ZonaDeGuerra[x_sorteado][y_sorteado] != LIVRE);
}

void PosicionarFragatas() {
  int i;
  for (i = 0; i < 4; i++) {
    SortearCasa();
    ZonaDeGuerra[x_sorteado][y_sorteado] = FRAGATA;
  }
}

void PosicionarSubmarinos() {
  int i;
  for (i = 0; i < 5; i++) {
    SortearCasa();
    ZonaDeGuerra[x_sorteado][y_sorteado] = SUBMARINO;
  }
}

void PosicionarPortaAvioes() {
  SortearCasa();
  ZonaDeGuerra[x_sorteado][y_sorteado] = PORTA_AVIOES;
}

void PosicionarNavios() {
  /* initialize random seed: */
  srand(time(NULL));

  PosicionarPortaAvioes();
  PosicionarFragatas();
  PosicionarSubmarinos();
}

/*** FUNÇÕES DE IMPRESSÃO NA TELA **/

void ImprimeLinha(int linha) {
  int j;

  printf("     ");
  for (j = 0; j < TAM_MAT; j++) {
    printf("| %2d ", ZonaDeGuerra[linha][j]);
  }
  printf("|\n");
  printf("     +----+----+----+----+----+----+----+----+----+----+\n");
}

void ImprimeLinhaEscondida(int linha) {
  int j;

  printf("     ");
  for (j = 0; j < TAM_MAT; j++) {
    if (ZonaDeGuerra[linha][j] >= 0 && ZonaDeGuerra[linha][j] <= 3)
      printf("| -- ");
    else
      printf("| %2d ", ZonaDeGuerra[linha][j]);
  }
  printf("|\n");
  printf("     +----+----+----+----+----+----+----+----+----+----+\n");
}

void ImprimeMatrizTudo() {
  int i;

  printf("     +----+----+----+----+----+----+----+----+----+----+\n");
  for (i = 0; i < TAM_MAT; i++) ImprimeLinha(i);
}

void ImprimeMatrizEscondida() {
  int i;

  printf("     +----+----+----+----+----+----+----+----+----+----+\n");
  for (i = 0; i < TAM_MAT; i++) ImprimeLinhaEscondida(i);
}

int Tiro() { /* implementar a função Tiro conforme enunciado acima */ }

int main() {
  int situacao;
  ZerarMatriz();
  PosicionarNavios();
  ImprimeMatrizEscondida();
  do {
    situacao = Tiro();
  } while (situacao == 0);
  /*
    Implementar aqui o tratamento final da variável situação
  */
  return 0;
}