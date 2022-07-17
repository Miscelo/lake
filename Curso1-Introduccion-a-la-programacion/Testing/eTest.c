#include <stdio.h>
#include <math.h>


int main(void){

	double x = 2;
	double y = 4;
	printf("%lf\n", pow(2,4));



	double cuadrado = 0;
	double lado, base, area, altura;

	if(cuadrado)
	{
			scanf("%lf",&lado);
			area = lado * lado;
			printf("\nArea es %lf.",area);
	}
	
	else
	{

			scanf("%lf%lf",&base,&altura);
			area = (base*altura)/2;
			printf("\nArea del triangulo es %lf.",area);
	}

	return 0;
}
