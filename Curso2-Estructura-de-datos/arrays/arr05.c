#include <stdio.h>
#include <string.h>

int main(){


	char animal[4] = {'G','a','t','o'};   //Array de char -> 4 caracter lang
	char mascota[] = "Gato";              //cadenas       -> 5 caracter lang + \0



	printf("%d, %d\n", sizeof(animal)/sizeof(char), sizeof(mascota)/sizeof(char));
	//cuenta tambien el \0 al infal de mascota.

	int l1, l2;
	l1 = strlen(animal);
	l2 = strlen(mascota);
	printf("%d, %d\n", l1, l2);



	return 0;

}
