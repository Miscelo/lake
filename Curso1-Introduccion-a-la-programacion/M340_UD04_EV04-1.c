/*Copiar el siguiente codigo y explicar paso a paso la salida que tiene y los valores
de cada una de las variales, si son locales, globales, staticas etc.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimir()
{
	static int var1 = 0;
	int var2 = 0;
	var1=var1 + 1;
	var2=var2 + 1;
	printf("var1 = %d var2 = %d\n", var1,var2);
}


int main(void){
	int i;
	for (i=0;i < 3; i++)
	{
		imprimir();
	}

	return 9;
}
