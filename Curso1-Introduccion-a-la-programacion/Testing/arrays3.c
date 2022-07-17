#include <stdio.h>


int main(){
	
	int arr[][4]={
			{1,3,3,7},
			{4,2,4,2},
			{1,2,0,1}
		};
	
	for(int i=0;i<3;i++){
		printf("[");
		for(int j=0;j<4;j++){
			(j<3)? printf("%d,",arr[i][j]):printf("%d",arr[i][j]);
		}
		printf("]\n");
	}
	

	printf("Size of array: %d ",(int)(sizeof(arr)/sizeof(int)));


	return 0;
}






