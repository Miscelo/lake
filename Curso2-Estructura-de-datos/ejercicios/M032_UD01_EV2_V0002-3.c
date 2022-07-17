/* Que rellene un array con los números primos comprendidos entre 1 y 100 y los
 * muestre en pantalla en orden ascendente.
 */

#include <stdio.h>
#include <stdlib.h>


int isPrime(int num);
int countPrimes(int limit);
void printPrimes(int arr[], int len);
void createPrimeArray(int *arr, int len);

int main(){
	int len = countPrimes(100);
	int arr[len];
	createPrimeArray(arr, len);
	printf("arr: %d\n", arr[2]);
	printPrimes(arr,len);

	return EXIT_SUCCESS;
}


void createPrimeArray(int *arr, int len){
	int i;
	for(i=0;i<len;i++){
		if(isPrime(i+2)==0){
			*(arr+i)=i+2;
		}
	}
}



//Cuenta los numeros primos hasta un cierto numero entero
int countPrimes(int limit){
	int counter = 0;
	int i;
	for(i=2;i<limit;i++){
		if(isPrime(i)==0){
			counter+=1;
		}
	}
	return counter;
}


int isPrime(int num){
	int i;
	for(i=2;i<(num^1/2);i++){
		if(num%i == 0 && i!=num){
			return 1;
		}
	}
	return 0;	
}

void printPrimes(int arr[], int len){
	printf("\nPrimes:=[");
	int i;
	for(i=0;i<=len;i++){
		printf("%d",arr[i]);
		(i<len-1)? printf(","): printf("]\n");
	}
}
