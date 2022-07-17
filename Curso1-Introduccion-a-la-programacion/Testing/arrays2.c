#include <stdio.h>

void printArray();


int main(){
	int multiarr[2][3];

	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("[%d,%d]: ",i,j);
			scanf("%d",&multiarr[i][j]);
		}
	}

	printArray(multiarr[2][3]);


	return 0;
}



void printArray(int arr[2][3]){
	int i,j;
	for(i=0;i<2;i++){
		printf("[");
		for(j=0;j<3;j++){
			(j<2)? printf("%d,",arr[i][j]):printf("%d",arr[i][j]);
		}
		printf("]\n");
	}
}
