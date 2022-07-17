/*********************************************************************/
/*                Ejercicio Volutario Nº2 , 4, Didáctica 3           */
/* Array con 1000 letras mayusculas aleatorias y cuenta cada letra.  */
/*********************************************************************/

//  ASCII letra mayusulas A= 65 - Z=90

#include <stdio.h>
#include <stdlib.h>

void printArray(char array[100]);
void countLetter(char array[100]);


int main(){
	char arr[100];
	//26 Zahlen von ASCII-Wert 65 ab. A-Z
	for(int i=0;i<100;i++){
		arr[i] = rand()%26+65;
	}

	printArray(arr);
	countLetter(arr);
	return 0;
}


void printArray(char array[100]){
	for(int i=0;array[i]!='\0';i++){
		printf("%c",array[i]);
	}
}


void countLetter(char array[100]){
	char alfa[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int cletter=0;
	printf("\n");
	for(int j=0;alfa[j]!='\0';j++){
		for(int k=0;array[k]!='\0';k++){
			if(alfa[j]==array[k]){
				cletter++;
			}
		}
		printf("%c: %d\n",alfa[j],cletter);
		cletter = 0;
	}
}
