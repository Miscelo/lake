#include <stdio.h>

#define SIZE 20


int main(){




	int i;

	printf("Introduzca una ciudad (20 caracteres)!: \n");

	char ciudad[20];
	fgets(ciudad, 20, stdin);
	printf(ciudad);

	printf("Was aichj immer: %s.",ciudad);


	/*
	for(i=0;i<SIZE;i++){
		printf("%c",ciudad[i]);
	}
	*/
	

	printf("%d\n", (int)sizeof(ciudad));

	
	

	fflush( stdin );
	getchar();

	return 0;
}
