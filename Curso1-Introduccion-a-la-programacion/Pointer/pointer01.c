#include <stdio.h>


int main(){

	int a = 42;
	
	int *ptr;  //Zeiger, zeigt auf einen anderen Integer, z.B auf a, wenn man es definiert. Er speichert die physische Adresse
	ptr = &a;


	printf("Hexadezimal: %x\n", &a);  //Hexadezimal für Speicheradresse

	printf("Integer: %ld\n", &a);  //Hexadezimal für Speicheradresse
	
	printf("Pointer, in hex: %x\n", ptr); 







	return 0;
}


