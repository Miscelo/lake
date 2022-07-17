#include <stdio.h>
#include <stdlib.h>
#include <string.h>





int main(){

	int a=42;
	int *ptr = &a;

	int **ptr2 = &ptr;

	printf("%d\n", a);  //42
	printf("Adresse von a: %p\n", &a);
	printf("%d\n", *ptr);   //42
	printf("Adresse vom Pointer: %p\n", ptr);
	printf("%d\n", **ptr2);   //42
	printf("Adresse Pointer 2: %p\n", &ptr2);
	printf("Adresse Pointer 2: %p\n", &ptr);



	return EXIT_SUCCESS;
}
