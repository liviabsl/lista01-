#include <stdio.h>
#include <stdlib.h>
#include "questao24.h"

void entrada24(float *valorCompra, float *valorPagamento){

    printf("Digite o valor da compra: ");
    scanf("%f", valorCompra);
    printf("Digite o valor do pagamento: ");
    scanf("%f", valorPagamento);

}

void processamento24(float *valorCompra, float *valorPagamento, int *troco, int *notas100, int *notas10, int *notas1){

    if (*valorPagamento < *valorCompra) {
        printf("Pagamento Negado\n");
        return 0;
    }

    *troco = *valorPagamento - *valorCompra;
    *notas100 = *troco / 100;
    *troco = *troco % 100;
    *notas10 = *troco / 10;
    *notas1 = *troco % 10;

}

void saida24(int notas100, int notas10, int notas1){

    printf("Notas de 100: %d\n", notas100);
    printf("Notas de 10: %d\n", notas10);
    printf("Notas de 1: %d\n", notas1);

}

int questao24(void) {
    float valorCompra, valorPagamento;
    int notas100, notas10, notas1, troco;

    entrada24(&valorCompra, &valorPagamento);

    processamento24(&valorCompra, &valorPagamento, &troco, &notas100, &notas10, &notas1);

    saida24(notas100, notas10, notas1);

    return 0;
}
