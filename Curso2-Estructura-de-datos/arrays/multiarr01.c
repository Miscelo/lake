#include <stdio.h>
#include <string.h>




int main(){
	


	char cate[3][6][11] = {
					{"England", "France", "Germany", "Spain", "Netherland", "Italy"},
					{"London", "Paris", "Berlin", "Madrid", "Rotterdam", "Rom"},
					{"english", "french", "german", "spanish", "dutch", "italian"}
			};


	int i,j;
	for(i=0;i<3;i++){
		printf("[");
		for(j=0;j<6;j++){
			printf("%s", cate[i][j]);
			(j<5)? printf(", "): printf("]\n");
		}
	}
		
	
	
	printf("\n");
	printf("1. Zeile, 1. Spalte: %s\n", cate[0][0]);
	printf("3. Zeile, 6. Spalte: %s\n", cate[2][5]);

	return 0;
}


