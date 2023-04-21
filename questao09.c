#include <stdio.h>
#include <stdlib.h>
#include "questao09.h"

void entrada09(float *numero){
  printf("Digite um numero ");
  scanf("%f", numero);
}

void processamento09(float *numero){
  if(*numero>100){
    printf("Atencao, esse numero e maior que 100");
  }
}


void questao09 (void){
  //Declaração de variáveis
  float numero;

  //Entrada
  entrada09(&numero);

  //Processamento
  processamento09(&numero);

}
