#include <stdio.h>
#include <math.h>

int quadrat(int x){
  return x*x;
}


int doppelt(int quadrat(int x), int y){
  int erg = quadrat(x) + y;
  return erg;
}


int main ()
{


   int ergebnis;
   ergebnis = doppelt(int quadrat(int 3), 4);
   printf("%d\n", ergebnis");


   return(0);
}
