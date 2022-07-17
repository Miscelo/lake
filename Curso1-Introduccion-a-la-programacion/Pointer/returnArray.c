#include <stdio.h>



int *qudrat(int ptr){
	int ergebnis;
	ergebnis = ptr * ptr;
	return ergebnis;
}





int main(){


	int value = 4;
	int *ptr;
	ptr = &value;
	
	int ergebnis;
	ergebnis = quadrat(ptr);
	printf("%d\n", ergebnis);



	return 0;
}






