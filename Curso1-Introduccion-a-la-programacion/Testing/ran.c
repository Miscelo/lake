#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Randum number mit srand(time) */


int main(){
	srand(time(NULL));
	int myrand;
	for(int i=0;i<6;i++){
		myrand = (rand()%6)+1;
		printf("%d\n", myrand);
	}

	return 0;
}
