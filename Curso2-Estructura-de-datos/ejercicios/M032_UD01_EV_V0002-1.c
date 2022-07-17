/* Leer una cadena de caracteres cambiar mayúsculas por minúsculas, minúsculas por
* mayúsculas y dígitos por puntos.
* En C para cambiar minúsculas a mayúsculas es upper y lower.
* Para saber si es mayúscula o minúscula las funciones son isupper y islower que
* devuelve un valor booleano de verdadero y falso.
* Para convertir un carácter de mayúsculas a minúsculas es: toupper, tolower.
* Ejemplo:
* If (isupper(caracter))
* character = tolower(character);
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define LEN 30

int main(){
	char cad[LEN];
	fgets(cad,LEN,stdin);
	printf("%s\n", cad);
	int l;
	l=strlen(cad);
	
	//for schleife bis länge-1, damit \n nihct mitgezählt wird
	int i;
	for(i=0;i<l-1;i++){

		if(isdigit(cad[i])){
			cad[i] = '.';
		}
		else if(isupper(cad[i])){
				cad[i]=tolower(cad[i]);
		}
		else{
			cad[i]=toupper(cad[i]);
		} 
	}

	printf("%s\n", cad);

	return 0;
}



