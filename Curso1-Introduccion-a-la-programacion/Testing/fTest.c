#include <stdio.h>

//1+2+3+4+5+6=21
int suma(int n);

int main(){



	int res = suma(6);
	printf("%d\n",res);


	return 0;
}


int suma(int n){
	if(n<2){
		return 1;
	}
	
	return n+suma(n-1);
		

}
