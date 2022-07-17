/* Programa calculadora simple */

#include <stdio.h>

int myfunc(int a, int b);

int main(){

	
	int xar[2] = myfunc(2,3);
	printf("%d", xar[0]);
	printf("\nENDE\n");

	return 0;
}



int myfunc(int a, int b){
	int myar[2];
	myar[0] = a;
	myar[1] = b;
	return myar;

}
