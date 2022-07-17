#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	FILE *datei;
	if(argc < 2)
	{
		printf("Verwendung: %s - Datei zum öffnen\n", *argv);
		return EXIT_FAILURE;
	}

	datei = fopen(argv[1], "r");
	if(datei == NULL){
		printf("Fehler beim öffnenª\n");
		return EXIT_FAILURE;
	}else {
		printf("Datei erfolgreich geöffnet.\n");
		char c;
		while((c = fgetc(datei))!=EOF){
			printf("%c", c);
		}
	}

	fclose(datei);



	return EXIT_SUCCESS;
}

