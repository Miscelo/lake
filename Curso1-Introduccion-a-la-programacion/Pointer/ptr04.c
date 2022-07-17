#include <stdio.h>


/*Funktion ändert Space zu '-' an der 5. STelle*/
void changeSpace(char *greatings){
	char *ptr;
	ptr = greatings+5;
	*ptr = '-';
}




int main(){

	char greatings[] = "Hallo Universe";	
	changeSpace(greatings);
	printf("%s\n", greatings);
	

	

	return 0;
}
