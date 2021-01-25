#include <stdio.h>
//Uma função que recebe um número inteiro positivo menor que 1000 e retorna a soma de seus dígitos.

int solucao (int x){
  if(x >= 100 || x < 1000){
    int calculo = x / 100 + (x / 10) % 10 + (x % 10) % 10;
    return calculo;
  }else{
    return 0;
  }
}

int solucao2(int y){
  if(y < 100){
    int calculo =  (y/10) + (y%10);
    return calculo;
  }else{
    return 0;
  }
}

int main(){
  int numero;
  printf("Digite o numero desejado: ");
  scanf("%i", &numero);

  solucao(numero);
  solucao2(numero);

  printf("O resultado é: %i", solucao(numero));
}
