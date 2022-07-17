#include <stdio.h>



int main(){


	int arr[]={1,2,3,4,5,6};
	int *ptr;
	ptr = arr;
	
	int i;
	for(i=0;i<6;i++){
		printf("Array   adresse: %p\n", &(arr[i]));
		printf("Pointer adresse: %p\n", ptr+i);
		printf("Pointer value: %d\n", *(ptr+i));
	}


	return 0;
}
