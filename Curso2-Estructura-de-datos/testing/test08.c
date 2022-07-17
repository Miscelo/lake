#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>





int main (){

  float x;
  float *p = &x;
  float **q = &p;
  *p = 8;
   printf("%g", **q);

   return 0;
}
