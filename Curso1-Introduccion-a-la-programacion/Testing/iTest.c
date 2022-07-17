#include <stdio.h>
//Función comprueba si un char introducido es un numero o letra.
//en el caso que no es ni numero , ni letra, empieza de nuevo.
void introducir();

int main(){	
	introducir();
	return 0;
}



void introducir(){
	char input;
	printf("Introduzca un carácter: ");
	scanf("%c", &input);

	//LA expresión de la decisión anidada usa un rango de valores ASCII para
	//diferenciar si es una letra [65,122] o un número [48,57].
	//tambien se accepta SPACE " ", con el valor ASCII [32].
 	if((input >= 65 && input <= 122)|| input == 32){
		printf("La letra es %c.\n",input);
	}
	else if(input >= 48 && input <=57){ 
		printf("El numero es %c.\n", input);
	}
	else{
		//bora el buffer de entrada estándar para evitar Buffer Overflow.
		fflush(stdin);
		introducir();
	}
}


