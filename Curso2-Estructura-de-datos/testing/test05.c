#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
 * Las variables constan de 4 partes diferenciadas: nombre, tipo, contenido y dirección de memoria donde se ubican.

  * Un puntero es un tipo de variable que almacena direcciones de memoria donde residen otras variables.

  * Los punteros pueden apuntar a cualquier tipo de estructuras.

  * Existen distintos tipos de punteros.

  * No solo existen punteros a datos sino que C también permite punteros a funciones.

  * Los punteros son la base para la solicitud dinámica de memoria.

  * C implementa diversas operaciones de petición de memoria al sistema como: malloc, calloc y realloc.

  * Cuando se solicita memoria es misión del programador la liberación de la misma, esto se realiza mediante la función free.
*/


int main (){
  float x;
  float *p = &x;
  float **q = &p;
  *p=8;
  printf("%g", **q);
  printf("%s\n", "Hello World");

   return 0;
}
