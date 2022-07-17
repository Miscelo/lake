/* Realiza un programa que haga lo mismo que la función strcpy(), es decir que copie
 * una cadena en otra.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define len 42








int main(){
	int newlen;
	char cad1[len];
	char cad2[len];
	
	fgets(cad1, len, stdin);
	newlen = strlen(cad1)-1;
	
	int i;
	for(i=0;i<=newlen;i++){
		cad2[i] = cad1[i];
	}
	
	printf(cad2);	
	


	return 0;
}



