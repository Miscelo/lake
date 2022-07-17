/* Ejercicio 10
 * Crear un programa llamado paresImpares que cree un array de 100 números
 * aleatorios del 1 al 1000. Una vez creado, mostrar el contenido y después organizarlo
 * de forma que estén juntos los elementos pares y los impares. Después, volver a
 * mostrar el array
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define len 100      //define las entradas el array.

typedef struct { int value[len]; } array;  //Crear estructura del tipo array

array createRandomArray(void);   //Funcion devuelve un array de entradas aleatorias
array sortArray(array cad);      //Función ordena el array, primero los pares, luego impares
void printArray(array cad);      //pasa un array a standard output


int main(){
	array aleatoria;
	array arrayOrdenado;
	aleatoria = createRandomArray();
	printf("Array aleatoria");
	printArray(aleatoria);
	arrayOrdenado = sortArray(aleatoria);

	printf("Array ordenado por pares e impares");
	printArray(arrayOrdenado);

	printf("Array aleatoria 2º"); //Volver a mostrar el Array original
	printArray(aleatoria);
	return 0;
}

//Devuelve un array con 100 numeros aleatorias de 0 a 999.
array createRandomArray(void){
	int i, random;
	array z;
	srand(clock()); //para cambiar el valor inicial de la función rand, usando srand con la hora.
	for(i=0;i<sizeof(array) / sizeof(int); i++){
		random =  rand()%1000+1;
		z.value[i] = random;
	}
	return z;
}

//devuelve un array ordenado, primero los numeros pares y luego numero impares
array sortArray(array cad){
	array newcad;
	int i,j,k,l;
	j=0;
	l=sizeof(array) / sizeof(int);
	for(i=0;i<l; i++){
		if(cad.value[i]%2 == 0){   //adjunta en este bucle los numeros pares al array nuevo
			newcad.value[j] = cad.value[i];
			j++;
		}
	}
	printf("Array tiene %d numeros pares y %d numeros impares.\n\n",j, 100-j);
	for(k=0;k<l; k++){
		if(cad.value[k]%2 == 1){    //adjunta en el segundo bucle los numeros impares al array.
			newcad.value[j] = cad.value[k];
			j++;
		}
	}
	return newcad;
}


//Función imprime un array del tipo array.
void printArray(array cad){
	printf(":=[");
	int j;
	int l;
	l = sizeof(array) / sizeof(int);
	for(j=0;j<l; j++){
		printf("%d", cad.value[j]);
		(j<(l-1))? printf(",") : printf("]\n\n");
	}
}
