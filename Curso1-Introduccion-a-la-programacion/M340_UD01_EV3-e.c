#include <stdio.h>


int menor(int a, int b);


int main(){
  int a,b,min;
  printf("Introduzca un numero: ");
  scanf("%d", &a);

  printf("Intoduzca un segundo numero: ");
  scanf("%d", &b);

  min = menor(a,b);

  printf("El Minimo de %d y %d es: %d",a,b,min);





  return 0;
}


int menor(int a, int b){
  if(a<=b)return(a);
  else return(b);
}
