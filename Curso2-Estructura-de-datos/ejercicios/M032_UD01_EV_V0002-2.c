/* Leer una cadena de caracteres y cortarla en palabras escribiendo cada palabra en una
 *línea. Se supone que las palabras se separan sólo por blancos.
 */


#include <stdio.h>
#include <string.h>



int main(){


	char cad[99];
	fgets(cad,99,stdin);
	int l;
	l=strlen(cad);
	int i;
	for(i=0;i<l-1;i++){   //l-1, damit von fgets nicht n mitgegeben wird
		(cad[i]==32)?  printf("\n"): printf("%c",cad[i]);
	}

	printf("\n");


	return 0;
}
