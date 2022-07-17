#include <stdio.h>
#define ARRAYSIZE 5  

int main(void){


	int val[ARRAYSIZE] = {0};

	val[9] = 42;
	printf("%d\n",val[9]);

	
	
	int a1[10], a2[10];	
	for(int i=0;i<10;i++){
		a1[i]=i;
	}
	int s = 0;
	for(int j=9;j>=0;j--){
		a2[s] = a1[j];
		s++;
	}

	printf("Array 2 = [");
	for(int k=0;k<10;k++){
		printf("%d,", a2[k]);
	}

	printf("]");

	
	
	
	
	
	
	
	//fflush( stdin );
	getchar();
	return 0;
}
