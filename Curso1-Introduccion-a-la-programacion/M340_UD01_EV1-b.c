/*
ej2.c
Calcula potencias de base real positiva y exponente entero
*/
#include <stdio.h>
float potencia (float, int);

void main (){
  int exponente;
  float base;
  printf ("Introducir BASE y EXPONENTE: \n");
  scanf ("%f%d", &base, &exponente);

  if ( base <= 0.0 )
   printf ("Solo admito bases positivas \n");
  else { if ( exponente > 0 )
    printf ("Potencia: %f \n", potencia(base, exponente));
  else
    printf ("Potencia: %f \n", 1.0/potencia(base, -exponente));
  }
}

float potencia (float b, int e){
  if ( b == 1.0 )return (1.0);
  else {
    if ( e == 1 )return ( b );
    else {
      float p=1.0;
      for (int i=1; i<=e; i++){
          p=p*b;
      }
      return ( p );
    }
  }
}
