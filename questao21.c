#include <stdio.h>
#include <stdlib.h>
#include "questao21.h"

void entrada21(float *numero1, float *numero2, float *numero3){
    printf("Numero 1: ");
    scanf("%f", numero1);
    printf("Numero 2: ");
    scanf("%f", numero2);
    printf("Numero 3: ");
    scanf("%f", numero3);
}

void processamento21(float *numero1, float *numero2, float *numero3, float *maior, float *medio, float *menor){
    if(*numero1 > *numero2 && *numero1> *numero3){
            *maior = *numero1;
            if(*numero2>*numero3){
                *medio=*numero2;
                *menor=*numero3;
            }
            else{
                *medio=*numero3;
                *menor=*numero2;
            }
        }

        else if(*numero2 > *numero1 && *numero2>*numero3){
            *maior=*numero2;
            if(*numero1>*numero3){
                *medio=*numero1;
                *menor=*numero3;
            }
            else{
                *medio=*numero3;
                *menor=*numero1;
            }
        }

        else if(*numero1 == *numero2 && *numero2 == *numero3){
            printf("Numeros identicos!\n");
        }

        else{
            *maior=*numero3;
            if(*numero1>*numero2){
                *medio=*numero1;
                *menor=*numero2;
            }
            else{
                *medio=*numero2;
                *menor=*numero1;
            }
        }
}

void saida21(float menor, float medio, float maior){
    printf("%.1f\n %.1f\n %.1f\n", menor, medio, maior);
}


void questao21(void){
    //Declaração de variáveis
    float numero1, numero2, numero3, maior,medio, menor;

    //Entrada de dados
    entrada21(&numero1, &numero2, &numero3);

    //Processamento dos dados
    processamento21(&numero1, &numero2, &numero3, &maior, &medio, &menor);

    saida21(menor, medio, maior);


}
