/*********************************************************************************/
/*                   Ejercicio Voluntario N2, Unidad 3                           */
/* Leer una cadena de caracteres y cortarla en palabras escribiendo cada palabra */
/* en una línea. Se supone que las palabras se separan sólo por blancos.         */
/*********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(){
	char str[100];
	printf("Introduzca una frase: ");
	fgets(str,100,stdin);

	for(int i=0;str[i]!='\0';i++){
		if(str[i]!=' '){
			printf("%c",str[i]);
		}
		else{
			printf("\n");
		}
	}




	getchar();
	return 0;
}
