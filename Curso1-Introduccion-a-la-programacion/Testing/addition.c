#include <stdio.h>



double add(double, double);

int main(){

  double a = 4.212121212121;
  double b = 1.23345;
  double erg;
  erg = add(a,b);
  printf("%f\n", erg);


  return 0;
}



double add(double x, double y){
  return x+y;
}
