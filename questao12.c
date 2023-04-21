#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "questao12.h"

void entrada12(float *n1,float *n2){
    printf("Informe a primeira nota: ");
    scanf("%f",n1);
    printf("Agora, informe a segunda nota: ");
    scanf("%f",n2);
}

void processamento12(float *n1,float *n2,float *media){
    *media= (*n1 + *n2)/2.0;
}

void saida12(float media){
    printf("A media e %.1f\n",media);
    if (media>7.0){
        printf("O aluno esta APROVADO!\n");
    }else{
        printf("O aluno esta REPROVADO!\n");
    }
}
void questao12(void){
    //Declaração de variáveis
    float nota1,nota2,media;

    //Entrada dos dados
    entrada12(&nota1,&nota2);

    //Processamento
    processamento12(&nota1,&nota2,&media);

    //Saída dos dados
    saida12(media);
}
