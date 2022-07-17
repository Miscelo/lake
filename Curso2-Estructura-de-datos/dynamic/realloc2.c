/* bauen eines dynamischen Arrays, also Vectors
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	srand(clock());
	size_t tamanyo=0;

	printf("Introduzca el tamaño de la lista:");
	scanf("%d", &tamanyo);

	int *numPtr = (int *) malloc(sizeof(int) * tamanyo);
	for(int i=0;i<tamanyo;i++){
		printf("%d, ", numPtr[i] = rand()%100+1);
	}

	printf("\n");

	numPtr = (int *)realloc(numPtr, tamanyo/=2);

	//recortamos la lista a la mitad
	for(int i=0;i<tamanyo;i++){
		printf("%d, ", numPtr[i]);
	}


	puts("liberamos espacio.");
	free(numPtr);

	return 0;
}


//void printArray(
