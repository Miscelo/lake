#include <stdio.h>



int main(){


	float matriz[3][3] = {
				{1.1, 2.2, 3.3},
				{4.4, 1.4, 7.2},
				{3.4, 5.6, 8.9}
			};

	char letras[2][7] = {"Mario", "Manuela"};

	
	int i,j;
	for(i=0;i<2;i++){
		printf("%s\n", letras[i][6]);
	}


	return 0;
}
