#include <stdio.h>
#include <stdlib.h>
#include "questao03.h"

void entrada03(float *n1, float *n2, int *p1, int *p2){
    //entrada
    printf("Nota 1: ");
    scanf("%f", n1);
    printf("Nota 2: ");
    scanf("%f", n2);
    printf("Peso 1: ");
    scanf("%d", p1);
    printf("Peso 2: ");
    scanf("%d", p2);
}

void processamento03(float *n1, float *n2, int *p1, int *p2, float *resultado){
    *resultado = (*n1 * *p1 + *n2 * *p2)/(*p1 + *p2);
}

void saida03(float resultado){
    printf("O resultado da média é: %.1f\n", resultado);
}

void questao03(void){
    //declaração
    float n1, n2, resultado;
    int p1, p2;

    //entrada
    entrada03(&n1, &n2, &p1, &p2);

    //processamento
    processamento03(&n1, &n2, &p1, &p2, &resultado);

    //saída
    saida03(resultado);
}
