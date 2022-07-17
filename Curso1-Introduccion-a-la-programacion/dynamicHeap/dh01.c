#include <stdio.h>
#include <stdlib.h>


void printNumbers(int *n){
	int limit = n[0];
	int i;
	for(i=1;i<limit;i++){
		printf("%d: %d\n",i, *(n+i));
	}
	printf("------------------------------\n");
}

int resize(int *n){	
	int dynArraySize;
	printf("Gib die gewünschte Arraygrösse an: ");
	scanf("%d", &dynArraySize);
	n = realloc(n, sizeof(int)*(dynArraySize+1));
	if(n==NULL){
		return 1;
	}
	*n = dynArraySize+1;
	return 0;
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
	
	printNumbers(n);
	int checkResize;	
	checkResize = resize(n);	
	if(checkResize == 1){
		free(n);
		return 1;
	}
	printNumbers(n);	


	return 0;
}


