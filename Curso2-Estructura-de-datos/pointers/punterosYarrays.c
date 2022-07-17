
#include <stdio.h>

void main(){
	char sNombreCompleto[]="DANIEL ROMEO";
	char sOtroNombre[]="GERMAN";
	//Cada elemento char de la cadena se ubica en una direcci�n de memoria

    	char *pNombre = sNombreCompleto;
    	//El puntero pNombre apunta a la primera direcci�n de memoria que ocupa el array sNombreCompleto

    	int i;

    	printf("\n Nombre: %s", sNombreCompleto);

    	//Con el bucle recorresmos el array sNombreCompleto y lo vamos reemplazando
    	//por las 6 posiciones del array sOtroNombre
    	for (i=0; i<6; i++,pNombre++){
        *pNombre = sOtroNombre[i];
	}

    	printf("\n Nombre cambiado: %s", sNombreCompleto);

  
}
