/* Crear un programa que utilice una función que devuelva el mayor, el menor y la
 * media de los valores de un array de números decimales.
 */

#include <stdio.h>
#include <stdlib.h>

//Función devuelve un array con los valors, min, max, y media.
void statistics(double *arr, int arrlen, double *min, double *max, double *media);


int main(){
	double cad[] = {3.43, 5.12, 9.4, 23.12, 2.14, 42.0, 4.1, 1.2};
	int cadlen = sizeof(cad)/sizeof(double);
	double min, max, media;
	statistics(cad,cadlen, &min, &max, &media);
	printf("Min: %.2f\n", min);
	printf("Max: %.2f\n", max);
	printf("Media: %.2f\n", media);
	return 0;
}


void statistics(double *arr, int arrlen, double *min, double *max, double *media){
	int i;
	*min=*arr;
	*max=*arr;
	double suma=0;
	for(i=0;i<arrlen;i++){
		suma+=*(arr+i);
		if(*(arr+i)<*min) *min=*(arr+i);
		if(*(arr+i)>*max) *max=*(arr+i);
	}
	*media=suma/arrlen;
}
