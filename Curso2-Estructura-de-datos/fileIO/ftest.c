#include <stdio.h>
#include <stdlib.h>
int main(){
	char c;

	FILE *f;
	char* fichero = "daten.dat";

	f = fopen(fichero, "wt");
	if(f==NULL){
		printf("ERROR to open file!\n");
		return EXIT_FAILURE;
	} else {
		printf("DATEI OFFEN zum schreiben\n");
		fputs("FOLLOW THE WHITE RABBIT!\n", f);
	}		
	fclose(f);

	printf("Datei geschlossen\n");
	return EXIT_SUCCESS;
}
