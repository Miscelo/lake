#include <stdio.h>
#include <stdlib.h>


void readfile(){
	char c;
	FILE *data;
	data = fopen("tb.txt", "r");
	if(data==NULL){
		printf("ERROR, no hay file!");
		return EXIT_FAILURE;
	}else{
		while((c=fgetc(data))!=EOF){
			printf("%c", c);
		}
	}
	fclose(data);
}



int main(){
	printf("Gib etwas ein: ");
	char word[100];
	fgets(word,100,stdin);
	FILE *data2;
	data2 = fopen("tb.txt", "a+");
	if(data2==NULL){
		printf("Error en abrir file!\n");
		return EXIT_FAILURE;
	}else{
		fprintf(data2, word);
	}
	fclose(data2);

	readfile();

	return EXIT_SUCCESS;
}

