#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_ELEMENTOS 6
#define VALOR_MAXIMO 10



int randomNumber(const int max);
void printArray();



int main(){



	int array[N_ELEMENTOS]={1,2,3,4,5,6};

	char nombre[]={'M','i','c','h','a'};
	srand(time(NULL));


	printArray(array);
	int j;
	for(j=0;j<N_ELEMENTOS;j++){
		array[j] = randomNumber(VALOR_MAXIMO);
	}
	printArray(array);

	return 0;
}


int randomNumber(const int max){
	return (rand()%max);
}


void printArray(int array[]){
	printf("[");
	int i;
	for(i=0;i<N_ELEMENTOS;i++){
		printf("%d", array[i]);
		(i<(N_ELEMENTOS-1))? printf(","): printf("]\n");
	}
}
