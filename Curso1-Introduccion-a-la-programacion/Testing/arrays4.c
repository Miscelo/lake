#include <stdio.h>
#include <stdlib.h>


void printArray(char text[], int len);


int main(){

	char ciudad[6]="Madrid";
	printf("%s\n", ciudad);
	//printArray(ciudad, 6);




	char str[20];
	printf("Introduzca una cadena de caracteres: ");
	gets(str);
	printArray(str, 20);

	return 0;
}




void printArray(char text[], int len){
	printf("\n[");
	int i;
	for(i=0;i<=len;i++){
		printf("%c",text[i]);
	}
	printf("]\n");
}
