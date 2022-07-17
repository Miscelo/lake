/******************************************************************************************/
/*                Ejercicio Voluntario Nº2,2. Unidad Didáctica 3                          */
/*   Vector llamando meses de 12 entradas con numero de dias del mes.                     */
/******************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(){
	int meses[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	int dias_anuales = 0;
	for(i=0;i<12;i++){
		dias_anuales += meses[i];
		printf("Mes %d tiene %d días.\n",i+1,meses[i]);
	}
	printf("Dias anuales: %d", dias_anuales);



	return 0;
}
