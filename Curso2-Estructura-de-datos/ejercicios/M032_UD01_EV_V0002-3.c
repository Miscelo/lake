/* Realiza un programa que calcule la media de temperatura de una semana. Utiliza un
 * array para almacenar la temperatura de cada día de la semana.
 */

#include <stdio.h>

int main(){
	float temp[7] = {25.0, 25, 25, 25, 20, 5, 15};
	float T_media = 0;
	int i;
	for(i=0;i<7;i++){
		T_media += temp[i];
	}
	printf("Temperatur media: %.2f\n", T_media/7);

	return 0;
}




