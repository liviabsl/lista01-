#include <stdio.h>
#include <stdlib.h>
#include "questao01.h"

void entrada(int *num1, int *num2, int *num3){
    //entrada
    printf("Numero 1: ");
    scanf("%d", num1);
    printf("Numero 2: ");
    scanf("%d", num2);
    printf("Numero 3: ");
    scanf("%d", num3);
}

void processamento(int *num1, int *num2, int *num3, int *resultado){
    *resultado = *num1 + *num2 + *num3;
}

void saida(resultado){
    printf("O resultado é = %d\n", resultado);
}

void questao01(void){
    //declaração
    int numero1, numero2, numero3, resultado;

    //entrada
    entrada(&numero1, &numero2, &numero3);

    //processamento
    processamento(&numero1, &numero2, &numero3, &resultado);

    //saída
    saida(resultado);
}
