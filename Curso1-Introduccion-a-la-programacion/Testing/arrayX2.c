#include <stdio.h>


int main(void)
{
	/*declaracion varibles.*/
	int temp[31];
	int i, min, max, avg, dias;
	
	printf(" ̈Cuántos dias tiene l mes? ");
	scanf("%d", &dias);
	for(i=0;i<dias; i++)
	{
		printf("introduzca temperatura de cada dia %d: ",i+1);
		scanf("%d", &temp[i]);
	}


	/* Encontrar media */
	avg = 0;
	for(i=0; i<dias;i++){
		avg = avg + temp[i];
	}

	printf("Temperatura media: %d\n", avg/dias);
	


	/*Encontrar min y max */
	min = 200; /* inicializar min y max*/
	max = 0;
	for(i=0; i<dias; i++){
		if(min>temp[i]) min = temp[i];
		if(max<temp[i]) max = temp[i];
	}

	printf("temperatura minima; %d\n", min);
	printf("temperatura máxima; %d\n", max);
	
	
	/*funci¢n que realiza una pausa en el programa para
	 * ver el resultado*/
	fflush( stdin );
	getchar();
	return 0;
}
