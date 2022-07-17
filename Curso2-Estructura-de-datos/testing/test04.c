#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>




int main (){

  float *p;
  float *q;



  float x[]={1,2,3,4,5,6};
  p=x;
  q=p++;

  printf("%g\n", *p-q[3]);

   return 0;
}
