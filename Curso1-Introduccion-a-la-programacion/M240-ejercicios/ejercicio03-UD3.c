/* Ejercicio 3
 * Escribid un programa que, dado un array de 10 enteros (introducidos a mano en el
 * código), calcule la diferencia entre la posición del valor mayor y la del valor menor (si
 * la diferencia es negativa, querrá decir que el valor menor aparece después del mayor).
 * */

/* Información: En el caso de repitición de numeros, el codigo sólo valora el primer mínimo y primer máximo introducido.*/

#include <stdio.h>

#define len 10    //definir cuantas entradas del stdin se permite -> tamaño array!

void printArray(int array[], int l);  // Función imprime el array
int menor(int array[], int l);  //Función devuelve el valor mínimo del array
int mayor(int array[], int l);  //Función devuelve el valor máximo del array
int pos(int array[], int l, int s);  //Función devuele la posición de un numero dentro de un array

int main(){
	int i, min, max, posmin, posmax;  //posmin/posmax = posición en secuencia del minimo/maximo
	int num[len];

	i=0;
	printf("Introduza Usted %d numeros enteros:\n", len);
	while(i!=len){
		printf("%d: ", len-i);
		scanf("%d", &num[i]);
		i++;
	}
	printArray(num, len);
	min = menor(num, len);
	max = mayor(num, len);
	posmin = pos(num, len, min);
	posmax = pos(num, len, max);

	printf("La posición del mínimo en el Array es %d y el máximo es %d.\n", posmin+1, posmax+1);
	if(posmax<posmin){
		printf("Diferencia: %d\n", posmax-posmin);
	}
	else{
		printf("Diferencia: %d\n", -1*(posmax-posmin));
	}

	fflush(stdin);
	return 0;
}


int pos(int array[], int l, int s){
	int i;
	for(i=0;i<l;i++){
		if(array[i] == s){
			return i;
		}
	}
	return -1;
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


void printArray(int array[], int l){
	printf("\nArray:=[");
	int j;
	for(j=0;j<l;j++){
		printf("%d", array[j]);
		(j<(l-1))? printf(",") : printf("]\n\n");
	}
}
