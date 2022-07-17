/* ********************************
 * ****   Zeiger auf Strings  *****
 * ********************************
 */



#include <stdio.h>
#include <stdlib.h>



void func(char *str){
	printf("%s\n", str);
}





int main(){

	char *greatings = "Hello World";
	//char greatings[] = "Hello Universe";
	

	func(greatings);
	
	printf("Anfangsadresse , auf die *string zeigt = %p.\n", greatings);
	printf("Inhalt der Adresse: %c\n", *greatings);

	return 0;
}
