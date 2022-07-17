#include <stdio.h>
#include <stdlib.h>


void printNumbers(int **n){
	printf("%d\n", n);
}


int main(){
	int dynArraySize = 3;
	int heapsize = dynArraySize + 1;
	int *n = calloc(heapsize, sizeof(int));
       	if(n == NULL)
		return 1;
	
	*n = heapsize;
	*(n+1) = 100;
	*(n+2) = 200;
	*(n+3) = 300;
	
	printNumbers(&n);	
	//resize(n);	

	free(n);

	return 0;
}


