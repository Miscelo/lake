#include <stdio.h>

#define pi 3.1416


int main(){
	

	double radio, altura, area, volumen;

	printf("Introduze el valor del radio: ");

	scanf("%lf", &radio);

	printf("introduzca la altura! ");

	scanf("%lf", &altura);


	area = 0;
	volumen = 0;


	if(radio > 0 && altura > 0){
		area =(2 * pi * radio) + (2 * pi * radio * altura);
		volumen = pi * radio * radio * altura;
	}
	
	printf("El valor del area es %f.\n", area);
	printf("El valor del volumen es %f.\n", volumen);

	getchar();





	return 0;
}
