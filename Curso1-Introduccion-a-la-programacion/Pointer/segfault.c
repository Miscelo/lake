#include <stdio.h>



int main(){
	
	char *cad;

	cad = "COM";
	
	*(cad+1)='n';

	printf("%s\n", cad);	

	return 0;
}
