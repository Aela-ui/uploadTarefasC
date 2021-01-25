#include <stdio.h>
#include <stdbool.h>

int solucao(int ano){
  if(ano % 4 == 0 || ano%100 == 0 || ano % 400 == 0){
    printf("O ano é bissexto");
    return true;
  }else{
    printf("\nO ano não e bissexto");
    return false;
  }
}

int main(void){
  int ano;
  printf("Qual o ano que deseja sabe se e bissexto?\n");
  scanf("%i", &ano);

  solucao(ano);
}