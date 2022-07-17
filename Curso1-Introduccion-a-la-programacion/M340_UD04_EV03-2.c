/* Pedir una secuencia de (como mucho) 100 números enteros, ordenarlos de menor
 * a mayor y escribirlos por pantalla. En el momento que se introduzca un 0 terminar
 * la introducción de datos. Ayúdate de una función que deberás de crear que ordene
 * los datos.
 */

#include <stdio.h>


#define N 10

void ordenar(int *array, int l);
void printArray(int A[], int l);
int main(){

	int A[N];
	int i=0;
	while(i<10){
		scanf("%d", &A[i]);
		i++;
	}

	printArray(A,10);
	ordenar(A,10);
	printArray(A,10);
	
	return 0;
}



void ordenar(int *array, int l){
	int i,j,min;
	for(j=0;j<l;j++){
		min=*(array+j);
		for(i=j;i<l;i++){
			if(*(array+i)<min) min=*(array+i);
		}
		*(array+j)=min;
	}
}

void printArray(int A[], int l){
	printf("[");
	int i;
	for(i=0;i<l;i++){
		printf("%d",A[i]);
		(i<l-1)?printf(","):printf("]\n");
	}
}
