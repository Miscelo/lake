#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void printMatrix(matrix[2][2]);

int main(){

  int m1[2][2] = {{7,5},{6,3}};
  int m2[2][2] = {{2,1},{5,1}};
  int m3[2][2] = {{0,0},{0,0}};

  m3[0][0] = m1[0][0] * m2[0][0] + m1[0][1] * m2[1][0];
  m3[0][1] = m1[0][0] * m2[0][1] + m1[0][1] * m2[1][1];
  m3[1][0] = m1[1][0] * m2[0][0] + m1[1][1] * m2[1][0];
  m3[1][1] = m1[1][0] * m2[0][1] + m1[1][1] * m2[1][1];

  printMatrix(m1);

  printf("Matrix:\n");
  printf("[%d,%d]\n", m3[0][0], m3[0][1]);
  printf("[%d,%d]\n", m3[1][0], m3[1][1]);



  return EXIT_SUCCESS;
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
