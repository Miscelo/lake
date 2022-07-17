

#include <stdio.h>
#include <stdlib.h>

//pi = 
#define pi 3.1416


int main(void){
	float ergebnis;
	ergebnis = nilakantha(6);
	printf("%f", ergebnis);
	return 0;
}




float nilakantha(int n){
	float result, op;
	for(int i = 2; i<=n; i++){
		result += 4/(n * (n+1) * (n+2)*op);
		op *= -1;
	}
	return result;
}


