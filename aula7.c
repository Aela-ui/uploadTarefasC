#include <stdio.h>
//Calcula o resto de um número dividido por 10
int resto (int x){
  int calculo = x%10;
  return calculo;
}

int main(){
  int numero;
  printf("Digite o numero desejado: ");
  scanf("%i", &numero);

  resto(numero);

  printf("O resultado é: %i", resto(numero));

}