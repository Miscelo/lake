#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>




int main (){


  char y = 'A';
  char *Py = &y;
  *Py=y+1;

  char x;

  char *Px;
  x=*Py+1;
  Px = &x;

 // Py = F81, *Py = 'B', x = 'C',  Px = F80
  printf("%p\n", Py);   //adresse von y
  printf("%c\n", *Py);  //B
  printf("%c\n", x);     //C
  printf("%p\n", Px);    //adresse von y -1byte









   return 0;
}
