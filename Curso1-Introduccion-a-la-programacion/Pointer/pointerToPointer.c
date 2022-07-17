#include <stdio.h>

// Zeiger auf Zeiger

int main(){

	int wert = 42;
	int *ptr1;
	int *ptr2;

	ptr1 = &wert;
	

	printf("Adresse Pointer 1: %p\n", ptr1);
	printf("Pointer 1 value: %d\n", *ptr1);
	
	ptr2 = ptr1;   //Hier wird der Pointer 2 mit dem Pointer 1 initialisiert. 
	//Kein Adressoperator '&' notwendig, da ptr1 schon eine Adresse ist und einen 
	//Wert als Adresse erwartet.
	
	printf("\n****************************************\n");	

	printf("Adresse Pointer 2: %p\n", ptr2);
	printf("Pointer 2 value: %d\n", *ptr2);
	
	printf("\n****************************************\n");	


	printf("Variable wert: %d\n", wert);
	printf("Adresse variable wert: %p\n", &wert);
	
	
	printf("\n****************************************\n");	
	
	printf("Adresse pointer 1 mit &: %p\n", &ptr1);
	




	return 0;
}
