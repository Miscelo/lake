/* Ejercicio Voluntario M032_UD03_EV1_V002  - Ejercicio 4
 * Crear un array de 50 números aleatorios y después un array de 50 punteros
 * donde cada uno apunte a los números anteriores.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void printArray(int arr[], int l);

#define LEN 10

int main(){
	srand(clock());
	int arr[LEN];
	int p[LEN];
	int i;

	for(i=0;i<LEN;i++){
		arr[i] = rand()%100+1;
	}

	printArray(arr, LEN);
	printf("%p\n", &arr[0]);

	int j;
	for(j=0;j<LEN;j++){
		p[j] = &arr[i];
	}
	printf("P: %p\n", p[0]);
	printPointer(p, LEN);
	return EXIT_SUCCESS;
}

void printPointer(int arr[], int l){
	printf("[");
	int i;
	for(i=0;i<l;i++){
		printf("%p", arr[i]);
		(i<l-1)? printf(","): printf("]\n");
	}
}


void printArray(int arr[], int l){
	printf("[");
	int i;
	for(i=0;i<l;i++){
		printf("%d", arr[i]);
		(i<l-1)? printf(","): printf("]\n");
	}
}
