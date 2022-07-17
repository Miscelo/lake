#include <stdio.h>


int main(){
	int num;
	printf("Escribe un numero entero: ");
	scanf("%d", &num);
	for(int i=1;i<=10;i++){
		printf("%d * %d = %d\n", i,num,num*i);
	}

	return 0;
}
