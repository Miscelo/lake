/*Programa: <Ejercicio M340_UD01_EV4 - Ejericico 1>
Autor: <Michael Schossow> Fecha: <17.11.2021> */

#include <stdio.h>

void personalData();

int main(void){
	personalData();
	return 0;
}


void personalData(){
	char nombre[] = "Michael";
	char apellido[] = "Schossow";

	int day, mounth, year;
	day=5;
	mounth=5;
	year=1977;

	printf("%s\n", nombre);
	printf("%s\n", apellido);
	printf("Birthday: %d.%d.%d\n",day,mounth,year);
}
