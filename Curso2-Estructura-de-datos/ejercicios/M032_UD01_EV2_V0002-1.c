/* Que rellene un array con los 100 primeros números enteros y los muestre en
 * pantalla en orden ascendente.
 */


#include <stdio.h>
#include <stdlib.h>

#define LEN 100


void createArray(int arr[]);
void printArray(int arr[]);

int main(int argc, char *argv[]){
	int arr[LEN];
	createArray(arr);
	printArray(arr);
	

	return EXIT_SUCCESS;
}


void createArray(int arr[]){
	int i;
	for(i=0;i<LEN;i++){
		arr[i]=i+1;
	}
}

void printArray(int arr[]){
	int i;
	for(i=0;i<LEN;i++){
		printf("%d", arr[i]);
		(i<LEN-1)? printf(","):printf("\nEND\n");
	}
}
