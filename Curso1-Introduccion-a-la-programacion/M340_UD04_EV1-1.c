/*
 * Ejercicio Voluntario No1. Unidad Didáctica 1
 * Crear una función que reciba un puntero a un array, su tamaño y un número que
 * permita desplazar el array hacia la derecha el número de posiciones que indique el
 * número, de modo que los números de la derecha aparezcan por la izquierda.
 */

#include <stdio.h>
#include <stdlib.h>

//Función mueve todos los elementos x-veces a la dereche, última entrada a la izquierda
int *moveXtoRight(int *val, int arrlen, int x);
//Función imprime el array
void printArray(int *val, int arrlen);


int main(){
	int cad[] = {1,2,3,4,5,6,7,8,9};
	int cadlen = sizeof(cad) / sizeof(int);   //Array longitud
	printArray(cad, cadlen);
	printf("Mueve la cadena 1 elemento a la derecha: \n");
	moveXtoRight(cad, cadlen, 1);
	printArray(cad, cadlen);
	printf("Mueve la cadena 3 elementos a la derecha: \n");
	moveXtoRight(cad, cadlen, 3);
	printArray(cad, cadlen);

	return 0;
}


//Función mueve todos los elementos x-veces a la dereche, última entrada a la izquierda
int *moveXtoRight(int *val, int arrlen, int x){
	int c=0;
	while(c<x){
		int i, temp;
		temp = *(val+arrlen-1); //guardar la última entrada del array en una variable
		for(i=arrlen-1;i>=0;i--){
			*(val+i) = *(val+i-1);
		}
		*(val) = temp;
		c++;
	}
	return val;
}

//Función imprime el array
void printArray(int *val, int arrlen){
	printf("Array:=[");
	int i;
	for(i=0;i<arrlen;i++){
		printf("%d", *(val+i));
		(i<arrlen-1)? printf(","): printf("]\n");
	}
}
