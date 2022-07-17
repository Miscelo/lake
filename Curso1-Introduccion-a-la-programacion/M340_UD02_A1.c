
#include <stdio.h>
#include <math.h>



int main(){

	char reducido;
	printf("IVA reducido [Y,N]: ");
	scanf("%c", &reducido);
	double iva;
	double neto = 42.0;

	if(reducido=='N')
		iva = 0.21 * neto;
	else
		iva = 0.08 * neto;
	printf("%.2lf\n",iva);

	printf("**************\n");

	iva = (reducido=='N') ? 0.21 * neto : 0.08 * neto;
	printf("Zweite version: %.2lf\n",iva);

	printf("**************\n");

	int cuadrado = 1;  // cambiar valor 0 o 1
	float lado, area, base, altura;
	if(cuadrado){
		scanf("%f", &lado);
		area = lado * lado;
		printf("Area cuadrado: %f\n", area);
	}
	else{
		scanf("%f %f", &base, &altura);
		area = (base * altura) / 2;
		printf("Area triangulo:  %f\n", area);
	}





	return 0;
}
