/* Crear un programa que mediante un menú admita reservar o cancelar asientos
 * de un avión, así como mostrar qué asientos están ocupados y libreas
 * actualmente.
 * El array tendrá 25 filas y 4 columnas.
 */

#include <stdio.h>
#include <stdlib.h>

#define FILA 25
#define PLAZA 4
#define DOORLINE 14

void createPlane(int asiento[FILA][PLAZA]);  //escribe en cada valor del array el numero 45, que es '-' en la tabla ascii
int printmenu();
void reservarAsiento(int asiento[FILA][PLAZA]);
void cxlReserva(int asiento[FILA][PLAZA]);
void printAsientos(int asiento[FILA][PLAZA]);


int main(){


	int asiento[FILA][PLAZA];
	createPlane(asiento);
	
	int select = 0;
	while(select != 4){
		select = printmenu();
		switch(select){
			case 1: printAsientos(asiento); break;
			case 2: reservarAsiento(asiento); break;
			case 3: cxlReserva(asiento); break;
		}
	}


	return EXIT_SUCCESS;
}


int printmenu(){
	int num;
	printf("*** Planemanagement ***\n");
	printf("    Elige un numero:\n");
	printf("1. Ocupación del asientos\n");
	printf("2. Reservar asiento\n");
	printf("3. Cancelar Reserva\n");
	printf("4. Salir\n");
	scanf("%d", &num);
	return num;
}


void reservarAsiento(int asiento[FILA][PLAZA]){
	int fila_guest, plaza_guest;
	printAsientos(asiento);
	printf("-------------------------------------------\n");
	printf("Por favor, introduzca dónde desea sentarse.\n");
	printf("La fila: ");
	scanf("%d", &fila_guest);
	printf("La plaza: ");
	scanf("%d", &plaza_guest);
	if(asiento[fila_guest-1][plaza_guest-1]==88){
		printf("\n * Plaza ya ocupada!\n Introduzca de nuevo, por favor.\n");
		reservarAsiento(asiento);
	} else{
		asiento[fila_guest-1][plaza_guest-1] = 88;
	}
}
	


void cxlReserva(int asiento[FILA][PLAZA]){
	int fila_guest, plaza_guest;
	printf("-------------------------------------------\n");
	printf("Cancelar su reserva: .\n");
	printf("La fila: ");
	scanf("%d", &fila_guest);
	printf("La plaza: ");
	scanf("%d", &plaza_guest);
	asiento[fila_guest-1][plaza_guest-1] = 45;
}



void printAsientos(int asiento[FILA][PLAZA]){
	printf("Asientos en el avion. \'-\'-libre, \'X\'-ocupado.\n");
	int i,j;
	for(i=0;i<FILA;i++){
		(i<9)? printf(" %d. ", i+1): printf("%d. ", i+1); 
		for(j=0;j<PLAZA;j++){
			printf("%c  ", asiento[i][j]);
		}
		(i==DOORLINE)? printf("\n\n"): printf("\n");
	}
}




void createPlane(int asiento[FILA][PLAZA]){
	int i,j;
	for(i=0;i<FILA;i++){
		for(j=0;j<PLAZA;j++){
			asiento[i][j] = 45;
		}
	}
}
