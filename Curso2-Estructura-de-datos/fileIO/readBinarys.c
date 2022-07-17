#include <stdio.h>
#include <stdlib.h>

// size_t fread(void *ptr, size_t n, FILE* flujo)
// // fread(p,20, stdin)
// // size_t fwrite(const void* ptr, size_t size, size_t n, FILE* flujo);
//
//
// //Funciones para ficheros de acceso directo  -tipo de acceso es directo o aleatorio.
// // void rewind(FILE * flujo);
//
// /* Posicionamiento - ficheros de acceso directo permiten situarse en 
// una posición puntual a lo largo delfichero
// int fseek(FILE * flujo, long desplazamiento (cantidad de bytes), int referencia (desde donde partiremos para desplazarnos));
// SEEK_SET, cuyo valor se corresponde con 0. Y qué referencia el inicio del flujo.
// SEEK_CUR, su valor correspondiente es 1, y referencia la posición actual.
// SEEK_END, le corresponde el valor 2, y referencia la posición final.
// Obsérvese que SEEK_SET, y SEEK_CUR desplazarán hacia el final del
// fichero con valores positivos, mientras que con SEEK_END, ocurre exac-
// tamente lo contrario.
// 
//
// /* ftell -> long int ftell(FILE * stream);
// 
// /*fgetc, fputc, fgets, fputs, fread, fwrite, rewind, 

int main(){

	FILE *f;
	char *fichero = "info.dat";   //Binary file
	f = fopen(fichero, "rb");
	if(f==NULL){
		printf(stderr, "ERROR lecture|\n");
		fflush(stderr);
		return EXIT_FAILURE;
	} else {
		int n = fscanf(fichero, "%s %s", firstname, lastname);
	}

	fclose(f);

	return EXIT_SUCCESS;
}
