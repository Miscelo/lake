// Funktion berechnet das minimum von 2 Zahlenpaaren so oft ,
// wie man es über die Eingabe, for-schleife , bestätigt.
#include <stdio.h>
// Programa calcula el numero menor de 2 . while loop

#include <stdbool.h>

int menor(int a, int b);

int main(){
		int val1, val2, min;
		printf("*** Para parar, introducri 0 en cada cúmero.***\n");

		do{
		printf("Introduzca un numero: ");
		scanf("%d", &val1);
		printf("Introduzca un segundo numero: ");
		scanf("%d", &val2);
		min = menor(val1,val2);
		printf("El número menor es: %d\n\n",min);

		} while(val1!=0 || val2!=0);

		printf("\nEXIT programm");




  return 0;
}


int menor(int a, int b){
  if (a<=b) return(a);
  else return(b);
}
