/* Ejercicio 5
 * Escribid un programa que, dado un array de 10 caracteres (introducidos a mano en el
 * código), calcule cuántas veces aparecen dos caracteres iguales seguidos. Si por
 * ejemplo hay tres caracteres iguales seguidos, consideramos que un carácter no puede
 * pertenecer a dos parejas. Por ejemplo en el array anterior, el resultado será 3 (la
 * pareja AA y el grupo B-B-B-B que contiene dos parejas BB).
 * */

#include <stdio.h>

#define len 10


int main(){

	int i, count;
	char cad[len];

	printf("*** El programa calcula cuantas parejas de carecters iguales seguidas hay! ***\n");
	printf("Introduce 10 caracters y pulse la tecla \"Intro\": \n");
	//Usando fgets para leer los caracteres del standard input.
	fgets(cad, len+1, stdin);
	printf("Cadena introducida: %s\n", cad);

	for(i=0;i<len;i++){
		if(cad[i]==cad[i+1]){     //comprueba si un caracter de una cadena es igual que el seguiente.
			count++;
			i=i+1;									// salta uno el contador, si hay una pareja de caracteres.
		}

	}
	printf("Hay %d parejas de caractres iguales seguidos!\n", count);
	return 0;
}
