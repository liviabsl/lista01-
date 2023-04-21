#include<stdio.h>
#include<stdlib.h>
#include"questao11.h"

void entrada11(float *numero){
    printf("Informe um numero: ");
    scanf("%f",numero);
}
void processamento11(float *numero){
    if (*numero >= 100 && *numero <=500){
        printf("O numero esta entre 100 e 500\n");
    }
    printf("O numero nao esta entre 100 e 500");
    }


void questao11(void){
    float numero;
    entrada11(&numero);
    processamento11(&numero);
}
