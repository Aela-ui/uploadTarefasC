#include <stdio.h>
//uma função que recebe um número e retorna sua dezena.
//Por exemplo, se receber 123 deve retornar 2; se receber 493 deve retornar 9.

int calculo (int x){
  int calculo = x%100;
  int resultado = calculo/10;
  return resultado;
}

int main(){
  int numero;
  printf("Digite o numero desejado: ");
  scanf("%i", &numero);

  calculo(numero);

  printf("O resultado é: %i", calculo(numero));
}