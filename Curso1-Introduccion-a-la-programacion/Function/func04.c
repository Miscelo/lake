#include <stdio.h>

//   Fibonacci Zahlen
//   -> 0,1,1,2,3,5,8,13,21,34,...

int fibo(n);


int main(){

	int e;
	e = fibo(7);
	printf("%d\n", e);

	return 0;
}


int fibo(n){
	if(n==1){
			return 0;
	}
	else if(n==2){
			return 1;
	}
	else{
		return fibo(n-2) + fibo(n-1);
	}
}

