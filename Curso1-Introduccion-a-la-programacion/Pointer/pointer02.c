#include <stdio.h>
#include <string.h>


#define NULL (void *)0


int main(){
	

	
	int x = 5;
	int y = 42;
	int z = 1337;


	int *ptr;
	ptr = &y;

	printf("Pointer als HEX: %p\n", ptr);
	printf("Variable als HEX %p\n", &y);
	
	//llx long unsigned int , zeigt 65535 stellen. Also die
	//letzten 8 Werte vom hex
	printf("Pointer als HEX mit %llx, %llx\n", ptr, &y);

			

	ptr+10;

	printf("%d\n", *ptr);
	




	return 0;
}


