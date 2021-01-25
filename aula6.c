#include <stdio.h>

float imc (float altura, float peso){
 float calculo = peso / (altura*altura);
 return calculo;
}

int main(){
  float altura;
  float peso;

  printf("Digite sua altura: ");
  scanf("%f", &altura);

  printf("Digite seu peso: ");
  scanf("%f", &peso);

  imc(altura, peso);

  printf("Seu IMC é:%f", imc(altura, peso));
  
}