/*
 * ****************************************************
 * ***  Funktion gibt einen Zeiger als Rückgabewert ***
 * ****************************************************
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 25




char *eingabe(char *str){
	char input[MAX];
	printf("Bitte %s eingeben: ", str);
	fgets(input, MAX, stdin);
	return strtok(input, "\n");  //strtok -> String mit bestimmten Zeichen zerlege,
			  	     //strtok entfertn auch newline zeichen von fgets
}




int main(){

	char *ptr;
	ptr = eingabe("Vorname");
	ptr = eingabe("Nachname");
	printf("%s, interessanter Nachname!", ptr);
	

 	




	return 0;
}
