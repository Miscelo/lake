/* Crear un programa que cree un array con 1000 letras mayúsculas aleatorias y que
 * cuenta cuántas veces aparece cada letra en el array
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define LEN 100

void printArray(char l[], int length);
void calcPresencia(char l[]);

int main(){
	char random_letras[LEN];
	char letras[26];
	srand(clock());

	//create Array con letras A-Z
	int j,k,m;
	m=LEN;
	k=65;
	for(j=0;j<26;j++){
		letras[j]=k;
		k++;
	}

	//asci alfabet 65-A -> 90-Z
	int i;
	char c;
	for(i=0;i<LEN;i++){
		random_letras[i]=(rand()%26+1)+64;
	}

	printArray(letras, 26);
	printArray(random_letras, m);



	return 0;
}


void calcPresencia(char l[]){

}


void printArray(char l[],int length){
	int j;
	for(j=0;j<length;j++){
		printf("%c",l[j]);
	}
	printf("\n");
}
