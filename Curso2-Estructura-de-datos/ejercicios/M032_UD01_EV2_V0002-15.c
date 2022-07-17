/* Que pinte un tablero de ajedrez, los peones con la letra P, las torres con T, los
 * caballos con C, los alfiles con A, el rey con R y la reina con M.
 */

#include <stdio.h>
#include <stdlib.h>


void printTablero(char tablero[8][8]);

int main(){
	
	char tablero[8][8];
	tablero[0][0]='T';
	tablero[0][1]='C';
	tablero[0][2]='A';
	tablero[0][3]='M';
	tablero[0][4]='R';
	tablero[0][5]='A';
	tablero[0][6]='C';
	tablero[0][7]='T';
	
	tablero[7][0]='T';
	tablero[7][1]='C';
	tablero[7][2]='A';
	tablero[7][3]='M';
	tablero[7][4]='R';
	tablero[7][5]='A';
	tablero[7][6]='C';
	tablero[7][7]='T';

	int i;
	for(i=0;i<8;i++){
		tablero[1][i]='P';
		tablero[2][i]=' ';
		tablero[3][i]=' ';
		tablero[4][i]=' ';
		tablero[5][i]=' ';
		tablero[6][i]='P';
	}

	printTablero(tablero);


	return EXIT_SUCCESS;
}

void printTablero(char tablero[8][8]){
	int i,j;
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			printf(" %c ",tablero[i][j]);
			(j<8-1)? printf("|"):printf("\n");
		}
		printf("---------------------------------\n");
	}
}



