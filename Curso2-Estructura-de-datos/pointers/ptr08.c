#include <stdio.h>
#include <stdlib.h>


int main(){

	float x[] = {4, -8, 9, 56, -13, 32.1};
	float *p = x;
	float **pp=&p;



	printf("%g\n", **pp);
	printf("%g\n", *++p);
	printf("%g\n", *(p+2));
	


	return 0;
}
