/* Ejercicio 4
 * Escribid un programa que, dado un array de 10 enteros (introducidos a mano en el
 * código), calcule la media de todos los valores e indique cuántos valores están por
 * encima de la media y cuántos por debajo.
 * */

#include <stdio.h>

#define len 10

void printArray(int array[], int l);  // Función pasa el array al stdout


int main(){
	int i,j;
	int countmenor=0;  // entradas del array con valor menor a la media
	int countmayor=0;  // entradas del array con valor mayor a la media
	int num[len];
	float media;
	float suma = 0;

	printf("Introduza Usted %d numeros enteros:\n", len);
	for(i=0;i<len;i++){
		printf("Nº %d: ",i+1);
		scanf("%d", &num[i]);
		suma+=num[i];    //suma todos los valores introducidos
	}

	printArray(num, len);
	media = suma/len;  // Calcula la media de todos los valores
	printf("La media es: %f\n\n", media);

	// Cuenta, cuantos valores del array estan por encima, y cuantos por debajo de la media.
	for(j=0;j<len;j++){
		if(!(num[j]==media)){  //descarta los iguales a la media.
			(num[j]<media)? countmenor++ : countmayor++;
		}
	}
	printf("Hay %d valores del Array por encima de la media!\n", countmayor);
	printf("Hay %d valores del Array por debajo de la media!\n", countmenor);
	return 0;
}

//Función pasa el array al stdout
void printArray(int array[], int l){
	printf("\nArray:=[");
	int i;
	for(i=0;i<l;i++){
		printf("%d", array[i]);
		(i<(l-1))? printf(",") : printf("]\n\n");
	}
}
