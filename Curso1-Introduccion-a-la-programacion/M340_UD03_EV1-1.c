/*********************************************************************************/
/*                   Ejercicio Voluntario N1, Unidad 3                           */
/* Leer una cadena de caracteres cambiar mayúsculas por minúsculas, minúsculas   */
/* por mayúsculas y dígitos por puntos.                                          */
/*********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void changeArray(char str[], int length);
int checkStringLength(char str[]);

int main(){
	char cad[100];
	printf("Intro: ");
	fgets(cad,100,stdin);

	size_t len;
	len = strlen(cad);
	changeArray(cad,len);
	printf("%ld", len);
	getchar();
	return 0;
}


void changeArray(char cad[], int len){
	for(int j=0;j<=len;j++){
		if(isupper(cad[j])){
			cad[j] = tolower(cad[j]);
		}
		else if(islower(cad[j])){
			cad[j] = toupper(cad[j]);
		}
		else if(isdigit(cad[j])){
			cad[j] = '.';
		}
		else{
			cad[j] = cad[j];
		}
	}
	printf("\n%s\n", cad);
}
