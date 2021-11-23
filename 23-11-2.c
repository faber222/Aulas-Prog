#include <stdio.h>

int main()
{
    int i, N; //variaveis

    printf("Entre com o número\n");//printa na tela 
    scanf ("%d", &N);//verifica o que foi digitado
    while (N<=0){//evita numeros negativos
        printf("Entre com o número positivo\n");
        scanf ("%d", &N);
    }
    for (i=N;i>0;i--) {//variável que define que o valor vai ser verificado baseado no N de entrada
        if (i%2==0)//calculo de divisão, se o número for quebrado, ele é primo
            printf("não é primo ====> %d\n", i);
        else 
            printf("número é primo ====> %d\n", i); 
    }  
    printf("FIM\n");//finaliza código

    return 0;
}