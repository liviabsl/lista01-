#include <stdio.h>
#include <stdlib.h>
#include "questao05.h"

void entrada05(float *salarioBase, int *dependentes){
    //entrada
    printf("Digite seu salario base: ");
    scanf("%f", salarioBase);
    printf("E a quantidade de dependentes: ");
    scanf("%d", dependentes);
}

void processamento05(float *salarioBase, float *salarioBruto, int *dependentes){
    *salarioBruto = *salarioBase + (*dependentes * 32);
    *salarioBruto = *salarioBruto - ((*salarioBruto-27.50)/100);

}

void saida05(float salarioBruto){
    printf("O salario bruto e: %.1f\n", salarioBruto);
}

void questao05(void){
    //declaração
    float salarioBase, salarioBruto;
    int dependentes;

    //entrada
    entrada05(&salarioBase, &dependentes);

    //processamento
    processamento05(&salarioBase, &salarioBruto, &dependentes);

    //saída
    saida05(salarioBruto);
}
