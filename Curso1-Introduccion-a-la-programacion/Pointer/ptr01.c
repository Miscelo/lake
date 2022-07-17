#include <stdio.h>




int main(){

	int arr[] = {2, 4, 8, 13, 42,1337};
	int *ptr;
	ptr = & arr[0];  // man kann auch schreiben ptr = arr
	int size = sizeof(arr)/sizeof(int);
	


	//Die Adresse wird um 4 Byte erhöht im hex system
	printf("[");
	for(int i=0;i<size;i++){
		printf("\"%p\", %d", (ptr+i), *(ptr+i));
		(i<(size-1))? printf(","):printf("]\n");
	}




	//Andere schreibweise, anstatt ptr, ruft man arr auf
	printf("[");
	for(int i=0;i<size;i++){
		printf("%d", *(arr+i));
		(i<(size-1))? printf(","):printf("]\n");
	}

	return 0;
}
