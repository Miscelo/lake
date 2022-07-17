#include <stdio.h>

// Schreibt die Länge des Arrays an die erste Stelle in ein neues Array

void quad(int *dat){
	int len = *dat;
	int i;
	for(i=0;i<len;i++){
		printf("%d,", *(dat+i+1));
	}
}




int main(){
	int arr[] = {1,2,3,4,5,6};
	int len = sizeof(arr)/sizeof(int);

	int brr[len+1];
       	int i;
	brr[0]=len;
	for(i=0;i<len;i++){
		brr[i+1] = arr[i];
	}	
	quad(brr);


	return 0;
}
