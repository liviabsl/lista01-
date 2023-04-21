#include <stdio.h>
#include <stdlib.h>
#include "questao13.h"

void entrada13(int *numero){
    printf("Digite um numero: ");
    scanf("%d",numero);
}

void processamento13(int *numero,int *divisivel){
    if (*numero % 5 == 0){
        *divisivel = 1;
    }else{
        *divisivel = 0;
    }
}

void saida13(int divisivel){
    if (divisivel == 1){
        printf("O numero e divisivel por 5!");
    } else{
        printf("O numero nao e divisivel por 5");
    }


}

void questao13(void){
    //Declaração de variáveis
    int numero, div;

    //Entrada dos dados
    entrada13(&numero);

    //Processamento dos dados
    processamento13(&numero,&div);

    //Saída dos dados
    saida13(div);
}
