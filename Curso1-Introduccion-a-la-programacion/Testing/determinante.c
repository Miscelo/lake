#include <stdio.h>
#include <stdlib.h>

#define SIZE 3


int main(){

	
	int matriz[SIZE][SIZE]={{1,2,6},{9,7,8},{15,2,4}};
	int determinante;
	int i,j;



	determinante = matriz[0][0]*matriz[1][1]*matriz[2][2];	
	determinante += matriz[0][1]*matriz[1][2]*matriz[2][0];
	determinante += matriz[1][0]*matriz[2][1]*matriz[0][2];
	determinante -= matriz[0][2]*matriz[1][1]*matriz[2][0];
	determinante -= matriz[0][1]*matriz[1][0]*matriz[2][2];
	determinante -= matriz[0][0]*matriz[2][1]*matriz[1][2];


	printf("Matix:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			(j<2)? printf("%d,",matriz[i][j]):printf("%d",matriz[i][j]);
		}
		printf("\n");
	}


	printf("Determinante: %d:", determinante);


	return 0;
}

