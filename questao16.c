#include<stdio.h>
#include<stdlib.h>
#include"questao16.h"

void entrada16(float *salario){
    printf("Digite seu salario bruto: R$");
    scanf("%f",salario);
}

void processamento16(float *salario){
    if (*salario >= 2000){
        *salario = *salario * 0.8;
    }else{
        *salario = *salario *0.9;
    }
}

void saida16(float salario){
    printf("O salario final e: %.1f",salario);
}

void questao16(void){
    //Declaração de variáveis
    float salario;
    int desconto;

    //Entrada dos dados
    entrada16(&salario);

    //Processamento
    processamento16(&salario);

    //Saída dos dados
    saida16(salario);
}
