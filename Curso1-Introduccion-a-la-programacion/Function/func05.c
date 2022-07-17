#include <stdio.h>

//Variables

int i=20;
extern int j=49;


void change(){
	i=42;
	printf("%d\n", i);
}


int main(){
	i=30;
	int *ptr;
	ptr=&i;
	
	change();

	printf("%d\n", i);

	printf("%d\n", *ptr);
	printf("%d\n", j);

	return 0;
}





