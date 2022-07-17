#include <stdio.h>


//Funtktion übergibt das Array
void printArray(int arr[], int size){
	int i;
	printf("[");
	for(i=0;i<size;i++){
		printf("%d", arr[i]);
		(i<(size-1))? printf(","): printf("]\n");
	}
}


//Funktion übergibt pointer 
void printArray2(int *arr, int size){
	int i;
	printf("[");
	for(i=0;i<size;i++){
		printf("%d", arr[i]);
		(i<(size-1))? printf(","): printf("]\n");
	}
}




int main(){
	
	int array[] = {3,5,7,8,9,12,14,14,34};
	int arraysize = sizeof(array)/sizeof(int);



	printArray(array, arraysize);
	printArray2(array, arraysize);



	return 0;
}
