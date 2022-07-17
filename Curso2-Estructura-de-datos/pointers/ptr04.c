/* Ejercicio Voluntario M032_UD03_EV1_V002  - Ejercicio 2
 *Crear un programa que utilice una función que devuelva el mayor, el menor y la
 * media de los valores de un array de números decimales.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define LEN 10
void statistics(double *arr, int l, double *erg);
void printArray(double arr[], int l);

int main(){
	double erg[3]={0,0,0};
	double arr[10];
	int i;
	for(i=0;i<10;i++){
		scanf("%lf", &arr[i]);
	}

	printArray(arr, LEN);
	statistics(arr, LEN, erg);
	printf("Minimum: %lf\n", erg[0]);
	printf("Maximum: %lf\n", erg[1]);
	printf("Media: %lf\n", erg[2]);


	return EXIT_SUCCESS;
}

void statistics(double *arr, int l, double *erg){
		double summ = 0;
		double min=*arr;
		double max=*arr;
		int i;
		for(i=0;i<l;i++){
			summ += *(arr+i);
			if(*(arr+i)<min){
				min = *(arr+i);
			}
			if(*(arr+i)>max){
				max = *(arr+i);
			}
		}
		*(erg) = min;
		*(erg+1) = max;
		*(erg+2) = summ/l;
}

void printArray(double arr[], int l){
	printf("[");
	int i;
	for(i=0;i<l;i++){
		printf("%lf", arr[i]);
		(i<l-1)? printf(","): printf("]\n");
	}
}
