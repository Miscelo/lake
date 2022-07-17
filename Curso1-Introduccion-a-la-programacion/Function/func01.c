#include <stdio.h>



void func(char *cad);


int main(int argc, char const *argv[]){
	
	
	int a = argc;
	char **ptr;
	ptr = argv;
	char cad[] = "Hello World!";
	func(cad);

	printf("%d\n", a);
	printf("%s\n", *(ptr+1));


	return 0;
}





void func(char *cad){
	printf("%s\n", cad);
}
