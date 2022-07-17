#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]){
	printf("%d\n", argc);

	if(argc < 2)
	{
		printf("Dateitanme: %s\n", *argv);
		return EXIT_FAILURE;
	}
	else
	{
	printf("Dateiname: %s\n", argv[0]);
	printf("Das argument ist: %s\n", argv[1]);
	}




	return EXIT_SUCCESS;
}

