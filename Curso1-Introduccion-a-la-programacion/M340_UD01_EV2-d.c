/*
Escribir las declaraciones apropiadas para cada grupo de variables y
formaciones:
1. Variables enteras: i, j
2. Variables en punto flotante: a, b, c
3. Variable carácter primero, segundo
4. Variable entera larga: contador
5. Variable entera corta: índice
6. Variable entera sin signo: k
*/

#include <stdio.h>
#include <string.h>

int main(){
  int i,j;
  i = 42;
  j = 101;

  float a,b;
  a = 5;
  b = 4.23;

  char primero, segundo;
  primero = 'p';
  segundo = 's';

  long int contador;
  contador = 4321;

  short indice;
  //unsigned int k;
  printf("\t*** test ***\n");
  printf("%i, %i\n", i, j);
  printf("%f, %f\n", a, b);
  printf("%c, %c\n", primero, segundo);
  printf("%d\n", contador);

  return 0;
}
