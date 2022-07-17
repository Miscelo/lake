/* Ejercicio 7
 * Escribid un programa que, dado un array de 10 enteros (introducidos a mano en el
 * código), le de la vuelta. Por ejemplo, si el array original es: 0-1-2-3-4-5-6-7-8-9
 * acaba siendo:
 * 9-8-7-6-5-4-3-2-1-0
 * */

#include <stdio.h>

#define len 10


void printArray(int array[], int l);


int main(){

	int num[len];
	int numReverse[len];
	printf("Introduza Usted %d numeros enteros:\n", len);

	int i=0;
	while(i!=len){
		printf("Nº %d: ", i+1);
		scanf("%d", &num[i]);
		i++;
	}

	printf("\n*********************************\nEl Array original: ");
	printArray(num, len);

	//Invertir el array original a uno nuevo.
	int j;
	int k=len-1;
	for(j=0;j<len;j++){
		numReverse[j] = num[k];
		k--;
	}

	printf("El Array invertido: ");
	printArray(numReverse, len);
	printf("*********************************\n");

	fflush(stdin);
	return 0;
}


void printArray(int array[], int l){
	printf("\nArray:=[");
	int j;
	for(j=0;j<l;j++){
		printf("%d", array[j]);
		(j<(l-1))? printf(",") : printf("]\n\n");
	}
}
