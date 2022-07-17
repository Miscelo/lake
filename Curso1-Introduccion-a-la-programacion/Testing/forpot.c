#include <stdio.h>


//exponent func mit for schleife
float exponent(float, int);


int main(){




  float erg;
  erg = exponent(4,4);
  printf("%f\n",erg);

  return 0;
}



float exponent(float x, int e){
  float erg = 1.0;
  int i;
  for(i=1;i<=e;i++){
    erg = erg * x;
  }
  return erg;


}
