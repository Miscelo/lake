/* programa mide string de entrada y impime las cantidad sin strlen */

#include <stdio.h>

int main(){
	
	printf("Eingabe: ");
	char arr[99];
	
	fgets(arr, 99, stdin);
	
	
	int len;
	int i;
	for(i=0;arr[i]!='\0';i++){
		len+=1;
	}
	// len-1, man muss \n abziehen
	printf("Länge ist: %d", len-1);


	return 0;
}
