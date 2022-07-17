#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>



void quadrat(float *var){
	*var = (*var) * (*var);
}



void diff(float *var){
	*var = (*var)/2;
}
	








int main(){


	float var = 42;
	float *ptr;
	ptr = &var;
	printf("Wert Pointer     : %f\n", *ptr);

	quadrat(&var);
	printf("Quadrat: %.2f\n", *ptr);

	diff(&var);
	printf("Value / 2 = %.2f\n", *ptr);

	return  0;
}






