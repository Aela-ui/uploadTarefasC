#include <stdio.h>

int main(void){
  float calculo, nota1, nota2, nota3;
  printf("Digite as 3 notas a serem calculadas a media: ");
  scanf("%f, %f, %f", &nota1, &nota2, &nota3);

  calculo = (nota1 + nota2 + nota3) / 2;

  printf("O resultado é:%.2f", calculo);
}