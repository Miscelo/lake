#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/* Fehler, function gibt die Adresse
 * einer lokalen Variable zurück */
char *test1(void){
	char buffer[12];
	strcpy(buffer, "testwert");
	return buffer;
}


/* Rückgabe mit statischer Variable  - Info: version geht bei rekursion nicht!*/
char *test2(void){
	static char buffer[12];
	strcpy(buffer, "testStat");
	return buffer;
}


/* malloc() Speicher vom HEAP verwenden - dynamische Speicherverwaltung */
char *test3(void){
	char *buffer = (char *) malloc(12);
	strcpy(buffer, "testMalloc");
	return buffer;
}


/*Zeiger als argument übergeben */
char *test4(char *ptr){
	char buffer[12];
	ptr = buffer;   // Kein & bei strings
	strcpy(buffer, "pointer");
	return ptr;
}

int main(){
 	char *ptr;

	ptr = test1();	
	printf("Test1: %s\n",ptr); //Meistens Datenmüll oder NULL
	ptr = test2();
	printf("Test2: %s\n",ptr);
	ptr = test3();
	printf("Test3: %s\n",ptr);

	test4(ptr);
	printf("Test4: %s\n",ptr);
	


	return 0;
}
