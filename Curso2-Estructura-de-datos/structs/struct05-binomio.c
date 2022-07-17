/*También es posible la asignación de un miembro de una estructura con el de otro
miembro del mismo tipo.*/

#include <stdio.h>
#include <string.h>

struct binomio{
  int a;
  float b;
};



int main(){

  struct binomio bin={1, 3.5};
  bin.b = 9.9F;

  printf("%f\n", bin.b);


  return 0;
}
