/* Programa que pida introducir una cadena de caracteres y lo copiue en tora
 * eliminando los espacios.
 */

#include <stdio.h>
#include <string.h>

#define LEN 99


//funcion elimina los espiacios en vacio
void eliminar(char *cad1, char *cad2);



int main(){
	char cad1[LEN];
	char cad2[LEN];
	fgets(cad1,LEN,stdin);
	eliminar(cad1,cad2);
	printf("%s\n", cad2);
	return 0;
}


void eliminar(char *cad1, char *cad2){
	int i;
	for(i=0;i<LEN;i++){
		if(*(cad1+i)!=32){
			*(cad2+i)=*(cad1+i);
		}
	}
}



