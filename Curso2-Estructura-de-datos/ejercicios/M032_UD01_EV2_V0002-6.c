/* Que lea 10 números por teclado, los almacene en un array y muestre la suma,
 * resta, multiplicación y división de todos.
 */


#include <stdio.h>
#include <stdlib.h>

#define LEN 10

void printArray(double arr[]);
double suma(double arr[]);

int main(){
	double arr[LEN];
	printf("Gib 10 Zahlen ein:\n");
	int i;
	for(i=0;i<LEN;i++){
		scanf("%lf\n", &arr[i]);
	}

	printArray(arr);
	double summe;
	summe = suma(arr);
	printf("\nSumme= %.2lf\n", summe);	

	return EXIT_SUCCESS;
}


double suma(double arr[]){
	double sum=0;;
	int i;
	for(i=0;i<LEN;i++){
		sum+=arr[i];
	}
	return sum;
}


void printArray(double arr[]){
	int i;
	for(i=0;i<LEN;i++){
		printf("%.2lf,", arr[i]);
	}
}
