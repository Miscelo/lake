#include <stdio.h>

void switchfunc(int nota);

int main(){
	int nota;
	printf("Introduzca una nota!\n");
	scanf("%d", &nota);
	switchfunc(nota);
	return 0;
}

	
void switchfunc(int nota){
	switch(nota){
		case 10: printf("Nota de honor!");
				 	break;
		case 9: printf("Sobresaliente!\n");
				  break;			
		case 8: printf("Notable!\n");
				  break;
		case 7: printf("notable!\n");
				  break;
		case 6: printf("bien!\n");
				  break;
		case 5: printf("suficiente!\n");
				  break;
		case 4: printf("Suspendido!\n");
				  break;
		case 3: printf("Suspendido!\n");
				  break;
		case 2: printf("Suspendido!\n");
				  break;
		case 1: printf("Suspendido total!\n");
				  break;
		default:
				printf("Un numbero de uno a 10.\n");
				  break;
	}
}
