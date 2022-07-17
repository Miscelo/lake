#include <stdio.h>
#include <stdlib.h>

#define anzahl_Zeichen az

//char *fgets(char *string,int anzahl_zeichen, File *stream);



int main(){

	int az = 42;
	char antwort[az];
	printf("Geben sie einen Satz ein: ");
	fgets(antwort, az, stdin);

	printf("%s",antwort);



	return EXIT_SUCCESS;
}
