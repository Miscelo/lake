/******************************************************************************************/
/*                Ejercicio Voluntario Nº2,1. Unidad Didáctica 3                          */
/*   Realiza un programa que calcule la medi a de temperatura de una semana. Utiliza      */
/*   un array para almacenar la temperatura de cada día de la semana.                     */
/******************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(){
	int dias = 7;
	float temp[dias];
	float accumulator;

	printf("Introduzca 7 valores de Temperatura, por favor: ");
	for(int i=0;i<dias;i++){
		scanf("%f",&temp[i]);
		accumulator +=temp[i];
	}
	printf("\nLa temperatur media semanal es: %.2f\n", accumulator/(float)dias);


	return 0;
}
