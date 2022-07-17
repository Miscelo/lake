#include <stdio.h>
#include <string.h>


//Strspan  = caracter se encuentra en otra cadena

int main(){

	char cad1[13] = "buenos días";
	char cad2[5] = "o";

	int position;
	position = strcspn(cad1, cad2);


	printf("Cadena 1 = %s\n", cad1);
	printf("Cadena 2 = %s\n", cad2);
	printf("Position = %d\n", position);  //position = 4




	return 0;
}
