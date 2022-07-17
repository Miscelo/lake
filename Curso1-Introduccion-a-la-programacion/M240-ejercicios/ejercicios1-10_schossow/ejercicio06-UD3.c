/* Ejercicio 5
 * Escribid un programa que, dado un array de 10 caracteres (introducidos a mano en el
 * código), calcule cuántas veces aparecen dos caracteres iguales seguidos.
 * Ahora considerando que un mismo carácter sí puede formar parte de dos parejas.
 * En el ejemplo anterior, el resultado sería ahora de 4
 * (la pareja AA y el grupo B-B-B-B que contendría ahora tres parejas BB).
 * */


#include <stdio.h>

#define len 10


int main(){

	int i, count;
	char cad[len];

	printf("*** El programa calcula cuantas parejas de carecters iguales seguidas hay! ***\n");
	printf("Introduce 10 caracters y pulse la tecla \"Intro\": ");
	//Usando fgets para leer los caracteres del standard input.
	fgets(cad, len+1, stdin);
	printf("Cadena introducida: %s\n", cad);

	for(i=0;i<len;i++){
		if(cad[i]==cad[i+1]){  //comprueba si el caracter de un string es igual al seguiente.
			count++;
		}

	}
	printf("Hay %d parejas de caractres iguales seguidos!\n", count);
	return 0;
}
