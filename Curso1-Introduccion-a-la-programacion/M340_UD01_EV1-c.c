/*
ej3.c
Lee un numero entero y determina si es par o impar
*/
#include <stdio.h>
#define MOD % /* %, es el operador que obtiene el resto de la división entera */
#define EQ ==
#define NE !=
#define SI 1
#define NO 0

int es_impar(int);

void main (){
  int n;
  printf ("Introduzca un entero: \n");
  scanf ("%d", &n);

  if (es_impar(n) EQ SI)
    printf ("El numero %d es impar. \n", n);
  else
  printf ("El numero %d no es impar. \n", n);
}

int es_impar(int x){
  int respuesta;
  if ( x MOD 2 NE 0 ) respuesta=SI;
  else respuesta=NO;
  return (respuesta);
}
