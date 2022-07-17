
#include <stdio.h>
#include <stdlib.h>

void rotacion (int * array, int t, int r );


int main (){
  int A[] = { 1,2,3,4,5,6,7,8,9,10 } ,i;
  rotacion(A,10,3);
  for( i=0;i<10;i ++){
    printf ("%d " ,A [ i ]) ;
  }
}

/* array es el puntero al array que se va a rotar
t es el tamaño de ese array
r es el tamaño de la rotación
*/

void rotacion(int *array, int t, int r){
  int aux[t];
  int i, pos;
  for(i=0;i<t;i++){
    aux[i] = array[i];
  }
  pos=r;
  for(i=0;i<t;i++){
    if(pos>=t) pos=0;
    array[pos] = aux[i];
    pos++;
  }
}
