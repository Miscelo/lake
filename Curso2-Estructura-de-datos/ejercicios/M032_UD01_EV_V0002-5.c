/* Crear un programa que cree un array con 100 letras mayusculas aleatorias y que
 * cuenta cuanta veces aparece cada letra en el array
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define LEN 1000

void printArray(char *abc, int *cantidad);
void crearArray(char *arr);
void countLetter(char *arra, char *abc, int *cantidad);


int main(){
	char letras[LEN];
	char ABC[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int cantidad[26];  // Array speichert wie oft der Buchstabe vorkommt
	crearArray(letras);  //Baut ein Array mit 1000 random Buchstaben
	printf("1000 Random Letters: %s\n", letras);  //printed den Array aus
	/*Schaut wie oft ein Buchstabe des Alfabets in dem Randomletter vorkommt. Das 
	 * Ergebnis schreibt er in den "cantidad[]"-array an die Stelle 0-26. */
	countLetter(letras, ABC, cantidad); 
	printArray(ABC, cantidad);//Druckt aus, wie oft der Buchstabe vorkommt. 


	return 0;
}


void printArray(char *abc, int *cantidad){
	int i;
	for(i=0;i<26;i++){
		printf("%c: %d\n", *(abc+i), *(cantidad+i));
	}
}

	
void countLetter(char *arr, char *abc, int *cantidad){		
	int i,j;
	for(i=0;i<26;i++){
		*(cantidad+i)=0;
		for(j=0;j<LEN;j++){
			if( *(abc+i) == *(arr+j) ){
				*(cantidad+i)+=1;
			}
			else{
			}
		}
	}
}


void crearArray(char *arr){
	int random;
	srand(clock()); //legt Startpunkt der funktion rand fest
	int i;
	for(i=0;i<LEN;i++){
		random = rand()%26+65;
		*(arr+i)=random;
	}
}
