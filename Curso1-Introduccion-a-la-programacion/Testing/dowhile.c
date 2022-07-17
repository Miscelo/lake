#include <stdio.h>

typedef enum{false, true} bool;


int main(){
	bool verdad = true;

	if(verdad == true){
	       	printf("WAHR: %d",verdad);
	} else{
		printf("FALSCH: %d", verdad);
	}
	

	// Swtich case

	int nota;
	printf("Geben sie die Nte ein: ");
	scanf("%d", &nota);
	switch(nota){
		case 1: printf("Super");
			break;
		case 2: printf("Gut");
			break;
		case 3: printf("Befriedigend");
			break;
		case 4: printf("Ausreichend");
			break;
		case 5: printf("Nicht ausreichend");
			break;
		case 6: printf("Setzen");
			break;
		default:
			printf("Note von 1 bis 6");
		}
	getchar();

	


	return 0;
}
