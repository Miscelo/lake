#include <stdio.h>



int main(){
	int array[]={42,1337,7};
	int *ptr;

	ptr = array;

	printf("%d \n", *ptr); 
	printf("%d \n", *(ptr+1)); 
	printf("%d \n\n", *(ptr+2)); 

	
	for(int i=0;i<4;i++){
		printf("%d) -> %d \n",i, *(ptr+i));
	}

	return 0;
}
