#include <stdio.h>
#include <stdlib.h>
#include "questao20.h"

void entrada20(float *numero1, float *numero2, float *numero3){
    printf("Numero 1: ");
    scanf("%f", numero1);
    printf("Numero 2: ");
    scanf("%f", numero2);
    printf("Numero 3: ");
    scanf("%f", numero3);
}

void processamento20(float *numero1, float *numero2, float *numero3, float *maior){

        if(*numero1 > *numero2 && *numero1> *numero3){
                *maior = 1;
        }
        else if(*numero2 > *numero1 && *numero2>*numero3){
            *maior=2;
        }
        else{
            *maior=3;
        }
}

void saida20(float maior){
    printf("O numero %f é maior", maior);
}

void questao20(void){
    //Declaração de variáveis
    float numero1, numero2, numero3, maior;

    //Entrada de dados
    entrada20(&numero1, &numero2, &numero3);

    //Processamento dos dados
    processamento20(&numero1, &numero2, &numero3, &maior);

    //Saída de dados
    saida20(maior);
}


