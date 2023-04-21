#include <stdio.h>
#include <stdlib.h>
#include "questao02.h"

void entrada02(float *num1, float *num2, float *num3, float *num4){
    //entrada
    printf("Numero 1: ");
    scanf("%f", num1);
    printf("Numero 2: ");
    scanf("%f", num2);
    printf("Numero 3: ");
    scanf("%f", num3);
    printf("Numero 4: ");
    scanf("%f", num4);
}

void processamento02(float *num1, float *num2, float *num3, float *num4, float *resultado){
    *resultado = (*num1 + *num2 + *num3 + *num4)/4;
}

void saida02(float resultado){
    printf("O resultado da média dos valores é: %.1f\n", resultado);
}

void questao02(void){
    //declaração
    float num1, num2, num3, num4, resultado;

    //entrada
    entrada02(&num1, &num2, &num3, &num4);

    //processamento
    processamento02(&num1, &num2, &num3, &num4, &resultado);

    //saída
    saida02(resultado);
}
