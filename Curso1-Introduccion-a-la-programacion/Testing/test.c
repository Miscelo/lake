/** Text is grey */
// das ist ein kommentar in grau
#include <stdio.h>
#include <stdlib.h>
#define MSG "Hello Bubu"



int main(int a, int b);


int main(int argc, char*argv[]){
	char yes = 'S', no = 'N';
	char letra;

	int a = 42;

	printf("[%c,%c]\n", yes,no);
	
	scanf("%c", &letra);
	
	if(letra==yes){
		printf("Es wurde YES bestÄtigt\n");
	} 
	else if(letra==no){
		printf("Es wurde No  bestÄtigt\n");
	}
	else{
		printf("Es wurde etwas anders gedrückt\n");
	}
	
	
	printf("Argv 1  ist %c\n", &argv[0]);
	printf("Argv 2  ist %c\n", &argv[1]);
	

	return 0;

}

int main(int a, int b){
	return a * b;
}
