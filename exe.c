#include <stdio.h>

int main (){
  int a=6;
  int b=3;
  int x=0;
  switch ((a+b)%3) {
    case 2:
      x=1;
      break;
    case 1:
      x=2;
      printf("2");
      break;
    case 0:
      x=3;
      break;
  }
  printf("%d\n", x);
}
