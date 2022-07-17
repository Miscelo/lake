#include <stdio.h>
#include <string.h>


int main(){
	char password[]="abcd";
	char eingabe[99];


	//fgets übergibt am Ende \n Zeilenumbruch, also Länge 5.
	fgets(eingabe,99,stdin);


	// Mit Eingabe "abcd" speichert er im eingabe[]={'a','b','c','d','\n'} +\0 am Ende


	int l;
	l= strlen(eingabe);  // l = 5 bei eingabe "abcd"



	int diff;
	//verlgleichen mit strncmp die ersten 4 Einträge im Array
	diff = strncmp(password, eingabe, l-1);
	printf("%d\n", diff);

	return 0;
}
