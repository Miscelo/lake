#include <stdio.h>



int main(){

  int i,j, *p;   //p es puntero a int
  p = &i;   // p contiene el valor de la dirección de memoria de i
  *p = 42;   //p`toma el valor 42
  p = &j;      //p contiene ahora la dirección de j
  *p = -2;     //j toma el valor -2
  printf("%d\n", p);
  printf("%d\n", *p);





  return 0;
}
