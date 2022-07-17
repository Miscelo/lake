/* Programa: <Ejercicio M340_UD01_EV4, Ejercicio 2>
Autor: <Michael Schossow> Fecha: <17.11.2021> */

#include <stdio.h>

float multiplicar(float a, float b, float c, float d);

void main(){
	float a,b,c,d,resultado;
	printf("Introduzca 4 numeros para su multiplicación.\n");
	scanf("%f\n",&a);
	scanf("%f\n",&b);
	scanf("%f\n",&c);
	scanf("%f\n",&d);

	resultado = multiplicar(a,b,c,d);
	printf("%f", resultado);


}



float multiplicar(float a, float b, float c, float d){
	return a*b*c*d;
}
