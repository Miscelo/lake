#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


char *fun(char **p, char *, char);


int main (){



  char *p[]={"uno", "dos", "tres", "cuatro"};

  char **pp = p;

  char car = 'r';


  p[0] = fun(p,p[0], p[0][0]);
  printf("%s\n", p[0]);

   return 0;
}


char *fun(char **p, char *q, char r){
  return r;
}
