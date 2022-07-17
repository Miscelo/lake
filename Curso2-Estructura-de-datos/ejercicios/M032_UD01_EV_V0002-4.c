/* Realiza un programa sencillo que inicialice un vector llamado meses de 12 posiciones
 * que contenga el número de días de cada mes. Posteriormente realiza un recorrido del
 * vector mostrando el siguiente mensaje para cada mes:
 * Mes 1 tiene 31 días
 * Mes 2 tiene 28 días
 * ...
 * Mes 12 tiene 31 días
 */


#include <stdio.h>


int main(){
	int diasMes[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	for(i=0;i<12;i++){
		printf("Mes %d tiene %d días\n", i+1, diasMes[i]);
	}


	return 0;
}
