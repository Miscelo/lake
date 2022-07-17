/* Crear un array de 50 números aleatorios y después un array de 50 punteros donde
 * cada uno apunte a los números anteriores.
 */

#include <stdio.h>
#include <stdlib.h>

#define l 10


int main(){

  int A[l];
  int *p[l];
  int i;

  srand(time(NULL));

  printf("[");
  for(i=0;i<l;i++){
    A[i]=rand()%100+1;  //Zufallszahlen von 1 bis 100
    p[i]=&A[i];
    printf("%d", A[i]);
    (i<l-1)? printf(","): printf("]\n");
  }

  // Pointer der auf die einzelnen werte des Arrays zeigt.
  printf("[");
  for(i=0;i<l;i++){
    printf("%d", *p[i]);
    (i<l-1)? printf(","): printf("]\n");
  }


  return 0;
}
