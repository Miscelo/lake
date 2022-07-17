/*Programa: <Ejercicio M340_UD01_EV5 - Ejericico 1>
Autor: <Michael Schossow> Fecha: <17.11.2021> */

/*Programa de introducción de datos personales*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#define IndiceDeMasaCorporal IMC
double imcFunc(double peso, double altura);

int main(void){

	char nombre[15], apellidos[15], direccion[15];
	int edad;
	double peso, altura;
	printf("Introduzca su nombre por favor:" );
	scanf("%s", &nombre);

	printf("\nIntroduzca su apellido por favor: ");
 	scanf("%s", &apellidos);

	printf("\nIntroduzca su dirección por favor: ");
	scanf("%s", &direccion);


	printf("\nSu edad por favor: ");
	scanf("%d", &edad);

	printf("\nIntroduzca su peso en kg, por favor: ");
	scanf("%lf", &peso);

	printf("\nIntroduzca su altura en metro, por favor: ");
	scanf("%lf", &altura);

	double IMC = imcFunc(peso,altura);
	printf("%s %s,de edad %d tiene un I.M.C IMC = %.1f\n",nombre,apellidos,edad,IMC);
	if(IMC < 18.5) printf("Tiene bajo peso.\n");
	else if(IMC >= 18.5 && IMC<25) printf("IMC normal\n");
	else if(IMC>=25 && IMC <30) printf("Tiene pequeño sobre peso.\n");
	else if(IMC>=30 && IMC <35) printf("Tiene obesidad.\n");
	else printf("Usted es gordo.\n");
	return 0;
}

double imcFunc(double peso, double altura){
	double IMC;
	IMC = peso/(altura*altura);
	return IMC;
}
