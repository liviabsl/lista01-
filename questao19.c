#ifndef QUESTAO19_C_INCLUDED
#define QUESTAO19_C_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "questao19.h"

void entrada19(float *lado1,float *lado2,float *lado3){
    printf("Digite a medida do lado 1: ");
    scanf("%f",lado1);
    printf("Digite a medida do lado 2: ");
    scanf("%f",lado2);
    printf("Digite a medida do lado3: ");
    scanf("%f",lado3);
}

void processamento19(float *lado1,float *lado2,float *lado3,int *tipo){
    if (*lado1 == *lado2 && *lado2 == *lado3){
        *tipo = 1;
    }else if (*lado1 == *lado2 || *lado2 == *lado3 || *lado1 == *lado3){
        *tipo = 2;
    }else{
        *tipo = 3;
    }
}

void saida19(int tipo){
    if (tipo == 1){
        printf("Triangulo Equilatero! \n");
    }else if(tipo == 2){
        printf("Triangulo Isosceles!\n");
    }else{
        printf("Triangulo Escaleno!\n");
    }
}

void questao19(void){
    //Declaração de variáveis
    float a,b,c;
    int triangulo;

    //Entrada de dados
    entrada19(&a,&b,&c);

    //Processamento dos dados
    processamento19(&a,&b,&c,&triangulo);

    //Saída de dados
    saida19(triangulo);
}

#endif // QUESTAO19_C_INCLUDED
