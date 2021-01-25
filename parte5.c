#include <stdio.h>

int main(void){
  int consumo, valor, distancia, custo;
  printf("Qual o consumo do carro? \n");
  scanf("%i", &consumo);

  printf("Qual a distancia percorrida? \n");
  scanf("%i", &distancia);

  printf("Qual o valor do combustível? \n");
  scanf("%i", &valor);

  custo = (distancia/consumo)*valor;

  printf("O resultado é %i", custo);
}