/*
Imagina un programa en C con las siguientes variables:
int i,j;long ix;short s;float x;double dx;char c;
Determina el tipo de datos necesario para cada una de las siguientes
expresiones:

i+c -> entera
x+c ->
dx+x
((int)dx)+ix
i+x
s+j
ix+j
s+c
ix+c
*/
#include <stdio.h>

int main(){
  int i,j;
  long int ix;
  short int s;
  float x;
  double dx;
  char c;

  i = 42;
  c='c';
  float res = i + c;
  printf("%c", res);








  return 0;
}
