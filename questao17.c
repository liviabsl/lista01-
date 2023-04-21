#include <stdio.h>
#include <stdlib.h>
#include "questao17.h"

void entrada17(float *preco){
    printf("Digite o valor de compra: R$");
    scanf("%f",preco);
}

void processamento17(float *preco){
    if (*preco >= 200){
        *preco = *preco * 1.3;
    }else{
        *preco = *preco * 1.5;
    }
}

void saida17(float preco){
    printf("O preco para a venda deve ser: R$%.2f",preco);
}

void questao17(void){
    //Declaração de variáveis
    float valor;

    //Entrada de dados
    entrada17(&valor);

    //Processamento dos dados
    processamento17(&valor);

    //Saída de dados
    saida17(valor);
}
