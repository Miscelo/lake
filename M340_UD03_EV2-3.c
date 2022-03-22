/****************************************************************************************/
/*                Ejercicio Voluntario Nº2,3 . Unidad Didáctica 3                       */
/* Multiplicar dos matrices cuadradas y almacenarlo en un fichero nombre bimatriz.c     */
/****************************************************************************************/
#include <stdio.h>

// Initalize function that prints a matrix
void printMatrix(int matrix[2][2]);



int main(){
	printf("*** Kreuzprodukt zweier Matrizen  ***\n");
	int m1[2][2] = {{1,-3},{0,-2}};

	int m2[2][2] = {{-1,4},{7,1}};
	
	printMatrix(m1);
	printf("  X\n");
	printMatrix(m2);

	/*Print bimatrix=bm Kreuzprodukt*/
	int bm[2][2] = {{0,0},{0,0}};
	bm[0][0] = m1[0][0] * m2[0][0] + m1[0][1] * m2[1][0];
	bm[0][1] = m1[0][0] * m2[0][1] + m1[0][1] * m2[1][1];
	bm[1][0] = m1[1][0] * m2[0][0] + m1[1][1] * m2[1][0];
	bm[1][1] = m1[1][0] * m2[0][1] + m1[1][1] * m2[1][1];
	
	printf("  =\n");	
	
	printMatrix(bm);

	

	return 0;
}


void printMatrix(int matrix[][2]){
	for(int i=0;i<2;i++){
		printf("[");
		for(int j=0;j<2;j++){
			(j<1)?printf("%d,", matrix[i][j]):printf("%d", matrix[i][j]);
		}
		printf("]\n");
	}
}
