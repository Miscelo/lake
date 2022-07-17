/* Que muestre los primeros 100 números de izquierda a derecha usando un
 * array de dos dimensiones.
 */

#include <stdio.h>
#include <stdlib.h>


void printArray(int arr[][10]);


int main(){
	int arr[10][10];
	int i,j;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			arr[i][j]= (i*10)+1+j;
		}
	}
	printArray(arr);
	return EXIT_SUCCESS;
}



void printArray(int arr[][10]){
	int i,j;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%d,",arr[i][j]);
		}
		printf("\n");
	}
}
