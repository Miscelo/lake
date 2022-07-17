#include<stdio.h>

int main(int argc, char *argv[]){
	printf("%s\n", argv[1]);

	for(int i=0;i<argc;i++){
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return 0;
}

