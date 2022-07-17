#include <stdio.h>
#include <stdlib.h>

/* r - apertura únicamente de lectura
   w - apertura write, si el archivo existe -> overwrite
	 a - append - escribe al final de la marca, imprescindible ue file exists
	 r+ - read/write  , imprescindible que file exists
	 w+ - read/write , si el archivo existe -> overwrite
	 a+ - append, si no existe, lo crea.
	 t - texto
	 b - binario
	 rt,rb,   wt, wb,    at, ab,     r+t, r+b,    w+b, w+t,     a+t, a+b
*/



void readFile(file);
void appendToFile(file, text);

int main(){
	char file[]="first.dat";
	readFile(file);
	appendToFile(file, "I love you\n");
	readFile(file);
	return 0;
}


void readFile(char file[]){
	FILE *fread;
	fread = fopen(file, "r");
	if(fread == NULL){
		printf("ERROR: Not possible to read file!\n");
	} else {
		char zeichen;
		while((zeichen = fgetc(fread)) != EOF){
			printf("%c", zeichen);
		}
	}
	fclose(fread);
}


void appendToFile(char file[], char text[]){
	FILE *f;
	f = fopen(file, "a+");
	if(f == NULL){
		printf("Error: Not possible to create a file in this folder.!\n");
	} else {
		fprintf(f, text);
	}
	fclose(f);
}
