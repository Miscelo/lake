#include <stdio.h>


void printArray();


int main(){
	int size;
	int arr[];

	int i=0;
	int num;
	while(1){
		printf("Eingabe index %d: ",i);
		scanf("%d",&arr[i]);
		printf("Ein weiterer Wert: STOP= 0: ");
		scanf("%d", &num);
		if(num == 0){
			break;
		i++;
		}
	}
	
	printf("%d",(int)( sizeof(arr)/sizeof(int)));
	size = (int)(sizeof(arr)/sizeof(int));
	
	printArray(arr);




	return 0;
}




void printArray(int arr[]){
	int j, size;
	size = sizeof(arr)/sizeof(int);
	printf("[");
	for(j=0;j<size;j++){
		(j<size-1)? printf("%d,",arr[j]): printf("%d",arr[j]);
	}
	printf("]\n");

}
