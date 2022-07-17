/* Ejercicio Voluntario M032_UD03_EV1_V002  - Ejercicio 1
 *Crear una función que reciba un puntero a un array, su tamaño y un número
 * que permita desplazar el array hacia la derecha el número de posiciones que
 * indique el número, de modo que los números de la derecha aparezcan por la
 *izquierda.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void moveToRight(int *arr, int l, int move);
void printArray(int *arr, int l);

int main(){
	int myarray[] = {0,1,2,3,4,5,6,7,8,9};
	int len = sizeof(myarray)/sizeof(int);	
	printArray(myarray, len);
	printf("Mover array a la derecha. Introduzca numero de pasos: [0=salir]");
	int moves=1;
	while(moves!=0){
		scanf("%d", &moves);
		moveToRight(myarray, len, moves);
		printArray(myarray, len);

	}
	printf("END");
	return EXIT_SUCCESS;
}


void moveToRight(int *arr, int l, int move){
	int x=0;
	while(x<move){
		int last = *(arr+l-1);
		int i;
		for(i=l-1;i>=0;i--){
			*(arr+i)=*(arr+i-1);
			if(i==0){
				*arr=last;
			}
		}
		x++;
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

	


