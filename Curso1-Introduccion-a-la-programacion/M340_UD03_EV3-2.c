/*Programa que pida introducir una cadena de caracteres y lo copie en otra
 * eliminando los espacios.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(){

	int i, j, l;
	char word[100];  
	fgets(word,100,stdin);   /* introducir cadena con fgets*/
	l = strlen(word)-1;
	

	char wordcopy[100];
	j=0;
	for(i=0;i<=l;i++){
		if(word[i]!=' '){
			wordcopy[j] = word[i];
			j++;
		}
	}


	printf("\nResulutat: %s\n", wordcopy);
	int k;
	k = strlen(wordcopy)-1;
	printf("%d", k);


	return 0;
}
