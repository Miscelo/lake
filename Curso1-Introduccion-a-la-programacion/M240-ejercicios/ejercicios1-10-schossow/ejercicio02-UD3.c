/* Ejercicio 2
 * Escribe un programa que, dado un array de 10 enteros (introducidos a mano en el
 * código), calcule la diferencia entre el valor menor y el mayor.
*/

#include <stdio.h>

#define len 10

int menor(int array[], int l);  //Función devuelve el valor mínimo del array
int mayor(int array[], int l);  //Función devuelve el valor máximo del array

int main(){
	int i, min, max;
	int num[len];
	
	i=0;
	printf("Introduza Usted %d numeros enteros:\n", len);
	while(i!=len){
		printf("%d: ", len-i);
		scanf("%d", &num[i]);
		i++;
	}

	min = menor(num, len);
	max = mayor(num, len);
	printf("El mínimo es %d y el máximo es %d.\n", min, max);
	printf("Diferencia: %d\n", max-min);

	fflush(stdin);
	return 0;
}

int menor(int array[], int l){
	int j;
	int min = array[0];
	for(j=1;j<l;j++){
		min = (min<array[j])? min : array[j];
	}
	return min;
}

int mayor(int array[], int l){
	int i;
	int max = array[0];
	for(i=1;i<l;i++){
		max = (max>array[i])? max: array[i];
	}
	return max;
}
