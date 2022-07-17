
/*Media de una serie de números que finaliza al introducir el 999. El 999 no debe ser
 * tenido en cuenta para la media.*/



#include <stdio.h>



int main(){

	int n,c, counter;
	c = 0;
	counter = 0;


	do{
		printf("Introducir un numero: ");
		scanf("%d",&n);
		c+=n;
		counter++;
	}while(n!=999);

	printf("%.4f\n",(float)(c-999)/(counter-1));


	return 0;
}
