#include <stdio.h>


int main(){

	int *ptr;
	int var, var2;

	ptr=&var;

	//Dereferenzierung: var bekommt den Wert 100
	*ptr = 100;

	//Initalisierung : pr bekommt die Adresse von var.
	var2 = *ptr;


	*ptr+=100; //Dereferenzierung, var wird um 100 erhöht
	(*ptr)++;    //Dereferenzierung: var jetzt 201
	(*ptr)--;    //var wieder 200
	ptr=&var2;   // pointer zeigt jetzt auf var2



	printf("Wert von Pointer aus. *ptr:  %d\n", *ptr);
	printf("Adresse von Pointer aus. ptr:   %p\n", ptr);
	printf("Adresse von var2: %p\n", &var2);



	return 0;

}
