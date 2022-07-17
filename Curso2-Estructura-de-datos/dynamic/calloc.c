/* bauen eines dynamischen Arrays, also Vectors mit CALLOC
 *   int *vector = calloc(sizeof(int), length)   oder
 *   int *vector = calloc(length, sizeof(int))     sind beide gleich
 */

#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int L);

int main(){
	size_t l = 2;
	int *vector = calloc(l, sizeof(int));
	if(vector == NULL){
		printf("Kein Speicher vorhanden!\n");
		return 1;
	}

	*vector = 42;
	*(vector+1) = 1337;

	printArray(vector, l);

	free(vector);

	return 0;
}


void printArray(int *arr, int L){
  printf("Dynamisches Array := [");
  int i;
  for(i=0;i<L;i++){
    printf("%d", *(arr+i));
    (i<L-1)? printf(", "): printf("]\n");
  }
}
