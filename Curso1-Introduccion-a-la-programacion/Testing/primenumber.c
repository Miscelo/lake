/*Primzahlen 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97 */

#include <stdio.h>

typedef enum{false,true} bool;
bool check(int x);

int main(){

	printf("Primenumber to 100: [");
	for(int i=1;i<100;i++){
		if(check(i)) printf("%d, ", i);
	}
	printf("]\n\n");
	
	printf("Introduce a number: ");
	int intro;
	scanf("%d", &intro);
	check(intro) ? printf("%d is a primenumber.\n",intro) : printf("%d is not a primenumber.\n",intro);

	return 0;
}


bool check(int num){
	for(int i=2; i<(num^1/2); i++){
		if(num%i == 0 && i!=num){
			return false;
		}
	}
	return true;
}
