


/*Leer un número entero y visualizar su tabla de multiplicar. Este ejercicio esta
realizado en pseudos código en el bloque 6 de ejercicios, sírvase de ello para
realizar este en C.*/
#include <stdio.h>


int main(){
	int x;
	scanf("%d",&x);

	for(int i=1;i<=20;i++){
		printf("%d * %d = %d\n",i,x,i*x);
	}





	return 0;
}
