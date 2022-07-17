#include <stdio.h>
#include <stdlib.h>


/* 1. Speicherbereich reservieren
 * 2. Speicherbereich überprüfen, ob er auf NULL zeigt
 * 3. am Ende freigeben
 */


int main(){
	/*reservierung des Speicherbereichs, mit grösse eines Integers, also 4 byte.*/
	int *x = malloc(sizeof(int));
	if(x==NULL)        // wenn er auf NULL zeigt, ist kein Speicher mehr vorhanden
		return 1;
	*x = 42;
	free(x);     //Freigabe des Speichers, sonst gibt es Speicherlöcher, aber free brauch eine Adresse, also nicht *x


	int *y = malloc(sizeof(int) * 5);   // 5 integer anlegen, darum *5
	if(x==NULL)
		return 1;
	*y = 100;
	*(y+1) = 200;
	*(y+2) = 300;
	*(y+3) = 400;
	*(y+4) = 500;

	free(y);


	//Calloc ist wie malloc, aber mach schreibt die Grösse extra und multipliziert sie nicht mehr
	int *z = calloc(2, sizeof(int));  //Initialisiert den Speicherbereich mit den Wert 0.
	if(z==NULL)
		return 1;
	*z = 100;
	*(z+1) = 200;

	//realloc verändert den Speicherbereich auf eine bestimmte Grösse
	z = realloc(x, sizeof(int) * 5);  //z zuweisen und dann auch reingeben
	*(z+2) = 300;
	*(z+3) = 400;
	*(z+4) = 500;

	free(z);

	return EXIT_SUCCESS;
}
