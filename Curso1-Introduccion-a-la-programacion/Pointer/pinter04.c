#include <stdio.h>

int main(){


	int x[] = {2,42,1337};

	int *p;
	p=&x;

	printf("%p\n", &x[0]);
	printf("%p\n", p);

	printf("%d\n", *(p+0)); // gibt Wert von x[0] wieder 
	printf("%d\n", *(p+1));
	printf("%d\n", *(p+2));


	printf("%d\n",x[0]);




	return 0;

}
