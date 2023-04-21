#include <stdio.h>
#include <stdlib.h>
#include "questao14.h"

void entrada14(int *numero){
    printf("Digite o numero: ");
    scanf("%d",numero);
}

void processamento14(int *numero, int *resto){
    if (*numero % 2 == 0){
        *resto = 0;
    } else {
        *resto=1;
    }

}

void saida14(int resto){
    if (resto == 0){
        printf("O numero e par!\n");
    }else{
        printf("O numero e impar!\n");
    }
}

void questao14(void){
    //Declaração de variáveis
    int numero, resto;

    //Entrada de dados
    entrada14(&numero);

    //Processamento dos dados
    processamento14(&numero,&resto);

    //Saída de dados
    saida14(resto);
}
