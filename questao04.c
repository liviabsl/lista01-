#include <stdio.h>
#include <stdlib.h>
#include "questao04.h"

void entrada04(float *salarioInicial, float *porcentagem){
    //entrada
    printf("Salario inicial: ");
    scanf("%f", salarioInicial);
    printf("Porcentagem de aumento ");
    scanf("%f", porcentagem);
}

void processamento04(float *salarioInicial, float *porcentagem, float *salarioFinal){
    *salarioFinal = *salarioInicial + (*salarioInicial * *porcentagem / 100);
}

void saida04(float salarioFinal){
    printf("O salário final é: %.1f\n", salarioFinal);
}

void questao04(void){
    //declaração
    float salarioInicial, salarioFinal, porcentagem;


    //entrada
    entrada04(&salarioInicial, &porcentagem);

    //processamento
    processamento04(&salarioInicial, &porcentagem, &salarioFinal);

    //saída
    saida04(salarioFinal);
}
