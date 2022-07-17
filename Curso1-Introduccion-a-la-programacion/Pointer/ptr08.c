#include <stdio.h>


int main(){
	int A[]={9,2,3,42};
	int *p;
	p=A;
	printf("%d\n",*p);

	printf("%p\n", p);
	printf("%p\n", &A[0]);
	


	int B[3][3]={
			{1,2,3},
			{4,5,6},
			{6,7,8},
			};
	printf("%d\n", B[0][0]);
	printf("%d\n", B);
	printf("B: %d\n", **(B));
	printf("B+1: %d\n", **(B+1));
	printf("B+2: %d\n", **(B+2));


	return 0;
}
