#include<stdio.h>
#include<stdlib.h>
#include"questao06.h"

void entrada06(float *preco1,float *preco2){
    printf("Informe o valor antigo: R$");
    scanf("%f",preco1);
    printf("Informe o valor novo: R$");
    scanf("%f",preco2);
}

void processamento06(float *preco1, float *preco2, float *saida){
    *saida = ((*preco2 - *preco1) / *preco1) * 100.0;
}

void saida06(float saida){
    printf("O aumento foi de %.2f%%\n",saida);
}

void questao06(void){
    //Declaração das variáveis
    float precoAnt,precoNovo,aumento;

    //Entrada dos dados
    entrada06(&precoAnt,&precoNovo);

    //Processamento dos dados
    processamento06(&precoAnt,&precoNovo,&aumento);

    //Saída dos dados
    saida06(aumento);
}
