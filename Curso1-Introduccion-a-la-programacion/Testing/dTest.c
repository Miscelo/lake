#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>




int main(void){


	char string[] = "Escuel de tontos en Bilbao.";
	//printf("%d\n", strlen(string));

	int laenge;
	laenge = strlen(string);
	printf("%ld", laenge);


/*
	int i;
	for(i=0;i<24;i++){
		printf(string[i]);
	}

*/




	getchar();

	return 0;
}
