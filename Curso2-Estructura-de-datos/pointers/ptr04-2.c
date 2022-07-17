/* Ejercicio Voluntario M032_UD03_EV1_V002  - Ejercicio 2
 *Crear un programa que utilice una función que devuelva el mayor, el menor y la
 * media de los valores de un array de números decimales.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void estadisticaArray2(double *array, int t, double **mayor, double **menor);

int main(){
	double A[]={1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8};
	double *mx, *mn;/* Punteros al menor y mayor valor del array*/
	estadisticaArray2(A,8,&mx,&mn);
	printf("Mayor %lf, Menor %lf", *mx, *mn);
}


void estadisticaArray2(double *array, int t, double **mayor,
	double **menor){
		int i;
		*mayor=array;*menor=array;
		for(i=0;i<t;i++){
				if(**mayor<array[i]) *mayor=&array[i];
				if(**menor>array[i]) *menor=&array[i];
		}
}
