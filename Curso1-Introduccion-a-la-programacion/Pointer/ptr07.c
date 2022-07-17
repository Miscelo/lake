#include <stdio.h>


void max(int *arr, int len, int *maximum);


int main(){
	
	int arr[]={2, 5, 42, 13, 1};
	int len=sizeof(arr)/sizeof(int);
	int maximum;
		

	max(arr, len, &maximum);
	
	printf("MAX: %d\n", maximum);

	return 0;
}





void max(int *arr, int len, int *maximum){
	int i;
	*maximum=*(arr);
	for(i=0;i<len;i++){
		if(*(arr+i)>*maximum){
			*maximum=*(arr+i);
		}
		
	}
}
