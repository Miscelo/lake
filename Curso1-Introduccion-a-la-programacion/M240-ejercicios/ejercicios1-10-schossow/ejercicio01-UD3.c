/* Ejercicio 1
 * Escribid un programa que, dado un array de 10 enteros (introducidos a mano en el
 * código), cuente cuántos números primos contiene.
*/

#include <stdio.h>

#define len 10
typedef enum{false,true} bool;     // declarar boolean, false=0, true=1


void printArray(int array[], int l); // Función imprime el array introducido.
bool isprime(int n);                 // devuelve true, si el numero es primo, sino false
void countPrimeNumbers(int array[], int l);    // cuenta e imprime la cantidad de numeros primos


int main(){
	int i;
	int num[len];

	i=0;
	printf("Introduza Usted %d numeros enteros:\n", len);
	while(i!=len){
		printf("%d: ", len-i);
	    	scanf("%d", &num[i]);
		i++;
	}

	printArray(num, len);
	countPrimeNumbers(num, len);
	fflush(stdin);
	return 0;
}

void printArray(int array[], int l){
	printf("\n Array:=[");
	int j;
	for(j=0;j<l;j++){
		printf("%d", array[j]);
		(j<(l-1))? printf(",") : printf("]\n");
	}

}

bool isprime(int n){
	if(n<=1){
		return false;
	}
	for(int i=2;i<n;i++){
		if(n%i == 0)
			return false;
	}
	return true;
}

void countPrimeNumbers(int array[], int l){
	int i;
	int primecounter = 0;
	for(i=0;i<l;i++){
		if(isprime(array[i])==true){
			primecounter++;
		}
	}
	printf("\n * Usted ha introducido %d numeros primos! *\n", primecounter);
}
