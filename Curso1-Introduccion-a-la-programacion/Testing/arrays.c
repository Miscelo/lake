#include <stdio.h>


int main(){
	int arr[5];

	for(int i = 0;i<3;i++){
		printf("Eingabe %d: ",i);
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<5;j++){
		printf("%d\n", arr[j]);
	}
	printf("\nArray: [%d,%d,%d]",arr[0], arr[1], arr[2]);

	/*Print sizeofArray - Wert in Bytes, geteilt durch Datentyp, hier integer*/
	printf("\nDer Array hat %ld Elemente.\n",sizeof(arr)/sizeof(int));

	/*Multidimensionale Arrays*/
	int multiarr[3][5] =
				{
				{1,2,3,4,5,},
				{5,3,9,2,12,},
				{42,1337,9,1,7}
				};


	int i,j;
	for(i=0;i<3;i++){
		printf("[");
		for(j=0;j<5;j++){
			(j<4)? printf("%d,",multiarr[i][j]):printf("%d",multiarr[i][j]);
		}
		printf("]\n");
	}










	return 0;
}
