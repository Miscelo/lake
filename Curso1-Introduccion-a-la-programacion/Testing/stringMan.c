#include <stdio.h>
#include <string.h>


int main(){


	char str[80];
	strcpy(str,"prueba");

	printf(str);
	printf("\n%s\n",str);
	
	size_t laenge;
	char satz[] = "Ana es guapisima";
	laenge = strlen(satz);
	printf("%ld",laenge);

	return 0;

}
