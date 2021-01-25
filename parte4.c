#include <stdio.h>

int main (void){
  float altura, peso, calculo;

  printf("Digite sua altura: ");
  scanf("%f", &altura);

  printf("Digite seu peso: ");
  scanf("%f", &peso);

  calculo = peso / (altura*altura);

  printf("Seu IMC é:%f", calculo);
  
}