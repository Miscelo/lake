/*
  Comprueba de dos numeros naturales el numero mas alto
*/

#include <stdio.h>

void checkSize(int a, int b);

int main(){

  int x;
  int y;
  printf("Introduzca 2 numeros naturales: \n");
  scanf("%d%d",&x,&y);
  checkSize(x,y);

  //printf("%d,%d",x,y);
  return 0;
}

void checkSize(int a, int b){
  if(a<b){
    printf("%d es menor a %d",a,b);
  }
  else if(a>b){
    printf("%d es mayor a %d",a,b);
  }
  else{
    printf("%d = %d",a,b);
  }


}






