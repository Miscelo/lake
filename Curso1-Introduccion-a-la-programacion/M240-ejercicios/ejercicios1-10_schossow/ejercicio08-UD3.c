/* Ejercicio 8
 * Escribid un programa que, dado un array de 10 enteros (introducidos a mano en el
 * código), genere un diagrama de barras que represente sus valores. Las barras irán de
 * izquierda a derecha y estarán formadas por asteriscos. Por ejemplo, si los tres
 * primeros elementos del array son 3-2-4, la parte correspondiente del diagrama de
 * barras será:
 * ***
 * **
 * ****
 * */

#include <stdio.h>

void printStars(int n);  //Función imprime estrellas * en el terminal con cantidad indicada.


int main(){
	int num[10];
	int i;

	printf("Introduzca 10 números enteros positivos: \n");
	for(i=0;i<10;i++){
		printf("Nº %d:", i+1);
		scanf("%d", &num[i]);
	}

	//La función printStars() se usa con el Array introducido anteriormente
	printf("__________diagrama_de_estrellas_____________\n\n");
	int k;
	for(k=0;k<10;k++){
		printStars(num[k]);
	}
	printf("____________________________________________\n\n");

	fflush(stdin);   //elemina el puffer del stdin
	return 0;
}


void printStars(int n){
	if(n<=0){        //elementos negativos y 0 no se imprime en el diagrama
		printf(" \n");
	} else {
		int j = 0;
		while(j<n){
			printf("*");
			j++;
		}
		printf("\n");
	}
}
