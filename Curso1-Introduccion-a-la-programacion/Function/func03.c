#include <stdio.h>

// n! = 1*2*3*4*5*....*n  -> n*.......*2*1

int facu(n);

int main(){

	int e;
	e=facu(5);
	printf("%d\n", e);

	return 0;
}




int facu(n){
	if(n==0){
		return 1;
	}
	else if (n>1){
		return n*facu(n-1);
	}
	
	return 1;  // Condición de terminación ,tritt ein bei facu(-1)

}
