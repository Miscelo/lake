#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>




int main (){

  char x;
  char y='A';

  char *Px;
  char *Py=&y;

  *Py=y+1;
  x=*Py+1;

  Px=&x;


  





   return 0;
}
