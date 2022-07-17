/* bauen eines dynamischen Arrays, also Vectors
 */

#include <stdio.h>
#include <stdlib.h>



int main(){

	int *vector = malloc(sizeof(int));
	if(vector == NULL){
		printf("Kein Speicher vorhanden!\n");
		return 1;
	}

	for(int x=0;x<10;x++){
		vector[x] = 100;
		//printf("%p\n", &vector[x]);   // zeigt Adresse an
		//printf("%d\n", vector[x]);    // zeigt wert an
		vector = realloc(vector, sizeof(int)*(x+2));
		printf("Speichergrösse: 4 * \(%d + 2\)) = %d\n", x, 4*(x+2));
		if(vector==NULL){
			printf("Kein Speicher vorhanden!\n");
			return 1;
		}
	}

	free(vector);

	return 0;
}


//void printArray(
