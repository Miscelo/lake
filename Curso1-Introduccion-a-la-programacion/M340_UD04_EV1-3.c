/* Modificar el programa anterior para que la función devuelva punteros al mayor y el
 *menor valor del array
 */
#include <stdio.h>

void statistics(double *array, int t, double **mayor, double **menor);


int main(){

  double A[]={1.1, 2.2, 3.3, 9.9, 5.5, 6.6, 0.3, 8.8, 5.4, -4.5};
  int t = sizeof(A)/sizeof(double);
  double *min, *max; //Punteros al menor y mayor valor del array
  statistics(A, t, &max, &min);
  printf("Minimum: %lf\n", *min);
  printf("Maximum: %lf\n", *max);

  return 0;
}


void statistics(double *array, int t, double **mayor, double **menor){
  int i;
  *mayor=array;
  *menor=array;
  for(i=0;i<t;i++){
    if(**mayor<array[i]) *mayor=&array[i];
    if(**menor>array[i]) *menor=&array[i];
  }
}
