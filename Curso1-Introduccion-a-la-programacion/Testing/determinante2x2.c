#include <stdio.h>
#include <stdlib.h>




int main(){
	
	
	int matrix[2][2] = {{2,1},{3,5}};
	int determinante;
	int i,j;


	determinante = matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0];
	for(i=0;i<2;i++){
		printf("|");
		for(j=0;j<2;j++){
			(j<1)? printf("%d,",matrix[i][j]):printf("%d",matrix[i][j]);
		}
		printf("|\n");
	}


	printf("\ndet(M)=%d",determinante);





	return 0;
}


