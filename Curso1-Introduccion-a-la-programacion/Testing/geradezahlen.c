#include<stdio.h>
#include<unistd.h>

//Printed gerade zahlen
// bis zum limit, der als argument übergeben wird nach ./a.out arg
// z.B.   ./a.out 5  -->  [2,4,]

int main(int argc, char *argv[]){

	int i;
	int limit = atoi(argv[1]);
	

	printf("[");
	for(i=1;i<=limit;i++){
		if(i%2 == 0){ 
			printf("%d",i);
			if(i!=1 && i!=limit) printf(",");
		}
	}

	printf("]");


	return 0;
}
