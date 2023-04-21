#include <stdio.h>
#include <stdlib.h>
#include "questao08.h"

void entrada08(float *km){
  printf("Digite a velocidade em km/h: ");
  scanf("%f", km);
}

void processamento08(float *km, float *m){
  *m = *km / 3.6;
}

void saida08(float m){
  printf("A velocidade em m/s: %.2fm/s\n",m);
}

void questao08 (void){
  //Declaração de variáveis
  float km, ms;

  //Entrada
  entrada08(&km);

  //Processamento
  processamento08(&km,&ms);

  //Saída
  saida08(ms);
}
