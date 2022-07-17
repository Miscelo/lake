/* Ejercicio 9
 * Escribid un programa que, dado un array de 10 enteros (introducidos a mano en el
 * código), genere un diagrama de barras que represente sus valores. Las barras irán de
 * arriba a abajo y estarán formadas por asteriscos. Un espacio separará cada una de las
 * barras. Por ejemplo, si los tres primeros elementos del array son 3-2-4, la parte
 * correspondiente del diagrama de barras será:
	* * *
	* * *
	* *
	*
 * */


#include <stdio.h>

#define len 10

void printDiagrama(int l);  // Función imprime linea vertical del diagrama.
int mayor(int array[], int l);  //Función devuelve el valor máximo del array.

int main(){

	int num[len];
	int i, j;
	int max;

	printf("Introduzca 10 numeros enteros:\n");
	for(i=0;i<len;i++){
		printf("Nº %d:",i+1);
		scanf("%d", &num[i]);
		fflush(stdin);
	}

	printDiagrama(len);
	max = mayor(num, len); //Valor maximo nos limita el bucle de lineas

	/* El bucle comprueba en cada linea que el valor del Array es mayor que
	 * el numero de la línea.
	 * Si el valor del array es mayorr, imprime una estrella * en la pantalla.
	 * Si el valor es menor, imprime un espacio libre.*/
	for(i=0;i<max;i++){
		for(j=0;j<len;j++){
			if(num[j]>i){
				printf("*");
			}
			else{
				printf(" ");
			}
			printf(" "); //espacio libre entre cada estrellita
		}
		printf("\n");
	}

	return 0;
}


void printDiagrama(int l){
	printf("-------------------------------------------\n");
	int j;
	for(j=0;j<l;j++){
		printf("%d", j+1);
		(j<(l-1))? printf("|") : printf("  - diagrama vertical -\n");
	}
	printf("-------------------------------------------\n");
}


int mayor(int array[], int l){
	int i;
	int max = array[0];
	for(i=1;i<l;i++){
		max = (max>array[i])? max: array[i];
	}
	return max;
}
