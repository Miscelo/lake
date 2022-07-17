#include <stdio.h>

/*Paso de Parametros por referencia*/


void stat(int *a){

	int A[]={2,3,4,5,6};
	*a=A[0];
}






int main(){
	
	int a;
	stat(&a);

	printf("%d\n", a);


	return 0;
}
