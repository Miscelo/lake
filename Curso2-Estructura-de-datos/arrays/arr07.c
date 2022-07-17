#include <stdio.h>



int main(){

	int arr[2][2]={
			{1,2},
			{4,5},
		    };


	printf("%d\n", arr[0][0]);
	printf("%d\n", arr[0][1]);
	printf("%d\n", arr[1][0]);
	printf("%d\n", arr[1][1]);
	
	

	int **ptr;
	ptr=&arr;

	printf("%p\n", ptr);
	

	printf("%p\n", &arr[0][0]);
	printf("%p\n", &arr[0][1]);
	printf("%p\n", &arr[1][0]);
	printf("%p\n", &arr[1][1]);
	
	
	printf("\nEND\n");
	return 0;
}
