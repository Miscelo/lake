/*Programa: <Ejercicio M340_UD01_EV4 - Ejericico 1>
Autor: <Michael Schossow> Fecha: <17.11.2021> */

#include <stdio.h>
#define p 3.141592


float make_radio();
float circle_area(float r);




int main(void){
	float resultado;
	float radio;
	radio = make_radio();

	
	
	resultado = circle_area(radio);
	printf("La superficie es: %f\n", resultado);

	return 0;
}



float make_radio(){
	float radio;
	printf("***Programa calcula superficie circulo! ***\n");
	printf("Introduzca el radio del circulo: ");
	scanf("%f", &radio);
	return radio;

}



float circle_area(float r){
	return r*r*p;
}

